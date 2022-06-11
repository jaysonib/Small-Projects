#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int a=440,b=415,c5=523;
int q5=466,q6=554;
for(int y=0;y<2;y++){
for(int z=0;z<2;z++){
sound(q5);delay(250);nosound();sound(c5);delay(250);nosound();sound(0);
delay(20);nosound();sound(c5);delay(250);nosound();sound(0);delay(20);
nosound();sound(c5);delay(250);nosound();sound(0);delay(20);nosound();
sound(q5);delay(250);nosound();sound(c5);delay(250);nosound();sound(0);
delay(20);nosound();sound(c5);delay(250);nosound();sound(0);delay(20);
nosound();sound(c5);delay(250);nosound();sound(0);delay(20);nosound();
sound(q5);delay(250);nosound();sound(c5);delay(250);nosound();sound(q5);
delay(250);nosound();sound(b);delay(250);nosound();sound(c5);delay(250);
nosound();sound(q5);delay(850);nosound();sound(0);delay(200);nosound();
}
sound(q5);delay(250);nosound();sound(0);delay(20);nosound();sound(q5);
delay(250);nosound();sound(0);delay(50);nosound();sound(q5);delay(250);
nosound();sound(0);delay(20);nosound();sound(q5);delay(250);nosound();
sound(0);delay(20);nosound();sound(q5);delay(250);nosound();sound(0);
delay(20);nosound();sound(q5);delay(250);nosound();sound(a);delay(250);
nosound();sound(q5);delay(250);nosound();sound(0);delay(20);nosound();
sound(a);delay(250);nosound();sound(q5);delay(250);nosound();sound(c5);
delay(250);nosound();sound(q6);delay(250);nosound();sound(c5);delay(250);
nosound();sound(q5);delay(250);nosound();sound(b);delay(250);nosound();
sound(0);delay(20);nosound();sound(b);delay(250);nosound();

sound(q5);delay(250);nosound();sound(0);delay(20);nosound();sound(q5);
delay(250);nosound();sound(0);delay(50);nosound();sound(q5);delay(250);
nosound();sound(0);delay(20);nosound();sound(q5);delay(250);nosound();
sound(0);delay(50);nosound();sound(q5);delay(250);nosound();sound(0);
delay(20);nosound();sound(q5);delay(250);nosound();sound(0);delay(20);
nosound();sound(q5);delay(250);nosound();sound(0);delay(20);nosound();
sound(q5);delay(250);nosound();sound(a);delay(250);nosound();sound(q5);
delay(250);nosound();sound(0);delay(20);nosound();sound(a);delay(250);
nosound();sound(q5);delay(250);nosound();sound(c5);delay(250);nosound();
sound(q6);delay(250);nosound();sound(c5);delay(250);nosound();sound(q5);
delay(250);nosound();sound(b);delay(250);nosound();sound(0);delay(20);
nosound();sound(b);delay(250);nosound();sound(0);delay(800);nosound();
}
getch();
}
