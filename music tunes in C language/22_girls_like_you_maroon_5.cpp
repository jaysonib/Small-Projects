//hi friends !!
//welcome to our youtube channel "programming knowledge".
//I hope you listen one of "Maroon 5" recently song "Girls Like You"
//I have listened that song so many times and i decide to make it's ringtone
//in C langusge.
//So in this video which contain the program and the output
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
printf("                                       \n  Hii Friends !! \n  Welcome to our you tube channel \" PROGRAMMING KNOWLEDGE \" \n  This is video for one of \"Maroon 5\" song \"Girls Like You\" ringtone in C \n  Lyrics :-");


int a=440,b=493,c=523,d=587,e=659,f=698,g1=783,g=391;
printf("\n  Spent 24 hours , I need more hours with you");
sound(c);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(20);nosound();sound(e);delay(500);nosound();sound(0);
delay(20);nosound();sound(d);delay(300);nosound();sound(0);delay(20);
nosound();sound(c);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(20);nosound();sound(e);delay(500);nosound();
sound(0);delay(20);nosound();sound(d);delay(250);nosound();sound(0);
delay(20);nosound();sound(c);delay(250);nosound();sound(0);delay(20);
nosound();sound(d);delay(250);nosound();sound(0);delay(20);nosound();
sound(d);delay(250);nosound();sound(0);delay(1000);nosound();

printf("\n  You spent the weekend , getting even , ooh ooh");
sound(c);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(20);nosound();sound(g1);delay(500);nosound();
sound(0);delay(20);nosound();sound(c);delay(250);nosound();sound(0);
delay(100);nosound();sound(c);delay(250);nosound();sound(0);delay(20);
nosound();sound(c);delay(250);nosound();sound(0);delay(20);nosound();
sound(g1);delay(500);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(d);delay(250);
nosound();sound(0);delay(20);nosound();sound(d);delay(250);nosound();
sound(0);delay(1000);nosound();

printf("\n  We spent the late nights , making thigs right , between us");
sound(g);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(d);delay(250);
nosound();sound(0);delay(20);nosound();sound(e);delay(250);nosound();
sound(0);delay(20);nosound();sound(f);delay(200);nosound();sound(0);delay(20);
nosound();sound(e);delay(450);nosound();sound(0);delay(20);nosound();sound(g);
delay(250);nosound();sound(0);delay(100);nosound();sound(g);delay(250);
nosound();sound(0);delay(20);nosound();sound(g);delay(250);nosound();
sound(0);delay(20);nosound();sound(e);delay(250);nosound();sound(0);
delay(20);nosound();sound(f);delay(200);nosound();sound(0);delay(20);
nosound();sound(e);delay(450);nosound();sound(0);delay(20);nosound();sound(g);
delay(250);nosound();sound(0);delay(100);nosound();sound(g);delay(250);
nosound();sound(0);delay(100);nosound();sound(d);delay(250);nosound();
sound(0);delay(20);nosound();sound(d);delay(250);nosound();sound(0);
delay(1000);nosound();

printf("\n  But now it's all good baby , Roll that backwood baby , and play me close");
sound(g);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(d);delay(250);
nosound();sound(0);delay(30);nosound();sound(d);delay(250);nosound();
sound(0);delay(30);nosound();sound(g);delay(250);nosound();sound(0);
delay(50);nosound();sound(g);delay(250);nosound();sound(0);delay(100);
nosound();sound(c);delay(250);nosound();sound(0);delay(20);nosound();sound(d);
delay(250);nosound();sound(0);delay(20);nosound();sound(d);delay(250);
nosound();sound(0);delay(20);nosound();sound(g);delay(250);nosound();sound(0);
delay(75);nosound();sound(g);delay(250);nosound();sound(0);delay(20);
nosound();sound(g);delay(250);nosound();sound(0);delay(20);nosound();sound(d);
delay(250);nosound();sound(0);delay(20);nosound();sound(d);delay(250);
nosound();sound(0);delay(100);nosound();sound(c);delay(250);nosound();
sound(0);delay(1000);nosound();


printf("\n  'cause girls like you");
printf("\n  Run around with guys like me");
printf("\n  'Til sundown , when i come through");
printf("\n  I need a girl like you , yeah yeah");
sound(c);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(d);delay(250);
nosound();sound(0);delay(35);nosound();sound(e);delay(250);nosound();
sound(0);delay(100);nosound();sound(c);delay(250);nosound();sound(0);
delay(20);nosound();sound(c);delay(250);nosound();sound(0);delay(20);
nosound();sound(c);delay(250);nosound();sound(0);delay(20);nosound();
sound(b);delay(250);nosound();sound(0);delay(35);nosound();sound(c);
delay(250);nosound();sound(0);delay(35);nosound();sound(d);delay(250);
nosound();sound(0);delay(100);nosound();sound(a);delay(250);nosound();
sound(0);delay(20);nosound();sound(a);delay(250);nosound();sound(0);
delay(20);nosound();sound(a);delay(200);nosound();sound(0);delay(20);nosound();
sound(a);delay(250);nosound();sound(0);delay(45);nosound();sound(c);
delay(250);nosound();sound(0);delay(35);nosound();sound(d);delay(250);
nosound();sound(0);delay(100);nosound();sound(a);delay(250);nosound();
sound(0);delay(20);nosound();sound(a);delay(250);nosound();
sound(0);delay(20);nosound();sound(a);delay(200);nosound();sound(0);
delay(20);nosound();sound(a);delay(250);nosound();sound(0);delay(40);
nosound();sound(c);delay(250);nosound();sound(0);delay(35);nosound();
sound(d);delay(250);nosound();sound(0);delay(70);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(100);nosound();

