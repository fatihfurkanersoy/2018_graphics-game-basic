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
 rectangle(15,30,615,406); // EN BÜYÜK dikdörtgen çizer
   
    settextstyle(BOLD_FONT,0,1);

   
   setcolor(BLUE);
   rectangle(190,50,440,90);
   
   setcolor(CYAN);
   outtextxy(215, 60, "SORU 1)  4 x  5 = ? ");
   
   setcolor(LIGHTCYAN);
   outtextxy(265,110,"10 PUAN ");
   
   setcolor(LIGHTMAGENTA);
   rectangle(110,140,220,180);  // ilk cevap dikdörtgeni
   
   setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(140, 152, " A) 5 "); // ilk cevap yazýsý

	setcolor(LIGHTMAGENTA);
   rectangle(110,260,220,300);  // ÝKÝNCÝ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(138, 272, " B) 12 "); // ÝKÝNCÝ cevap yazýsý

   
   setcolor(LIGHTMAGENTA);
   rectangle(375,140,485,180);  // ÜÇÜNCÜ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(400, 152, " C) 20 "); // ÜÇÜNCÜ cevap yazýsý
   
   
   setcolor(LIGHTMAGENTA);
   rectangle(375,260,485,300);  // DÖRDÜNCü cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(400, 272, " D) 12 "); // DÖRDÜNCÜ cevap yazýsý
   
   
//PUANLAMA ÝÇÝN DEÐÝÞKEN
int a = 0;
char arr[50] ;
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

   
   //1. SORU ÝÇÝN ÞIK ÝÞARETLEME

   int rastgele;
srand(time(NULL)); 
rastgele=rand()%4;

getch();   /* wait for a key */

if (rastgele == 0 ) {
	
	setfillstyle(SOLID_FILL,RED);
   fillellipse(165,159,60,24); // 1. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,159,60,24); // 2. ÞIK ÝÇÝN 

sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
   
}
else if (rastgele == 1 ){

   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,159,60,24); // 2. ÞIK ÝÇÝN 
   a = a  + 10;
   
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (rastgele == 2 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(165,282,60,24); // 3. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
	fillellipse(430,159,60,24);  // 2. ÞIK ÝÇÝN
	
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
	
	}
	
	
else if (rastgele == 3 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(430,282,60,24); //4. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
	fillellipse(430,159,60,24);  // 2. ÞIK ÝÇÝN
	
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
	
	}
   
   
   
   
   
   
   
//------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------  
//-------------------------------------------------------------------------------------------   
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
   
 
 
 
 
   // 2. SORUYA GEÇMEK ÝÇÝN TUÞA BAS
   
   getch();   /* wait for a key */
   clearviewport();   /* clear the viewport */
  //EKRAN TEMÝZLENDÝ
  
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

  // 2. SORU VE ÞIKLARI
  
  setcolor(WHITE);
 rectangle(15,30,615,406); // EN BÜYÜK dikdörtgen çizer
  
    setcolor(LIGHTBLUE);
   rectangle(190,50,440,90);
   
   setcolor(YELLOW);
   outtextxy(215, 60, "SORU 2)  12 : 3 = ? ");
   
   setcolor(LIGHTCYAN);
   outtextxy(265,110,"10 PUAN ");
   
   setcolor(CYAN);
   rectangle(110,140,220,180);  // ilk cevap dikdörtgeni
   
   setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(140, 152, " A) 2 "); // ilk cevap yazýsý

	setcolor(CYAN);
   rectangle(110,260,220,300);  // ÝKÝNCÝ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(138, 272, " B) 11 "); // ÝKÝNCÝ cevap yazýsý

   
   setcolor(CYAN);
   rectangle(375,140,485,180);  // ÜÇÜNCÜ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(400, 152, " C) 3 "); // ÜÇÜNCÜ cevap yazýsý
   
   
   setcolor(CYAN);
   rectangle(375,260,485,300);  // DÖRDÜNCÜ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(400, 272, " D) 4 "); // DÖRDÜNCÜ cevap yazýsý
   
   
   
   
   //2. SORU ÝÇÝN ÞIK ÝÞARETLEME
   
   int soruiki;
srand(time(NULL)); 
soruiki=rand()%4;

getch();   /* wait for a key */

