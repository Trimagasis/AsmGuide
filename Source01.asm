.686
.model flat, stdcall                      ;необходимая модел памяти под Windows
option casemap:none                       ;чтобы различать большие и малые буковки
WinMain proto :DWORD,:DWORD,:DWORD,:DWORD ;прототип используемой функции
count proto :DWORD,:DWORD  
Paint_Proc proto :DWORD, :DWORD

;подключение библиотек
includelib C:\masm32\lib\user32.lib
includelib C:\masm32\lib\kernel32.lib
includelib C:\masm32\lib\gdi32.lib
include C:\masm32\include\windows.inc
include C:\masm32\include\user32.inc
include C:\masm32\include\kernel32.inc
include C:\masm32\include\gdi32.inc

_point struc                               ;структура точки для рисования фигур
 x dd ?
 y dd ?
_point ends

;сегмент данных
.data
	              triangle  _point 4 dup(<>)                       	;Структура точек треугольника

	;координаты прямоугольников
	Rectangle1_x1 dd        0                                      	;координаты левого верхнего угла прямоугольника1
	Rectangle1_y1 dd        400
	Rectangle1_x2 dd        120                                    	;координаты правого нижнего угла прямоугольника1
	Rectangle1_y2 dd        500

	Rectangle2_x1 dd        120                                    	;координаты левого верхнего угла прямоугольника2
	Rectangle2_y1 dd        350
	Rectangle2_x2 dd        240                                    	;координаты правого нижнего угла прямоугольника2
	Rectangle2_y2 dd        500

	Rectangle3_x1 dd        240                                    	;координаты левого верхнего угла прямоугольника3
	Rectangle3_y1 dd        300
	Rectangle3_x2 dd        360                                    	;координаты правого нижнего угла прямоугольника3
	Rectangle3_y2 dd        500

	Rectangle4_x1 dd        360                                    	;координаты левого верхнего угла прямоугольника4
	Rectangle4_y1 dd        350
	Rectangle4_x2 dd        480                                    	;координаты правого нижнего угла прямоугольника4
	Rectangle4_y2 dd        500

	Rectangle5_x1 dd        480                                    	;координаты левого верхнего угла прямоугольника5
	Rectangle5_y1 dd        400
	Rectangle5_x2 dd        600                                    	;координаты правого нижнего угла прямоугольника5
	Rectangle5_y2 dd        500

	;координаты круга по умолчанию
	Ellipse_x1    dd        475                                    	;координаты левого верхнего угла элипса
	Ellipse_y1    dd        125
	Ellipse_x2    dd        500                                    	;координаты правого нижнего угла элипса
	Ellipse_y2    dd        150

	brushBack     dd        ?
	ClassName     db        "SimpleWinClass", 0                    	;имя класса окна
	AppName       db        "Asm Graphic Animation Tamplate 01 ", 0	;имя приложения
	              hInstance HINSTANCE ?                            	;handle экземпляра программы
	RedBrush      dd        ?
	BlueBrush     dd        ?

	i             dd        100                                    	;счётчик кол-ва кадров анимации

.code
	start:                                                                         	;точка входа                   Следует заметить, что процедуры Windows обычно возвращают значение в eax!
	        invoke GetModuleHandle, NULL                                           	;получение значения баз. адреса по которому загружен модуль
	        mov    hInstance, eax                                                  	;
	        invoke WinMain, hInstance, NULL, NULL, NULL
	        invoke ExitProcess, eax

WinMain proc hInst:HINSTANCE, hPrevInst:HINSTANCE, CmdLine:LPSTR, CmdShow:DWORD
	        LOCAL  wc:WNDCLASSEX
	        LOCAL  msg:MSG
	        LOCAL  hwnd:HWND
	        mov    wc.cbSize, SIZEOF WNDCLASSEX                                    	;размер структуры
	        mov    wc.style, CS_HREDRAW or CS_VREDRAW                              	;стиль класса
	        mov    wc.lpfnWndProc, OFFSET WndProc                                  	;смещение процедуры окна
	        mov    wc.cbClsExtra, NULL                                             	;дополнительные байты класса
	        mov    wc.cbWndExtra, NULL                                             	;дополнительные файлы для каждого окна класса
	        push   hInst
	        pop    wc.hInstance                                                    	;handle модуля с которым будет связать класс
	        mov    wc.hbrBackground, 0                                             	;цвет окон класса
	        mov    wc.lpszMenuName, 0                                              	;идентификатор меню в ресурсах
	        mov    wc.lpszClassName, OFFSET ClassName                              	;имя класса
	        invoke LoadIcon, NULL, IDI_APPLICATION
	        mov    wc.hIcon, eax                                                   	;иконка окон класса
	        invoke LoadCursor, NULL, IDC_ARROW
	        mov    wc.hCursor, eax                                                 	;загружаем курсор Windows, и определяем его окну
	        invoke RegisterClassEx, addr wc                                        	;Теперь наша структура готова, регистрируем её
	;Создаем кисти и перо
	        invoke CreateSolidBrush, 0000099h                                      	;логическую кисть, которая имеет заданный сплошной тон
	        mov    RedBrush, eax                                                   	;задаем цвет
	        invoke CreateSolidBrush, 00ff3333h
	        mov    BlueBrush, eax
	        INVOKE CreateWindowEx, WS_EX_CLIENTEDGE, ADDR ClassName, ADDR AppName,\
WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,\
CW_USEDEFAULT, 600, 500, NULL, NULL,\
hInst, NULL
	        mov    hwnd, eax                                                       	;создание окна
	        INVOKE ShowWindow, hwnd, SW_SHOWNORMAL                                 	;показ окна
	        INVOKE UpdateWindow, hwnd                                              	;перерисовывка содержимого окна
.WHILE TRUE
	        INVOKE GetMessage, ADDR msg, NULL, 0, 0
.BREAK .IF (!eax)
	        INVOKE TranslateMessage, ADDR msg                                      	;трансляция ввода с клавиатуры
                INVOKE DispatchMessage, ADDR msg    ;отправляем сообщение оконной процедуре
.ENDW
	        mov    eax, msg.wParam
	        ret
WinMain endp

WndProc proc hWnd:HWND, uMsg:UINT, wParam:WPARAM, lParam:LPARAM
	        LOCAL  hOld:HDC
	        LOCAL  hMemDC: HDC
	        LOCAL  hBmp: HDC
	        LOCAL  ps:PAINTSTRUCT
	        LOCAL  rc:RECT
	        LOCAL  hdc:HDC

.IF uMsg==WM_DESTROY
	        invoke PostQuitMessage, NULL                                                        	;послать сообщение WM_QUIT
	        ret
.ELSEIF uMsg==WM_PAINT
	        invoke GetClientRect, hWnd, ADDR rc
	        invoke BeginPaint, hWnd, ADDR ps
	        mov    hdc, eax
	;Контекст устройства в памяти
	        invoke CreateCompatibleDC, hdc
	        mov    hMemDC, eax
	;Bitmap для рисования
	        invoke CreateCompatibleBitmap, hdc, rc.right, rc.bottom
	        mov    hBmp, eax
	;Присоединяем bitmap к DC
	        invoke SelectObject, hMemDC, hBmp
	        mov    hOld, eax
	;Заливка рабочей области окна
	        invoke FillRect, hMemDC, ADDR rc, 0

	;Рисуем фигуры
	        invoke SelectObject,hMemDC,BlueBrush                                                	;выбираем  цвет
	        invoke Rectangle, hMemDC, Rectangle1_x1, Rectangle1_y1, Rectangle1_x2, Rectangle1_y2	;рисуем прямоугольник1
	        invoke Rectangle, hMemDC, Rectangle2_x1, Rectangle2_y1, Rectangle2_x2, Rectangle2_y2	;рисуем прямоугольник2
	        invoke Rectangle, hMemDC, Rectangle3_x1, Rectangle3_y1, Rectangle3_x2, Rectangle3_y2	;рисуем прямоугольник3
	        invoke Rectangle, hMemDC, Rectangle4_x1, Rectangle4_y1, Rectangle4_x2, Rectangle4_y2	;рисуем прямоугольник4
	        invoke Rectangle, hMemDC, Rectangle5_x1, Rectangle5_y1, Rectangle5_x2, Rectangle5_y2	;рисуем прямоугольник5

	        invoke SelectObject,hMemDC,RedBrush                                                 	;выбираем  цвет
	        invoke Ellipse, hMemDC, Ellipse_x1, Ellipse_y1, Ellipse_x2, Ellipse_y2              	;рисуем эллипс
			
	;Двойная буферизация
	        invoke BitBlt, hdc, 0, 0, rc.right, rc.bottom, hMemDC, 0, 0, SRCCOPY
	        invoke SelectObject, hMemDC, hOld
	        invoke DeleteObject, hBmp
	        invoke DeleteDC, hMemDC
	        invoke EndPaint, hdc, ADDR ps

	;перемещение фигур (изменение координат)
.IF i>=50
	        sub    Rectangle2_y1,2                                                              	;изменение координат прямоугольника2

	        sub    Ellipse_x1,1                                                                 	;изменение координат элипса
	        sub    Ellipse_y1,1
	        add    Ellipse_x2,1
	    add Ellipse_y2,1
.ELSE
	     add Rectangle2_y1,2	;изменение координат прямоугольника2

	     add Ellipse_x1,1   	;изменение координат элипса
	     add Ellipse_y1,1
	     sub Ellipse_x2,1
	    sub Ellipse_y2,1
.ENDIF

.IF (i<=25)||(i>75)		;изменение координат прямоугольника1
	        sub    Rectangle1_y1,3
.ELSE
	        add    Rectangle1_y1,3
.ENDIF

.IF (i<=5)||(i>55)		;изменение координат прямоугольника3
	        sub    Rectangle3_y1,1
.ELSE
	        add    Rectangle3_y1,1
.ENDIF

.IF (i<=35)||(i>85)		;изменение координат прямоугольника4
	        add    Rectangle4_y1,4
.ELSE
	        sub    Rectangle4_y1,4
.ENDIF

.IF (i<=10)||(i>60)		;изменение координат прямоугольника5
	        sub    Rectangle5_y1,5
.ELSE
	        add    Rectangle5_y1,5
.ENDIF

	      push 20   	;Таймер (время между соседними "кадрами" анимации)
	      call Sleep
	        
.IF i!=0
	        dec    i                                                                            	;перейти к следующему кадру
.ELSE
	        mov    i,100                                                                        	;запустить цикл заного
.ENDIF

	      invoke InvalidateRect, hWnd, 0, FALSE	;перерисовываем окно

.ELSE
	     invoke DefWindowProc, hWnd, uMsg, wParam, lParam
	        ret
.ENDIF

	      xor eax, eax
	      ret
WndProc endp
end start