printf("\n  Girls like you");
printf("\n  Love fun, yeah me too");
printf("\n  What I want when i come through");
printf("\n  I need girl like you , yeah yeah");
sound(c);delay(250);nosound();sound(0);delay(35);nosound();sound(d);
delay(250);nosound();sound(0);delay(35);nosound();sound(e);delay(250);
nosound();sound(0);delay(100);nosound();sound(c);delay(250);nosound();
sound(0);delay(20);nosound();sound(c);delay(250);nosound();sound(0);
delay(20);nosound();sound(c);delay(250);nosound();sound(0);delay(20);
nosound();sound(b);delay(250);nosound();sound(0);delay(35);nosound();
sound(c);delay(250);nosound();sound(0);delay(35);nosound();sound(d);
delay(250);nosound();sound(0);delay(105);nosound();sound(a);delay(250);
nosound();sound(0);delay(20);nosound();sound(a);delay(250);nosound();
sound(0);delay(20);nosound();sound(a);delay(200);nosound();sound(0);delay(20);
nosound();sound(a);delay(250);nosound();sound(0);delay(40);nosound();
sound(c);delay(250);nosound();sound(0);delay(35);nosound();sound(d);
delay(250);nosound();sound(0);delay(100);nosound();sound(a);delay(250);
nosound();sound(0);delay(20);nosound();sound(a);delay(250);nosound();sound(0);
delay(20);nosound();sound(a);delay(200);nosound();sound(0);delay(20);
nosound();sound(a);delay(250);nosound();sound(0);delay(20);nosound();
sound(a);delay(250);nosound();sound(0);delay(40);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(d);delay(250);
nosound();sound(0);delay(100);nosound();sound(c);delay(250);nosound();
sound(0);delay(35);nosound();sound(c);delay(250);nosound();sound(0);
delay(1000);nosound();

printf("\n  Yeah Yeah Yeah");
printf("\n  Yeah Yeah Yeah");
printf("\n  I need girl like you , Yeah Yeah");
sound(c);delay(250);nosound();sound(0);delay(40);nosound();sound(c);
delay(250);nosound();sound(0);delay(60);nosound();sound(b);delay(250);
nosound();sound(0);delay(400);nosound();sound(b);delay(250);nosound();
sound(0);delay(40);nosound();sound(b);delay(250);nosound();sound(0);
delay(60);nosound();sound(a);delay(250);nosound();sound(0);delay(400);
nosound();sound(c);delay(250);nosound();sound(0);delay(20);nosound();
sound(c);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(35);nosound();sound(d);delay(250);nosound();
sound(0);delay(35);nosound();sound(e);delay(250);nosound();sound(0);
delay(50);nosound();sound(c);delay(250);nosound();sound(0);delay(40);
nosound();sound(c);delay(250);nosound();sound(0);delay(1000);nosound();

printf("\n  Yeah Yeah Yeah");
printf("\n  Yeah Yeah Yeah");
printf("\n  I need girl like you , Yeah Yeah");
sound(c);delay(250);nosound();sound(0);delay(40);nosound();sound(c);
delay(250);nosound();sound(0);delay(60);nosound();sound(b);delay(250);
nosound();sound(0);delay(400);nosound();sound(b);delay(250);nosound();
sound(0);delay(40);nosound();sound(b);delay(250);nosound();sound(0);
delay(60);nosound();sound(a);delay(250);nosound();sound(0);delay(400);
nosound();sound(c);delay(250);nosound();sound(0);delay(20);nosound();
sound(c);delay(250);nosound();sound(0);delay(20);nosound();sound(c);
delay(250);nosound();sound(0);delay(20);nosound();sound(c);delay(250);
nosound();sound(0);delay(35);nosound();sound(d);delay(250);nosound();
sound(0);delay(35);nosound();sound(e);delay(250);nosound();sound(0);
delay(50);nosound();sound(c);delay(250);nosound();sound(0);delay(40);
nosound();sound(c);delay(250);nosound();sound(0);delay(1000);nosound();
printf("\n  I hope you like this video \n  For more this types of stuff LIKE , SHARE & SUBSCRIBE\n  If you have any doubt or any suggestion about video or review then comment\n  below\n  JAY HIND\n                                       ");
getch();
nosound();
}

//Thanks for watching this video
//Visit our channel , you can find amazing programming videos
//Like , share and subscribe
//JAY HIND
