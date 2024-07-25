#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main () {
int gdriver=DETECT,gmode,i;
initgraph(&gdriver,&gmode,"");
for(i=0;i<700;i++){

line(20+i,250,60+i,200);
line(60+i,200,100+i,250);
line(10+i,250,110+i,250);
//flag
line(110+i,250,110+i,200);
rectangle(90+i,200,110+i,210);
//tires
circle(33+i,261,10);
circle(80+i,261,10);
line(0,270,700,270);
//color
setfillstyle(8,3);
floodfill(61+i,210,WHITE);
delay(10);
cleardevice();
}
getch();
closegraph();
}