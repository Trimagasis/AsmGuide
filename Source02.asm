.686
.model flat, stdcall                      ;необходимая модел памяти под Windows
option casemap:none                       ;чтобы различать большие и малые буковки
WinMain proto :DWORD,:DWORD,:DWORD,:DWORD ;прототип используемой функции
count proto :DWORD,:DWORD  
Paint_Proc proto :DWORD, :DWORD

;подключим необходимые файлы
include C:\masm32\include\windows.inc
include C:\masm32\include\user32.inc
include C:\masm32\include\kernel32.inc
include C:\masm32\include\gdi32.inc
includelib C:\masm32\lib\user32.lib
includelib C:\masm32\lib\kernel32.lib
includelib C:\masm32\lib\gdi32.lib

_point struc                               ;структура точки для рисования ромба
 x dd ?
 y dd ?
_point ends

;сегмент данных
.data
	              triangle  _point 4 dup(<>)                       	;Структура точек треугольника

	;массив точек для анимации треугольника
	triangle_matr dd        100, 200, 100, 100, 200, 200, 100, 200,
100, 200, 100, 100, 200, 100, 100, 200,
100, 100, 200, 100, 200, 200, 100, 100,
200, 100, 200, 200, 100, 200, 200, 100

	;координаты прямоугольников
	Rectangle0_x1 dd        0                                      	;координаты левого верхнего угла прямоугольника0
	Rectangle0_y1 dd        0
	Rectangle0_x2 dd        0                                      	;координаты правого нижнего угла прямоугольника0
	Rectangle0_y2 dd        50
	
	Rectangle1_x1 dd        50                                     	;координаты левого верхнего угла прямоугольника1
	Rectangle1_y1 dd        0
	Rectangle1_x2 dd        100                                    	;координаты правого нижнего угла прямоугольника1
	Rectangle1_y2 dd        50

	Rectangle2_x1 dd        150                                    	;координаты левого верхнего угла прямоугольника2
	Rectangle2_y1 dd        0
	Rectangle2_x2 dd        200                                    	;координаты правого нижнего угла прямоугольника2
	Rectangle2_y2 dd        50

	Rectangle3_x1 dd        250                                    	;координаты левого верхнего угла прямоугольника3
	Rectangle3_y1 dd        0
	Rectangle3_x2 dd        300                                    	;координаты правого нижнего угла прямоугольника3
	Rectangle3_y2 dd        50

	Rectangle4_x1 dd        350                                    	;координаты левого верхнего угла прямоугольника4
	Rectangle4_y1 dd        0
	Rectangle4_x2 dd        400                                    	;координаты правого нижнего угла прямоугольника4
	Rectangle4_y2 dd        50

	Rectangle5_x1 dd        450                                    	;координаты левого верхнего угла прямоугольника5
	Rectangle5_y1 dd        0
	Rectangle5_x2 dd        500                                    	;координаты правого нижнего угла прямоугольника5
	Rectangle5_y2 dd        50

	Rectangle6_x1 dd        550                                    	;координаты левого верхнего угла прямоугольника6
	Rectangle6_y1 dd        0
	Rectangle6_x2 dd        600                                    	;координаты правого нижнего угла прямоугольника6
	Rectangle6_y2 dd        50

	;координаты элипса по умолчанию
	Ellipse_x1    dd        400                                    	;координаты левого верхнего угла элипса
	Ellipse_y1    dd        100
	Ellipse_x2    dd        500                                    	;координаты правого нижнего угла элипса
	Ellipse_y2    dd        200

	;координаты прямоугольника с закруглёнными краями по умолчанию
	RoundRect_x1  dd        400                                    	;координаты левого верхнего угла прямоугольника
	RoundRect_y1  dd        400
	RoundRect_x2  dd        450                                    	;координаты правого нижнего угла прямоугольника
	RoundRect_y2  dd        450

	brushBack     dd        ?
	ClassName     db        "SimpleWinClass", 0                    	;имя класса окна
	AppName       db        "Asm Graphic Animation Tamplate 02 ", 0	;имя приложения
	              hInstance HINSTANCE ?                            	;handle экземпляра программы
	RedBrush      dd        ?
	GreenBrush    dd        ?
	BlueBrush     dd        ?
	DefPen        dd        ?

	i             dd        50
	crl01         dd        96

