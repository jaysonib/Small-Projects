#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

char a[50];
int countdown;

printf("Print no. of seconds left : ");
scanf("%d",&countdown);
settextstyle(7,HORIZ_DIR,5);

for(int i=countdown;i>0;i--)
	{
	sprintf(a," Start in %d seconds",i);
	outtextxy(10,210,a);
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
int f4=349,g4=391,a4=440,b4=493,c5=523,d5=587,e5=659,f5=698,g5=783,a5=880,q1=369,q2=415,q3=466,q4=554,q5=622,q6=739,q7=830,q8=932;
printf("  Hii Friends !! Welcome to my you tube channel \n  This video is for \"mere rashk e quamar\" song music tune in c language\n  Lyrics :-  ");
for(i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
printf("\n  mere rashk e qamar \n");
sound(q5);
delay(300);
nosound();
sound(d5);
delay(300);
nosound();
sound(c5);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(c5);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(c5);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(c5);
delay(300);
nosound();


printf("  tune paheli nazar \n");
sound(f5);
delay(300);
nosound();
sound(d5);
delay(300);
nosound();
sound(q3);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(q3);
delay(300);
nosound();
sound(a4);
delay(300);
nosound();
sound(q3);
delay(300);
nosound();
}


printf("  jab nazar se milayi maza aa gaya\n");
sound(f4);
delay(300);
nosound();
sound(g4);
delay(300);
nosound();
sound(q2);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(q2);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(q2);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(q2);
delay(300);
nosound();
sound(c5);
delay(300);
nosound();
sound(q5);
delay(300);
nosound();
sound(c5);
delay(300);
nosound();
sound(q2);
delay(300);
nosound();
sound(q3);
delay(300);
nosound();
sound(q2);
delay(300);
nosound();
sound(g4);
delay(300);
nosound();
sound(0);
delay(10);
nosound();
sound(g4);
delay(700);
nosound();
}
getch();
closegraph();
}