if (soruiki == 0 ) {

	setfillstyle(SOLID_FILL,RED);
   fillellipse(165,159,60,24); // 1. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. ÞIK ÝÇÝN
   
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (soruiki == 1 ){

	setfillstyle(SOLID_FILL,RED);
   fillellipse(430,159,60,24); // 2. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. ÞIK ÝÇÝN 
   
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (soruiki == 2 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(165,282,60,24); // 3. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. ÞIK ÝÇÝN
   
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
   
	}
	
	
else if (soruiki == 3 ){

   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(430,282,60,24); //4. ÞIK ÝÇÝN
    a = a  + 10;
    
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
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



   
    // 3. SORUYA GEÇMEK ÝÇÝN TUÞA BAS
   
   getch();   /* wait for a key */
   clearviewport();   /* clear the viewport */
  //EKRAN TEMÝZLENDÝ
  
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
  
  setcolor(WHITE);
 rectangle(15,30,615,406); // EN BÜYÜK dikdörtgen çizer
  
  // 3. SORU VE ÞIKLARI
    setcolor(YELLOW);
   rectangle(190,50,440,90);
   
   setcolor(LIGHTBLUE);
   outtextxy(215, 60, "SORU 3)  23 - 11 = ? ");
   
   setcolor(LIGHTCYAN);
   outtextxy(265,110,"10 PUAN ");
   
   setcolor(CYAN);
   rectangle(110,140,220,180);  // ilk cevap dikdörtgeni
   
   setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(140, 152, " A) 12 "); // ilk cevap yazýsý

	setcolor(CYAN);
   rectangle(110,260,220,300);  // ÝKÝNCÝ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(138, 272, " B) 2 "); // ÝKÝNCÝ cevap yazýsý

   
   setcolor(CYAN);
   rectangle(375,140,485,180);  // ÜÇÜNCÜ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(400, 152, " C) 11 "); // ÜÇÜNCÜ cevap yazýsý
   
   
   setcolor(CYAN);
   rectangle(375,260,485,300);  // DÖRDÜNCÜ cevap dikdörtgeni

	setcolor(LIGHTGRAY); // cevaplarýn rengi
   outtextxy(400, 272, " D) 34 "); // DÖRDÜNCÜ cevap yazýsý
   
   



// 3. SORU ÝÇÝN ÞIK ÝÞARETLEME

int soruuc;
srand(time(NULL)); 
soruuc=rand()%4;

getch();   /* wait for a key */

if (soruuc == 0 ) {

	setfillstyle(SOLID_FILL,GREEN);
   fillellipse(165,159,60,24); // 1. ÞIK ÝÇÝN
	a = a  + 10;
	
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

   getch();   /* wait for a key */
   

}
else if (soruuc == 1 ){

	setfillstyle(SOLID_FILL,RED);
   fillellipse(430,159,60,24); // 2. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
   fillellipse(165,159,60,24); // 1. ÞIK ÝÇÝN
   
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

}
else if (soruuc == 2 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(165,282,60,24); // 3. ÞIK ÝÇÝN
   getch();   /* wait for a key */
   setfillstyle(SOLID_FILL,GREEN);
      fillellipse(165,159,60,24); // 1. ÞIK ÝÇÝN
      
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);

	}
	
	
else if (soruuc == 3 ){

   setfillstyle(SOLID_FILL,RED);
   fillellipse(430,282,60,24); //4. ÞIK ÝÇÝN
   getch();   /* wait for a key */
	setfillstyle(SOLID_FILL,GREEN);
    fillellipse(165,159,60,24); // 1. ÞIK ÝÇÝN
    
sprintf(arr , "ÞU AN KÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(365, 0, arr);
   
	}
   



// YARIÞMA BÝTÝMÝ

getch();   /* wait for a key */
   clearviewport();   /* clear the viewport */
  //EKRAN TEMÝZLENDÝ

setcolor(WHITE);
 rectangle(15,30,615,406); // EN BÜYÜK dikdörtgen çizer

sprintf(arr , "YARIÞMA BÝTTÝ PUANIN : %d",a);
setcolor(LIGHTBLUE);
outtextxy(130, 200, arr);
  
  
  
getchar();
closegraph();
return 0;  
}