.code
	start:                                                                         	;точка входаb (процедуры Windows обычно возвращают значение в eax!)
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
	        invoke CreateSolidBrush, 0000cc00h
	        mov    GreenBrush, eax
	        invoke CreateSolidBrush, 00ff3333h
	        mov    BlueBrush, eax

	        invoke CreatePen, PS_SOLID, 2, 0000000h
	        mov    DefPen, eax
	        INVOKE CreateWindowEx, WS_EX_CLIENTEDGE, ADDR ClassName, ADDR AppName,\
WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,\
CW_USEDEFAULT, 600, 600, NULL, NULL,\
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
	        invoke PostQuitMessage, NULL                                                            	;послать сообщение WM_QUIT
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
	
	        invoke SelectObject,hMemDC,BlueBrush                                                    	;выбираем  цвет
	        invoke Rectangle, hMemDC, Rectangle0_x1, Rectangle0_y1, Rectangle0_x2, Rectangle0_y2    	;рисуем прямоугольник0
	        invoke Rectangle, hMemDC, Rectangle1_x1, Rectangle1_y1, Rectangle1_x2, Rectangle1_y2    	;рисуем прямоугольник1
	        invoke Rectangle, hMemDC, Rectangle2_x1, Rectangle2_y1, Rectangle2_x2, Rectangle2_y2    	;рисуем прямоугольник2
	        invoke Rectangle, hMemDC, Rectangle3_x1, Rectangle3_y1, Rectangle3_x2, Rectangle3_y2    	;рисуем прямоугольник3
	        invoke Rectangle, hMemDC, Rectangle4_x1, Rectangle4_y1, Rectangle4_x2, Rectangle4_y2    	;рисуем прямоугольник4
	        invoke Rectangle, hMemDC, Rectangle5_x1, Rectangle5_y1, Rectangle5_x2, Rectangle5_y2    	;рисуем прямоугольник5
	        invoke Rectangle, hMemDC, Rectangle6_x1, Rectangle6_y1, Rectangle6_x2, Rectangle6_y2    	;рисуем прямоугольник5

	        invoke SelectObject,hMemDC,RedBrush                                                     	;выбираем  цвет
	        invoke Ellipse, hMemDC, Ellipse_x1, Ellipse_y1, Ellipse_x2, Ellipse_y2                  	;рисуем элипса по коордианатам прямоугольника,описывающего эллипс

	        invoke RoundRect, hMemDC, RoundRect_x1, RoundRect_y1, RoundRect_x2, RoundRect_y2, 20, 20	;рисуем прямоугольник с закруглёнными краями
			
	;рисуем треугольник

	        mov    esi,0
.IF crl01!=0
	        mov    ebx,crl01
.ENDIF
	      
	      invoke SelectObject,hMemDC,GreenBrush                               	;выбираем  цвет
	      lea    edi,triangle                                                 	;массив точек ромба
	      mov    eax,triangle_matr[ebx][esi]
	      mov    [edi],eax                                                    	;x1
	      mov    eax,triangle_matr[ebx][esi+4]
	      mov    [edi+4],eax                                                  	;y1
	      mov    eax,triangle_matr[ebx][esi+8]
	      mov    [edi+8],eax                                                  	;x2
	      mov    eax,triangle_matr[ebx][esi+12]
	      mov    [edi+12],eax                                                 	;y2
	      mov    eax,triangle_matr[ebx][esi+16]
	      mov    [edi+16],eax                                                 	;x3
	      mov    eax,triangle_matr[ebx][esi+20]
	      mov    [edi+20],eax                                                 	;y3
	      mov    eax,triangle_matr[ebx][esi+24]
	      mov    [edi+24],eax                                                 	;x4 (=x1)
	      mov    eax,triangle_matr[ebx][esi+28]
	      mov    [edi+28],eax                                                 	;y4 (=y1)

	      invoke Polygon,hMemDC,edi,4                                         	;рисуем треугольник по точкам в массиве

	;Двойная буферизация
	      invoke BitBlt, hdc, 0, 0, rc.right, rc.bottom, hMemDC, 0, 0, SRCCOPY
	      invoke SelectObject, hMemDC, hOld
	      invoke DeleteObject, hBmp
	      invoke DeleteDC, hMemDC
	      invoke EndPaint, hdc, ADDR ps
	  
	;Таймер (время между соседними "кадрами" анимации)
	      push   50
	      call   Sleep

	;изменение координат треугольника
