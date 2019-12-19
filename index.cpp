#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm;
float x,y,r,d;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
cout<<"Enter radius:";
cin>>r;
x=0;
y=r;
d=1.25-r;
do
{
putpixel(200+x,200+y,RED);
putpixel(200-x,200-y,GREEN);
putpixel(200+x,200-y,BLUE);
putpixel(200-x,200+y,YELLOW);
putpixel(200+y,200+x,BLUE);
putpixel(200-y,200-x,GREEN);
putpixel(200-y,200+x,BROWN);
putpixel(200+y,200-x,BLUE);
if(d<0)
{
x=x+1;
y=y;
d=d+2*x+1;
}
else
{
x=x+1;
y=y-1;
d=d+(2*x)-(2*y)+1;
}
}while(x<y);
getch();
}
