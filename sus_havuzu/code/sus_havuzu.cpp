#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <dos.h>

main(){
	
 int sur=DETECT,gmode;
 initgraph(&sur,&gmode,"C:\\TC\\BGI");
 
 int x1, y1, x2, y2;

//en b�y�k dikd�rtgen
setcolor(WHITE);
rectangle(15,10,615,460);
settextstyle(BOLD_FONT,0,1);
//�stteki k���k k�s�m
setcolor(WHITE);
setfillstyle(SOLID_FILL,CYAN);
rectangle(305, 70, 325, 100);
floodfill(311, 80, WHITE); 
//ORTADAK� D�REK
setfillstyle(SOLID_FILL, LIGHTMAGENTA);
rectangle(300, 100, 330, 440);
floodfill(320, 400, WHITE);
 
 
// 1. k�s�m i�in ana hat
setcolor(WHITE);
setlinestyle(SOLID_LINE, 1, 3);
// suyun doldu�u k�s�m SA�
line(300,137,404,137); // X EKSEN�NDEK� ��ZG�
line(404,137,404,115); // Y EKSEN�NDEK� ��ZG�
// suyun akaca�� boru SA�
line(404,115,414,115);
line(404,110,404,100);
line(404,110,414,110);
//suyun doldu�u k�s�m SOL
line(230,137,304,137);
line(230,137,230,115);
//suyun akaca�� boru SOL
line(230,115,220,115);
line(230,110,230,100);
line(230,110,220,110);

//2. k�s�m ana hat
setcolor(WHITE);
// suyun doldu�u k�s�m 
line(150,217,484,217); // X EKSEN�
line(150,217,150,197); // SA� TARAF Y EKSEN�
line(484,217,484,197); // SOL TARAF Y EKSEN� 
// suyun akaca�� boru SA�
line(484,190,484,180); // BU ARADAK� BO�LUK VE YUKARI OLAN KISIM
line(484,190,494,190);  //BU �K�S� BORUNUN �IKINTISI
line(484,197,494,197);
// suyun akaca�� boru SA�
line(150,190,150,180); // BU ARADAK� BO�LUK VE YUKARI OLAN KISIM
line(150,190,140,190);  //BU �K�S� BORUNUN �IKINTISI
line(150,197,140,197);

//3. k�s�m ana hat
setcolor(WHITE);
// suyun doldu�u k�s�m 
line(50,297,584,297); // X EKSEN�
line(50,297,50,277); // SA� TARAF Y EKSEN�
line(584,297,584,277); // SOL TARAF Y EKSEN� 
// suyun akaca�� boru SA�
line(584,271,584,261); // BU ARADAK� BO�LUK VE YUKARI OLAN KISIM
line(584,271,594,271);  //BU �K�S� BORUNUN �IKINTISI
line(584,277,594,277);
// suyun akaca�� boru SOL
line(50,271,50,261); // BU ARADAK� BO�LUK VE YUKARI OLAN KISIM
line(50,271,40,271);  //BU �K�S� BORUNUN �IKINTISI
line(50,277,40,277);

//ALT KISIM TOPRAK G�B� G�STERMEK ���N GEREKL� KODLAR
setcolor(BROWN);
setfillstyle(SOLID_FILL, BROWN);
rectangle(17,441,613,458);
floodfill(20,446,BROWN);


//En �st k�s�mdan su ��kmas� i�in kodlar
setcolor(BLUE);
setlinestyle(SOLID_LINE, 1, 2);
//Sa�dan suyun a�a�� inmesi i�in SA�
arc(325, 90, 0, 90,20);
arc(325, 93, 0, 90,20);
arc(325, 96, 0, 90,20);
arc(325, 99, 0, 90,20);
arc(325, 102, 0, 90,20);
arc(325, 105, 0, 90,20);
arc(325, 108, 0, 90,20);
arc(325, 111, 0, 90,20);

//Soldan suyun a�a�� inmesi i�in SOL
arc(305, 90, 90, 180,20);
arc(305, 93, 90, 180,20);
arc(305, 96, 90, 180,20);
arc(305, 99, 90, 180,20);
arc(305, 102, 90, 180,20);
arc(305, 105, 90, 180,20);
arc(305, 108, 90, 180,20);
arc(305, 111, 90, 180,20);


//1. KISIM ���N SU KODLARI
/* suyun rengi ve dolacak k�sm�n kordinatlar� */
setcolor(BLUE);
setlinestyle(SOLID_LINE, 1, 3);
x1 = 232, y1 = 135;
x2 = 402, y2 = 135;
/* suyun yerden y�kselmesi i�in */
while (y1 > 112) {
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(x1, y1, x2, y2);
    floodfill(x1, y1, BLUE);
    y1 = y1 - 2;
    y2 = y2 - 2;
    delay(300);
}
/* borudan tanka giden su RENG� */
setcolor(BLUE);
setlinestyle(SOLID_LINE, 1, 3);
//Sa�dan suyun a�a�� inmesi i�in SA�
arc(404, 187, 0, 90,74);
//Soldan suyun a�a�� inmesi i�in SOL
arc(231, 187, 90, 180,74);

// 2.KISIM (ORTA KISIM)  SU DOLAN ALAN ���N GEREKL� KODLAR
/* suyun rengi ve dolacak k�sm�n kordinatlar� */
setcolor(BLUE);
setlinestyle(SOLID_LINE, 1, 3);
x1 = 152, y1 = 215;
x2 = 482, y2 = 215;
/* suyun yerden y�kselmesi i�in */
while (y1 > 191) {
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(x1, y1, x2, y2);
    floodfill(x1, y1, BLUE);
    y1 = y1 - 2;
    y2 = y2 - 2;
    delay(300);
}

/* borudan tanka giden su RENG� */
setcolor(BLUE);
setlinestyle(SOLID_LINE, 1, 3);
//Sa�dan suyun a�a�� inmesi i�in SA�
arc(483, 267, 0, 90,74);
//Soldan suyun a�a�� inmesi i�in SOL
arc(151, 267, 90, 180,74);

// 3.KISIM (SON KISIM)  SU DOLAN ALAN ���N GEREKL� KODLAR
/* suyun rengi ve dolacak k�sm�n kordinatlar� */
setcolor(BLUE);
setlinestyle(SOLID_LINE, 1, 3);
x1 = 52, y1 = 295;
x2 = 582, y2 =295;
/* suyun yerden y�kselmesi i�in */
while (y1 > 275) {
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(x1, y1, x2, y2);
    floodfill(x1, y1, BLUE);
    y1 = y1 - 2;
    y2 = y2 - 2;
    delay(300);
}


  
getch();
getchar();
closegraph();
return 0;  
}