.IF crl01!=0
	      sub    crl01,32
	.ELSE
	        mov    crl01,96
.ENDIF

	;изменение координат прямоугольников
.IF i!=0
	      dec i

	      add Rectangle0_x2,2
.IF i<25
	        add    Rectangle0_x1,2
.ENDIF
	      add Rectangle1_x1,2
	      add Rectangle1_x2,2
	      add Rectangle2_x1,2
	      add Rectangle2_x2,2
	      add Rectangle3_x1,2
	      add Rectangle3_x2,2
	      add Rectangle4_x1,2
	      add Rectangle4_x2,2
	      add Rectangle5_x1,2
	      add Rectangle5_x2,2
		  
.IF i>=25
	        add    Rectangle6_x1,2
.ENDIF
	.ELSE
	      mov i,50

	      mov Rectangle0_x1,0
	      mov Rectangle0_x2,0
	      mov Rectangle1_x1,50
	      mov Rectangle1_x2,100
	      mov Rectangle2_x1,150
	      mov Rectangle2_x2,200
	      mov Rectangle3_x1,250
	      mov Rectangle3_x2,300
	      mov Rectangle4_x1,350
	      mov Rectangle4_x2,400
	      mov Rectangle5_x1,450
	      mov Rectangle5_x2,500
	        mov    Rectangle6_x1,550
.ENDIF

;изменение координат элипса
.IF (i<=15)||(i>40)
	      sub Ellipse_x1,3
	.ELSE
	        add    Ellipse_x1,3
.ENDIF

.IF (i<=5)||(i>30)
	      sub Ellipse_y1,1
	      add Ellipse_x2,1
	.ELSE
	      add Ellipse_y1,1
	        sub    Ellipse_x2,1
.ENDIF

.IF (i<=20)||(i>45)
	      add Ellipse_y2,4
	.ELSE
	        sub    Ellipse_y2,4
.ENDIF

.IF (i<=10)||(i>35)
	      sub Ellipse_y1,5
	.ELSE
	        add    Ellipse_y1,5
.ENDIF

	      invoke InvalidateRect, hWnd, 0, FALSE	;перерисовываем окно

;изменение координат квадрата (управление пользователем)
	.ELSEIF uMsg==WM_KEYDOWN                        ;если была нажата какая-либо клавиша на клавиатуре

.IF wParam==37                             		;если была нажата клавиша left
	      sub    RoundRect_x1,5                	;влево
	      sub    RoundRect_x2,5
	        invoke InvalidateRect, hWnd, 0, FALSE                                                   	;перерисовываем окно
.ENDIF

.IF wParam==38          		;если была нажата клавиша up
	      sub RoundRect_y1,5	;вверх
	      sub RoundRect_y2,5
	        invoke InvalidateRect, hWnd, 0, FALSE                                                   	;перерисовываем окно
.ENDIF

.IF wParam==39          		;если была нажата клавиша right
	      add RoundRect_x1,5	;вправо
	      add RoundRect_x2,5
	        invoke InvalidateRect, hWnd, 0, FALSE                                                   	;перерисовываем окно
.ENDIF

.IF wParam==40          		;если была нажата клавиша down
	      add RoundRect_y1,5	;вниз
	      add RoundRect_y2,5
	        invoke InvalidateRect, hWnd, 0, FALSE                                                   	;перерисовываем окно
.ENDIF
	   
	.ELSE
	      invoke DefWindowProc, hWnd, uMsg, wParam, lParam
	        ret
.ENDIF

	      xor eax, eax
	      ret
WndProc endp
end start