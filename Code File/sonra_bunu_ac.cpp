#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


main(){

 

 int sur=DETECT,gmode;
 initgraph(&sur,&gmode,"C:\\TC\\BGI");
 
 setcolor(WHITE);
 rectangle(15,30,615,406); // EN B�Y�K dikd�rtgen �izer
   
    settextstyle(BOLD_FONT,0,1);

   
   setcolor(BLUE);
   rectangle(190,50,440,90);
   
   setcolor(CYAN);
   outtextxy(215, 60, "SORU 1)  4 x  5 = ? ");
   
   setcolor(LIGHTCYAN);
   outtextxy(265,110,"10 PUAN ");
   
   setcolor(LIGHTMAGENTA);
   rectangle(110,140,220,180);  // ilk cevap dikd�rtgeni
   
   setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(140, 152, " A) 5 "); // ilk cevap yaz�s�

	setcolor(LIGHTMAGENTA);
   rectangle(110,260,220,300);  // �K�NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(138, 272, " B) 12 "); // �K�NC� cevap yaz�s�

   
   setcolor(LIGHTMAGENTA);
   rectangle(375,140,485,180);  // ���NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(400, 152, " C) 20 "); // ���NC� cevap yaz�s�
   
   
   setcolor(LIGHTMAGENTA);
   rectangle(375,260,485,300);  // D�RD�NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(400, 272, " D) 12 "); // D�RD�NC� cevap yaz�s�
   
   
//PUANLAMA ���N DE���KEN
int a = 0;
char arr[50] ;
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

   
   //1. SORU ���N �IK ��ARETLEME

   int rastgele;
srand(time(NULL)); 
rastgele=rand()%4;

getch();   /* wait for a key */

if (rastgele == 0 ) {
	
	setfillstyle(SOLID_FILL,RED);
   fillellipse(165,159,60,24); // 1. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,159,60,24); // 2. �IK ���N 

sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
   
}
else if (rastgele == 1 ){

   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,159,60,24); // 2. �IK ���N 
   a = a  + 10;
   
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (rastgele == 2 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(165,282,60,24); // 3. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
	fillellipse(430,159,60,24);  // 2. �IK ���N
	
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
	
	}
	
	
else if (rastgele == 3 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(430,282,60,24); //4. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
	fillellipse(430,159,60,24);  // 2. �IK ���N
	
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
	
	}
   
   
   
   
   
   
   
//------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------  
//-------------------------------------------------------------------------------------------   
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
   
 
 
 
 
   // 2. SORUYA GE�MEK ���N TU�A BAS
   
   getch();   /* wait for a key */
   clearviewport();   /* clear the viewport */
  //EKRAN TEM�ZLEND�
  
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

  // 2. SORU VE �IKLARI
  
  setcolor(WHITE);
 rectangle(15,30,615,406); // EN B�Y�K dikd�rtgen �izer
  
    setcolor(LIGHTBLUE);
   rectangle(190,50,440,90);
   
   setcolor(YELLOW);
   outtextxy(215, 60, "SORU 2)  12 : 3 = ? ");
   
   setcolor(LIGHTCYAN);
   outtextxy(265,110,"10 PUAN ");
   
   setcolor(CYAN);
   rectangle(110,140,220,180);  // ilk cevap dikd�rtgeni
   
   setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(140, 152, " A) 2 "); // ilk cevap yaz�s�

	setcolor(CYAN);
   rectangle(110,260,220,300);  // �K�NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(138, 272, " B) 11 "); // �K�NC� cevap yaz�s�

   
   setcolor(CYAN);
   rectangle(375,140,485,180);  // ���NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(400, 152, " C) 3 "); // ���NC� cevap yaz�s�
   
   
   setcolor(CYAN);
   rectangle(375,260,485,300);  // D�RD�NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(400, 272, " D) 4 "); // D�RD�NC� cevap yaz�s�
   
   
   
   
   //2. SORU ���N �IK ��ARETLEME
   
   int soruiki;
srand(time(NULL)); 
soruiki=rand()%4;

getch();   /* wait for a key */

if (soruiki == 0 ) {

	setfillstyle(SOLID_FILL,RED);
   fillellipse(165,159,60,24); // 1. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. �IK ���N
   
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (soruiki == 1 ){

	setfillstyle(SOLID_FILL,RED);
   fillellipse(430,159,60,24); // 2. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. �IK ���N 
   
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (soruiki == 2 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(165,282,60,24); // 3. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. �IK ���N
   
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
   
	}
	
	
else if (soruiki == 3 ){

   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. �IK ���N
    a = a  + 10;
    
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

   getch();   /* wait for a key */
	}
   
   
   
   
   
//-------------------------------------------------------------------------------------------   
//-------------------------------------------------------------------------------------------   
//-------------------------------------------------------------------------------------------   
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------



   
    // 3. SORUYA GE�MEK ���N TU�A BAS
   
   getch();   /* wait for a key */
   clearviewport();   /* clear the viewport */
  //EKRAN TEM�ZLEND�
  
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
  
  setcolor(WHITE);
 rectangle(15,30,615,406); // EN B�Y�K dikd�rtgen �izer
  
  // 3. SORU VE �IKLARI
    setcolor(YELLOW);
   rectangle(190,50,440,90);
   
   setcolor(LIGHTBLUE);
   outtextxy(215, 60, "SORU 3)  23 - 11 = ? ");
   
   setcolor(LIGHTCYAN);
   outtextxy(265,110,"10 PUAN ");
   
   setcolor(CYAN);
   rectangle(110,140,220,180);  // ilk cevap dikd�rtgeni
   
   setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(140, 152, " A) 12 "); // ilk cevap yaz�s�

	setcolor(CYAN);
   rectangle(110,260,220,300);  // �K�NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(138, 272, " B) 2 "); // �K�NC� cevap yaz�s�

   
   setcolor(CYAN);
   rectangle(375,140,485,180);  // ���NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(400, 152, " C) 11 "); // ���NC� cevap yaz�s�
   
   
   setcolor(CYAN);
   rectangle(375,260,485,300);  // D�RD�NC� cevap dikd�rtgeni

	setcolor(LIGHTGRAY); // cevaplar�n rengi
   outtextxy(400, 272, " D) 34 "); // D�RD�NC� cevap yaz�s�
   
   



// 3. SORU ���N �IK ��ARETLEME

int soruuc;
srand(time(NULL)); 
soruuc=rand()%4;

getch();   /* wait for a key */

if (soruuc == 0 ) {

	setfillstyle(SOLID_FILL,GREEN);
   fillellipse(165,159,60,24); // 1. �IK ���N
	a = a  + 10;
	
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

   getch();   /* wait for a key */
   

}
else if (soruuc == 1 ){

	setfillstyle(SOLID_FILL,RED);
   fillellipse(430,159,60,24); // 2. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(165,159,60,24); // 1. �IK ���N
   
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (soruuc == 2 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(165,282,60,24); // 3. �IK ���N
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
      fillellipse(165,159,60,24); // 1. �IK ���N
      
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

	}
	
	
else if (soruuc == 3 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(430,282,60,24); //4. �IK ���N
   getch();   /* wait for a key */
	setfillstyle(SOLID_FILL,GREEN);
    fillellipse(165,159,60,24); // 1. �IK ���N
    
sprintf(arr , "�U AN K� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
   
	}
   



// YARI�MA B�T�M�

getch();   /* wait for a key */
   clearviewport();   /* clear the viewport */
  //EKRAN TEM�ZLEND�

setcolor(WHITE);
 rectangle(15,30,615,406); // EN B�Y�K dikd�rtgen �izer

sprintf(arr , "YARI�MA B�TT� PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(130, 200, arr);
  
  
  
getchar();
closegraph();
return 0;  
}

