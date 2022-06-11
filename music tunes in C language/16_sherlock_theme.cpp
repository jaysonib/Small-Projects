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
setcolor(WHITE);
outtextxy(30,200,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(GREEN);
outtextxy(30,300,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(RED);
outtextxy(30,100,"MADE BY :- JAY B. SONI");
printf("                                       \n  Hii Friends !! \n  Welcome to our you tube channel \" PROGRAMMING KNOWLEDGE \" \n  This video is for Sherlok theme music tune by C language \n");
printf(" \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n  I hope you like this video \n  For more this types of stuff LIKE , SHARE & SUBSCRIBE\n  If you have any doubt or any suggestion about video or review then comment\n  below\n                                       ");
int a=261,b=349,c=369,d=391,e=415,f=440,g=493,h=523,i=587,j=622,k=698,l=783;
for(y=0;y<2;y++)
{
sound(a);delay(200);nosound();sound(d);delay(200);nosound();sound(0);
delay(50);nosound();sound(d);delay(200);nosound();sound(c);delay(200);
nosound();sound(d);delay(200);nosound();sound(e);delay(200);nosound();
sound(0);delay(25);nosound();sound(d);delay(200);nosound();sound(b);
delay(200);nosound();sound(h);delay(200);nosound();sound(0);delay(200);
nosound();sound(b);delay(200);nosound();sound(h);delay(200);nosound();
sound(0);delay(50);nosound();sound(h);delay(200);nosound();sound(g);
delay(200);nosound();sound(i);delay(200);nosound();sound(h);delay(200);
nosound();sound(j);delay(200);nosound();sound(0);delay(200);nosound();
for(int x=0;x<2;x++)
{
sound(l);delay(200);nosound();sound(h);delay(200);nosound();sound(0);
delay(40);nosound();sound(h);delay(200);nosound();sound(i);delay(200);
nosound();sound(j);delay(200);nosound();sound(i);delay(200);nosound();
sound(j);delay(200);nosound();sound(i);delay(200);nosound();sound(h);
delay(200);nosound();sound(k);delay(200);nosound();sound(h);delay(200);
nosound();sound(0);delay(40);nosound();sound(h);delay(200);nosound();
sound(i);delay(200);nosound();sound(j);delay(200);nosound();sound(0);
delay(10);nosound();sound(j);delay(200);nosound();sound(k);delay(200);
nosound();sound(i);delay(200);nosound();sound(0);delay(20);nosound();
sound(i);delay(200);nosound();sound(j);delay(200);nosound();sound(h);
delay(200);nosound();sound(0);delay(20);nosound();sound(h);delay(200);
nosound();sound(i);delay(200);nosound();sound(g);delay(200);nosound();
sound(e);delay(200);nosound();sound(f);delay(200);nosound();sound(h);
delay(200);nosound();sound(0);delay(50);nosound();
}}
getch();
nosound();
}
