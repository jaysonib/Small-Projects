//hi friends !!
//welcome to our youtube channel "programming knowledge".
//here is the video for ringtone of iphone in c language.
//first we will see the program and then we will see the output
//here is the code...
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
printf("                                       \n  Hii Friends !! \n  Welcome to our you tube channel \" PROGRAMMING KNOWLEDGE \" \n  This video is for Iphone ringtone in C language \n");
printf(" \n \n \n \n \n \n \n \n \n \n \n \n \n \n  I hope you like this video \n  For more this types of stuff LIKE , SHARE & SUBSCRIBE\n  If you have any doubt or any suggestion about video or review then comment\n  below\n  JAY HIND\n                                       ");
int a=349,b=391,c=523,d=466;
for(int i=1;i<3;i++)
{for(int j=0;j<2;j++){
sound(c*i);delay(225);nosound();sound(d*i);delay(225);nosound();sound(b*i);
delay(225);nosound();sound(c*i);delay(225);nosound();sound(a*i);delay(225);
nosound();sound(c*i);delay(225);nosound();sound(d*i);delay(225);nosound();
sound(c*i);delay(225);nosound();sound(b*i);delay(225);nosound();
sound(0);delay(50);nosound();sound(b*i);delay(225);nosound();sound(0*i);
delay(20);nosound();sound(b*i);delay(225);nosound();sound(d*i);delay(225);
nosound();sound(c*i);delay(225);nosound();sound(0);delay(20);nosound();
sound(c*i);delay(225);nosound();sound(d*i);delay(225);nosound();sound(b*i);
delay(225);nosound();sound(c*i);delay(225);nosound();sound(a*i);delay(225);
nosound();sound(c*i);delay(225);nosound();sound(d*i);delay(225);nosound();
sound(c*i);delay(225);nosound();sound(b*i);delay(225);nosound();
sound(0);delay(500);nosound();}
sound(0);delay(1000);nosound();
}

getch();
nosound();
}

//Thanks for watching this video
//Visit our channel , you can find amazing programming videos
//Like , share and subscribe
//JAY HIND
