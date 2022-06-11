#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

char z[50];
int count;

printf("Print no. of seconds left : ");
scanf("%d",&count);

settextstyle(7,HORIZ_DIR,5);
for(int y=count;y>0;y--)
	{
	sprintf(z," Start in %d seconds",y);
	outtextxy(10,210,z);
	delay(1000);
	cleardevice();
	}

settextstyle(3,HORIZ_DIR,4);
setcolor(YELLOW);
outtextxy(30,200,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(LIGHTBLUE);
outtextxy(30,300,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(LIGHTGREEN);
outtextxy(30,100,"MADE BY :- JAY B. SONI");



int c=261,d=293,e=329,f=349,g=391;
printf("                                       \n");
printf("  Jingle bells , jingle bells\n");
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(e);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(300);
nosound();sound(0);delay(50);nosound();
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(e);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(300);
nosound();sound(0);delay(50);nosound();
printf("  Jingle all the way\n");
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(g);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(20);nosound();sound(d);delay(250);nosound();
sound(0);delay(20);nosound();sound(e);delay(350);nosound();sound(0);
delay(50);nosound();
printf("  oh, what fun it is to ride\n");
sound(f);delay(250);nosound();sound(0);delay(20);nosound();sound(f);
delay(250);nosound();sound(0);delay(20);nosound();sound(f);delay(250);
nosound();sound(0);delay(20);nosound();sound(f);delay(250);nosound();
sound(0);delay(20);nosound();sound(f);delay(250);nosound();sound(0);
delay(20);nosound();sound(e);delay(250);nosound();sound(0);delay(20);
nosound();sound(e);delay(250);nosound();sound(0);delay(20);nosound();
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(e);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(250);
nosound();sound(0);delay(50);nosound();
printf("  In a one-horse open sliegh\n");
sound(d);delay(250);nosound();sound(0);delay(20);nosound();sound(d);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(250);
nosound();sound(0);delay(20);nosound();sound(d);delay(250);nosound();
sound(0);delay(20);nosound();sound(g);delay(250);nosound();sound(0);
delay(20);nosound();sound(e);delay(250);nosound();sound(0);delay(70);
nosound();
printf("  Jingle bells , jingle bells\n");
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(e);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(300);
nosound();sound(0);delay(50);nosound();
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(e);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(300);
nosound();sound(0);delay(50);nosound();
printf("  Jingle all the way\n");
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(g);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(20);nosound();sound(d);delay(250);nosound();
sound(0);delay(20);nosound();sound(e);delay(350);nosound();sound(0);
delay(50);nosound();
printf("  oh, what fun it is to ride\n");
sound(f);delay(250);nosound();sound(0);delay(20);nosound();sound(f);
delay(250);nosound();sound(0);delay(20);nosound();sound(f);delay(250);
nosound();sound(0);delay(20);nosound();sound(f);delay(250);nosound();
sound(0);delay(20);nosound();sound(f);delay(250);nosound();sound(0);
delay(20);nosound();sound(e);delay(250);nosound();sound(0);delay(20);
nosound();sound(e);delay(250);nosound();sound(0);delay(20);nosound();
sound(e);delay(250);nosound();sound(0);delay(20);nosound();sound(e);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(250);
nosound();sound(0);delay(50);nosound();
printf("  In a one-horse open sliegh\n");
sound(d);delay(250);nosound();sound(0);delay(20);nosound();sound(d);
delay(250);nosound();sound(0);delay(20);nosound();sound(e);delay(250);
nosound();sound(0);delay(20);nosound();sound(d);delay(250);nosound();
sound(0);delay(20);nosound();sound(g);delay(250);nosound();sound(0);
delay(20);nosound();sound(e);delay(250);nosound();sound(0);delay(70);
nosound();
printf(" \n \n \n \n  LIKE , SHARE and SUBACRIBE\n  Comment below for any suggestion or review or doubt \n \n \n \n \n                                       ");
getch();
nosound();
}
