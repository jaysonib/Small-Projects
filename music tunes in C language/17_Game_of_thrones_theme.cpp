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
setcolor(WHITE);
outtextxy(30,200,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(GREEN);
outtextxy(30,300,"MADE BY :- JAY B. SONI");

delay(500);
setcolor(RED);
outtextxy(30,100,"MADE BY :- JAY B. SONI");
printf("                                       \n  Hii Friends !! \n  Welcome to our you tube channel \" PROGRAMMING KNOWLEDGE \" \n  This video is for Game Of Thrones theme music tune by C language \n");
printf(" \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n  I hope you like this video \n  For more this types of stuff LIKE , SHARE & SUBSCRIBE\n  If you have any doubt or any suggestion about video or review then comment\n  below\n                                       ");
int a=146,b=174,c=233,d=261,e=195,f=391,g=311,h=349,i=329,j=293;
for(int x=1;x<=2;x++)
{
sound(f*x);
delay(200);
nosound();
sound(d*x);
delay(200);
nosound();
sound(0);
delay(50);
nosound();
sound(g*x);
delay(200);
nosound();
sound(h*x);
delay(200);
nosound();
sound(f*x);
delay(200);
nosound();
sound(d*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(g*x);
delay(200);
nosound();
sound(h*x);
delay(200);
nosound();
sound(f*x);
delay(200);
nosound();
sound(d*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(g*x);
delay(200);
nosound();
sound(f*x);
delay(200);
nosound();
sound(d*x);
delay(200);
nosound();
sound(i*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(h*x);
delay(200);
nosound();
sound(f*x);
delay(200);
nosound();
sound(d*x);
delay(200);
nosound();
sound(i*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(h*x);
delay(200);
nosound();
sound(f*x);
delay(200);
nosound();
sound(d*x);
delay(200);
nosound();
sound(i*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(h*x);
delay(200);
nosound();
sound(f*x);
delay(200);
nosound();
sound(d*x);
delay(200);
nosound();
sound(i*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(h*x);
delay(200);
nosound();
sound(e*x);
delay(250);
nosound();


sound(b*x);
delay(200);
nosound();
sound(a*x);
delay(200);
nosound();
sound(0);
delay(40);
nosound();



sound(e*x);
delay(200);
nosound();
sound(c*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(d*x);
delay(200);
nosound();
sound(j*x);
delay(200);
nosound();
sound(e*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(c*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(d*x);
delay(200);
nosound();
sound(j*x);
delay(200);
nosound();
sound(e*x);
delay(200);
nosound();
sound(c*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(d*x);
delay(200);
nosound();
sound(j*x);
delay(200);
nosound();
sound(0);
delay(30);
nosound();
sound(e*x);
delay(200);
nosound();
sound(c*x);
delay(200);
nosound();
sound(0);
delay(1000);
nosound();

}
getch();
nosound();
}
