#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT,gm;initgraph(&gd,&gm,"C:\\turboc3\\bgi");
char ch[50];int countdown;
printf("Print no. of seconds left : ");scanf("%d",&countdown);
settextstyle(7,HORIZ_DIR,5);
for(int i=countdown;i>0;i--){sprintf(ch," Start in %d seconds",i);
outtextxy(10,210,ch);sound(400);delay(100);nosound();sound(0);delay(900);
cleardevice();}settextstyle(3,HORIZ_DIR,4);setcolor(RED);
outtextxy(30,200,"MADE BY :- PROGRAMMING KNOWLEDGE");delay(500);
setcolor(WHITE);outtextxy(30,300,"MADE BY :- PROGRAMMING KNOWLEDGE");
delay(500);setcolor(LIGHTGREEN);
outtextxy(30,100,"MADE BY :- PROGRAMMING KNOWLEDGE");
printf("  Hello Friends!\n");
printf("  Welcome to my YouTube channel Programming Knowledge\n");
printf("  Here is the ringtone of Uchiha Itachi's character\n");
printf("  If you like this character then you can share his quotes in comment section\n");
printf("  Like this video\n");printf("  Share with your friends\n");
printf("  Subscribe my channel for more videos\n");
printf("  Share your review in comment section\n");
int a=520,b=590,c=620,d=700,e=780,f=830,g=930;for(i=0;i<4;i++){
sound(e);delay(240);nosound();sound(f);delay(240);nosound();sound(e);
delay(240);nosound();sound(c);delay(240);nosound();sound(d);delay(240);
nosound();sound(0);delay(0);nosound();sound(c);delay(240);nosound();sound(d);
delay(240);nosound();sound(c);delay(240);nosound();sound(g/2);delay(240);
nosound();sound(b);delay(240);nosound();sound(a);delay(240);nosound();
sound(c);delay(240);nosound();sound(g/2);delay(240);nosound();sound(b);
delay(240);nosound();sound(a);delay(240);nosound();sound(0);delay(10);
nosound();}for(int j=0;j<2;j++){sound(a);delay(320);nosound();sound(b);
delay(320);nosound();sound(c);delay(320);nosound();sound(b);delay(320);
nosound();sound(a);delay(320);nosound();sound(g/2);delay(320);nosound();
sound(a);delay(320);nosound();sound(b);delay(320);nosound();sound(d);
delay(320);nosound();sound(c);delay(700);nosound();sound(a);delay(320);
nosound();sound(b);delay(320);nosound();sound(c);delay(320);nosound();
sound(b);delay(320);nosound();sound(a);delay(320);nosound();sound(g/2);
delay(320);nosound();sound(0);delay(5);nosound();sound(g/2);delay(320);
nosound();sound(c);delay(320);nosound();sound(b);delay(320);nosound();
sound(a);delay(400);nosound();}getch();}
