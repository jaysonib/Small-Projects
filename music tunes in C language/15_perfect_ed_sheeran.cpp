//here is the code
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
//for graphics
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

char z[50];
int count;

printf("Print no. of seconds left : ");
scanf("%d",&count);

settextstyle(7,HORIZ_DIR,4);
for(int y=count;y>0;y--)
	{
	sprintf(z," Start in %d seconds",y);
	outtextxy(10,210,z);
	delay(1000);
	cleardevice();
	}

settextstyle(3,HORIZ_DIR,3);
setcolor(YELLOW);
outtextxy(30,200,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(LIGHTBLUE);
outtextxy(30,300,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(LIGHTGREEN);
outtextxy(30,100,"MADE BY :- JAY B. SONI");

printf("  Hii Friends !!!\n  \"Perfect \" :- Ed Sheeran > music tune in C Language\n  Lyrics:-\n");

int a=415,b=466,c=523,d=554,e=622,f=698,g=783;
printf("  I found a love for me\n");
sound(e);delay(350);nosound();sound(f);delay(350);nosound();sound(a);
delay(350);nosound();sound(0);delay(10);nosound();sound(a);delay(400);
nosound();sound(0);delay(100);nosound();sound(c);delay(350);nosound();
sound(b);delay(350);nosound();sound(a);delay(450);nosound();sound(c);
delay(700);nosound();sound(0);delay(500);nosound();
printf("  darling , just drive right in , follow my lead\n");
sound(b);delay(300);nosound();sound(c);delay(300);nosound();sound(0);
delay(10);nosound();sound(c);delay(300);nosound();sound(0);delay(10);
nosound();sound(c);delay(300);nosound();sound(b);delay(300);nosound();
sound(a);delay(300);nosound();sound(0);delay(10);nosound();sound(a);
delay(300);nosound();sound(0);delay(100);nosound();sound(a);delay(350);
nosound();sound(b);delay(450);nosound();sound(c);delay(450);nosound();
sound(b);delay(600);nosound();sound(0);delay(500);nosound();
printf("  I found a girl ,  beautiful and sweet\n");
sound(c);delay(300);nosound();sound(b);delay(300);nosound();sound(a);
delay(300);nosound();sound(c);delay(550);nosound();sound(0);delay(470);
nosound();sound(e);delay(350);nosound();sound(c);delay(300);nosound();
sound(b);delay(250);nosound();sound(a);delay(450);nosound();sound(0);
delay(10);nosound();sound(a);delay(550);nosound();sound(0);delay(400);
nosound();
printf("  I never knew you were the someone waiting for me\n");
sound(a);delay(300);nosound();sound(b);delay(300);nosound();sound(c);
delay(300);nosound();sound(d);delay(300);nosound();sound(0);delay(20);
nosound();sound(d);delay(300);nosound();sound(c);delay(300);nosound();
sound(b);delay(300);nosound();sound(0);delay(20);nosound();sound(b);
delay(300);nosound();sound(a);delay(300);nosound();sound(0);delay(20);
nosound();sound(a);delay(300);nosound();sound(b);delay(300);nosound();
sound(c);delay(300);nosound();sound(b);delay(300);nosound();sound(0);
delay(200);nosound();
printf("  'cause we were just kids when we fell in love\n");
sound(e);delay(300);nosound();sound(0);delay(40);nosound();sound(e);
delay(300);nosound();sound(0);delay(20);nosound();sound(e);delay(300);
nosound();sound(0);delay(20);nosound();sound(e);delay(300);nosound();
sound(f);delay(300);nosound();sound(c);delay(300);nosound();sound(b);
delay(400);nosound();sound(c);delay(650);nosound();sound(0);delay(25);
nosound();sound(c);delay(650);nosound();sound(0);delay(25);nosound();
sound(c);delay(750);nosound();sound(0);delay(50);nosound();
printf("  Not knowing what it was\n");
sound(c);delay(300);nosound();sound(b);delay(300);nosound();sound(a);
delay(500);nosound();sound(c);delay(650);nosound();sound(0);delay(30);
nosound();sound(c);delay(650);nosound();sound(0);delay(30);nosound();
sound(c);delay(750);nosound();sound(0);delay(50);nosound();
printf("  I will not give up you this time\n");
sound(c);delay(300);nosound();sound(b);delay(300);nosound();sound(a);
delay(300);nosound();sound(d);delay(550);nosound();sound(c);delay(650);
nosound();sound(0);delay(20);nosound();sound(a);delay(650);nosound();
sound(c);delay(650);nosound();sound(e);delay(450);nosound();sound(c);
delay(450);nosound();sound(d);delay(380);nosound();sound(c);delay(370);
nosound();sound(b);delay(360);nosound();sound(0);delay(50);nosound();
printf("  Darling , just kiss me slow , your heart is all own\n");
sound(c);delay(300);nosound();sound(b);delay(300);nosound();sound(a);
delay(300);nosound();sound(c);delay(550);nosound();sound(0);delay(30);
nosound();sound(c);delay(680);nosound();sound(0);delay(30);nosound();
sound(c);delay(780);nosound();sound(0);delay(50);nosound();sound(c);
delay(400);nosound();sound(b);delay(350);nosound();sound(a);delay(340);
nosound();sound(c);delay(550);nosound();sound(0);delay(30);nosound();
sound(c);delay(650);nosound();sound(0);delay(30);nosound();sound(c);
delay(750);nosound();sound(0);delay(50);nosound();
printf("  And in your eyes , you're holding mine \n");
sound(c);delay(300);nosound();sound(b);delay(300);nosound();sound(a);
delay(300);nosound();sound(d);delay(300);nosound();sound(c);delay(330);
nosound();sound(a);delay(300);nosound();sound(e);delay(390);nosound();
sound(e);delay(520);nosound();sound(0);delay(50);nosound();
printf("  Baby , i'm dancing in the dark\n");
sound(c);delay(550);nosound();sound(e);delay(350);nosound();sound(c);
delay(650);nosound();sound(b);delay(270);nosound();sound(a);delay(260);
nosound();sound(0);delay(20);nosound();sound(a);delay(270);nosound();
sound(0);delay(20);nosound();sound(a);delay(270);nosound();sound(g);
delay(300);nosound();sound(f);delay(300);nosound();sound(g);delay(550);
nosound();sound(c);delay(300);nosound();sound(0);delay(50);nosound();
printf("  With you between my arms\n");
sound(e);delay(290);nosound();sound(e);delay(280);nosound();sound(0);
delay(30);nosound();sound(d);delay(300);nosound();sound(c);delay(310);
nosound();sound(0);delay(20);nosound();sound(b);delay(300);nosound();
sound(a);delay(410);nosound();sound(0);delay(50);nosound();
printf("  Barefoot on the grass , listning to our favourite song\n");
sound(a);delay(300);nosound();sound(g);delay(450);nosound();sound(0);
delay(30);nosound();sound(f);delay(350);nosound();sound(0);delay(30);
nosound();sound(g);delay(350);nosound();sound(0);delay(30);nosound();
sound(c);delay(350);nosound();sound(0);delay(30);nosound();sound(e);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(250);
nosound();sound(0);delay(20);nosound();sound(e);delay(250);nosound();
sound(0);delay(20);nosound();sound(e);delay(250);nosound();sound(0);
delay(20);nosound();sound(f);delay(310);nosound();sound(c);delay(300);
nosound();sound(b);delay(330);nosound();sound(a);delay(300);nosound();
sound(0);delay(40);nosound();
printf("  When you said you looked a mess\n");
sound(c);delay(300);nosound();sound(e);delay(290);nosound();sound(a);
delay(330);nosound();sound(g);delay(360);nosound();sound(0);delay(20);
nosound();sound(f);delay(350);nosound();sound(0);delay(20);nosound();
sound(g);delay(450);nosound();sound(0);delay(20);nosound();sound(c);
delay(370);nosound();sound(0);delay(40);nosound();
printf("  But you heard it , darling , you look perfact tonight");
sound(c);delay(300);nosound();sound(0);delay(20);nosound();sound(c);
delay(300);nosound();sound(d);delay(300);nosound();sound(c);delay(300);
nosound();sound(a);delay(300);nosound();sound(0);delay(20);nosound();
sound(a);delay(300);nosound();sound(c);delay(300);nosound();sound(b);
delay(300);nosound();sound(0);delay(20);nosound();sound(b);delay(350);
nosound();sound(a);delay(350);nosound();sound(0);delay(30);nosound();
sound(a);delay(350);nosound();sound(0);delay(20);nosound();sound(a);
delay(600);nosound();
printf("\n\n  I hope you like this video \n  Please LIKE & SHARE THIS VIDEO \n  AND SUBSCRIBE MY CHANNEL FOR MORE THIS TYPES OF VIDEOS \n  AND COMMENT BELOW FOR ANY QUERY AND DOUBT OR ANY SUGGESTION TO US \n                                ");
getch();
nosound();
}//let's run it
