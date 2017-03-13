#include "D:ADITHYA\C__~1\11\PROJECT\GLOBAL.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\MOUSE.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\DISPLAY.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\CHECK.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\GENERATE.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\SOLVER.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\LOADING.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\SOUND.CPP"
//#include "D:ADITHYA\C__~1\11\PROJECT\START.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\PAUSE.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\SOLVE.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\RULES.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\FAVOUR.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\MINIGAME.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\MULTIPLA.CPP"
#include "D:ADITHYA\C__~1\11\PROJECT\MENU.CPP"

/*
void temporary()
{
float ang=0.0;
int x,y;
float rad2,rad3,rad4,rad5,rad6,rad7,front1;
while(ang!=200)
{
setcolor(BLACK);
rad2=ang*M_PI/180;
rad3=(ang+60)*M_PI/180;
rad4=(ang+120)*M_PI/180;
rad5=(ang+180)*M_PI/180;
rad6=(ang+240)*M_PI/180;
rad7=(ang+300)*M_PI/180;
 x=270,y=240;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
x=370,y=240;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
x=320,y=290;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
x=320,y=190;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
ang++;
setcolor(WHITE);
rad2=ang*M_PI/180;
rad3=(ang+60)*M_PI/180;
rad4=(ang+120)*M_PI/180;
rad5=(ang+180)*M_PI/180;
rad6=(ang+240)*M_PI/180;
rad7=(ang+300)*M_PI/180;
x=270,y=240;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
x=370,y=240;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
x=320,y=290;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
x=320,y=190;
circle(x+10*cos(rad2),y+10*sin(rad2),2);
circle(x+10*cos(rad3),y+10*sin(rad3),2);
circle(x+10*cos(rad4),y+10*sin(rad4),2);
circle(x+10*cos(rad5),y+10*sin(rad5),2);
circle(x+10*cos(rad6),y+10*sin(rad6),2);
circle(x+10*cos(rad7),y+10*sin(rad7),2);
delay(2.5);
}
 front1=0;
while(front1!=640)
{
setcolor(BLACK);
x=270,y=240;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
x=370,y=240;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
x=320,y=290;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
x=320,y=190;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
setcolor(WHITE);
front1++;
x=270,y=240;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
x=370,y=240;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
x=320,y=290;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
x=320,y=190;
circle(x+10*cos(rad2)+front1*sin(rad2),y+10*sin(rad2)-front1*cos(rad2),2);
circle(x+10*cos(rad3)+front1*sin(rad3),y+10*sin(rad3)-front1*cos(rad3),2);
circle(x+10*cos(rad4)+front1*sin(rad4),y+10*sin(rad4)-front1*cos(rad4),2);
circle(x+10*cos(rad5)+front1*sin(rad5),y+10*sin(rad5)-front1*cos(rad5),2);
circle(x+10*cos(rad6)+front1*sin(rad6),y+10*sin(rad6)-front1*cos(rad6),2);
circle(x+10*cos(rad7)+front1*sin(rad7),y+10*sin(rad7)-front1*cos(rad7),2);
delay(5);
}
}
  */

void beginning()
{


float ang=0.0,ang1=0.0;
float rad2,rad3,rad4,rad5,rad6,rad7;
settextstyle(1,0,3);
outtextxy(170,185,"LOADING DATA...PLEASE WAIT");
int ran=2000;
while(ang<=ran)
{
setcolor(BLACK);
rad2=ang*M_PI/180;
rad3=(ang+60)*M_PI/180;
rad4=(ang+120)*M_PI/180;
rad5=(ang+180)*M_PI/180;
rad6=(ang+240)*M_PI/180;
rad7=(ang+300)*M_PI/180;
circle(320+10*cos(rad2),240+10*sin(rad2),2);
circle(320+10*cos(rad3),240+10*sin(rad3),2);
circle(320+10*cos(rad4),240+10*sin(rad4),2);
circle(320+10*cos(rad5),240+10*sin(rad5),2);
circle(320+10*cos(rad6),240+10*sin(rad6),2);
circle(320+10*cos(rad7),240+10*sin(rad7),2);
ang+=ang1;
ang1+=0.001;
setcolor(WHITE);
rad2=ang*M_PI/180;
rad3=(ang+60)*M_PI/180;
rad4=(ang+120)*M_PI/180;
rad5=(ang+180)*M_PI/180;
rad6=(ang+240)*M_PI/180;
rad7=(ang+300)*M_PI/180;
circle(320+10*cos(rad2),240+10*sin(rad2),2);
circle(320+10*cos(rad3),240+10*sin(rad3),2);
circle(320+10*cos(rad4),240+10*sin(rad4),2);
circle(320+10*cos(rad5),240+10*sin(rad5),2);
circle(320+10*cos(rad6),240+10*sin(rad6),2);
circle(320+10*cos(rad7),240+10*sin(rad7),2);
delay(2.5);

}
int front1=10;
/*
while(front1!=540)
{
setcolor(BLACK);
circle(100+front1*cos(rad2),100+front1*sin(rad2),2);
circle(100+front1*cos(rad3),100+front1*sin(rad3),2);
circle(100+front1*cos(rad4),100+front1*sin(rad4),2);
circle(100+front1*cos(rad5),100+front1*sin(rad5),2);
circle(100+front1*cos(rad6),100+front1*sin(rad6),2);
circle(100+front1*cos(rad7),100+front1*sin(rad7),2);
setcolor(WHITE);
front1++;
circle(100+front1*cos(rad2),100+front1*sin(rad2),2);
circle(100+front1*cos(rad3),100+front1*sin(rad3),2);
circle(100+front1*cos(rad4),100+front1*sin(rad4),2);
circle(100+front1*cos(rad5),100+front1*sin(rad5),2);
circle(100+front1*cos(rad6),100+front1*sin(rad6),2);
circle(100+front1*cos(rad7),100+front1*sin(rad7),2);
delay(2);
}
  */
  front1=0;
while(front1!=400)
{     outtextxy(170,185,"LOADING DATA...PLEASE WAIT");
setcolor(BLACK);
circle(320+10*cos(rad2)+front1*sin(rad2),240+10*sin(rad2)-front1*cos(rad2),2);
circle(320+10*cos(rad3)+front1*sin(rad3),240+10*sin(rad3)-front1*cos(rad3),2);
circle(320+10*cos(rad4)+front1*sin(rad4),240+10*sin(rad4)-front1*cos(rad4),2);
circle(320+10*cos(rad5)+front1*sin(rad5),240+10*sin(rad5)-front1*cos(rad5),2);
circle(320+10*cos(rad6)+front1*sin(rad6),240+10*sin(rad6)-front1*cos(rad6),2);
circle(320+10*cos(rad7)+front1*sin(rad7),240+10*sin(rad7)-front1*cos(rad7),2);
setcolor(WHITE);
front1++;

circle(320+10*cos(rad2)+front1*sin(rad2),240+10*sin(rad2)-front1*cos(rad2),2);
circle(320+10*cos(rad3)+front1*sin(rad3),240+10*sin(rad3)-front1*cos(rad3),2);
circle(320+10*cos(rad4)+front1*sin(rad4),240+10*sin(rad4)-front1*cos(rad4),2);
circle(320+10*cos(rad5)+front1*sin(rad5),240+10*sin(rad5)-front1*cos(rad5),2);
circle(320+10*cos(rad6)+front1*sin(rad6),240+10*sin(rad6)-front1*cos(rad6),2);
circle(320+10*cos(rad7)+front1*sin(rad7),240+10*sin(rad7)-front1*cos(rad7),2);
//delay(3);
}
delay(1000);
if(!kbhit())
{

/*
float angle=0.0,rad,rad1;
circle(100,100,10);
floodfill(101,101,getmaxcolor());

while(angle<=1800)
{
rad=angle*M_PI/180;
rad1=(angle-1)*M_PI/180;
setcolor(WHITE);
line(100,100,100+10*cos(rad1),100+10*sin(rad1));
line(100,101,100+10*cos(rad1),101+10*sin(rad1));
line(100,102,100+10*cos(rad1),102+10*sin(rad1));
setcolor(BLACK);
line(100,100,100+10*cos(rad),100+10*sin(rad));
line(100,101,100+10*cos(rad),101+10*sin(rad));
line(100,102,100+10*cos(rad),102+10*sin(rad));
angle++;
delay(2);
} */
delay(100);
int pos;
/*while(pos!=0)
{

setmouseptr(pos,200);
hidemouseptr();
setfillstyle(1,WHITE);
bar(pos,180,pos-1,220);
setfillstyle(1,BLACK);
bar(pos+10,180,pos+11,220);
showmouseptr();
  pos--;
  delay(2);
}
hidemouseptr();
cleardevice();
showmouseptr();


  */



  setcolor(WHITE);
     int tempo=0;

      bar(0,0,640,5);
     while(tempo<=488)
     {
     pos=10;
      while(pos<=640)
      {
      line(pos,0,pos,tempo);
      pos+=10;
       }
       setfillstyle(1,BLACK);
       bar(0,tempo-8,640,tempo-5);
       setfillstyle(1,WHITE);
       bar(0,tempo,640,tempo+1);
       tempo+=3;
	   }
     tempo=0;
     setcolor(BLACK);
     getch();
  while(tempo!=100)
  {
  pos=0;
  while(pos<=32)
  {
  line(320+pos*10,480,320+pos*10,480-tempo*(32-pos)/2.0);
  line(320-pos*10,480,320-pos*10,480-tempo*(32-pos)/2.0);
  pos++;
  }
  delay(10);
 tempo++;
  }
  setcolor(WHITE);

  settextstyle(10,0,5);
char str[10]="MINDGAMES";

int t[10],u[10];
char a[2];
a[1]='\0';
moveto(150,100);

setcolor(BLACK);

for(int i=0;i<9;i++)
{
a[0]=str[i];
t[i]=getx();
u[i]=gety();
outtext(a);

}

   int front=-300;
while(front<=200)
{
delay(2);
setcolor(BLACK);
for(i=0;i<9;i++)
{
a[0]=str[i];
if((20*i+front)<=100)
outtextxy(t[i],20*i+front,a);
}

 front++;
 setcolor(WHITE);
for(i=0;i<9;i++)
{
a[0]=str[i];
if((20*i+front)<=100)
outtextxy(t[i],20*i+front,a);
else
outtextxy(t[i],u[i],a);

}
}
front=0;
settextstyle(10,0,3);
while(front<=270)
{
 setcolor(BLACK);
outtextxy(front-30,270,"PRES");
outtextxy(640-front-35,270,"ENTS");

front+=2;


setcolor(WHITE);
outtextxy(front-30,270,"PRES");
outtextxy(640-front-35,270,"ENTS");

pos=0;
  while(pos<=32)
  {
  line(320+pos*10,0,320+pos*10,480-tempo*(32-pos)/2.0);
  line(320-pos*10,0,320-pos*10,480-tempo*(32-pos)/2.0);
  pos++;
  }
delay(2);
}
 delay(1000);
  front=0;
bar(150,0+front,525,5+front);

while(front<=485)
{
delay(5);
setfillstyle(1,BLACK);
bar(150,front-5,525,front-4);
front+=2;
setfillstyle(1,WHITE);
bar(150,front,525,1+front);


}


delay(1000);
 //C
line(138,152,138,288);
line(167,185,167,246);

line(138,152,250,163);
line(167,185,250,163);
line(167,246,249,265);
line(138,288,250,265);

//-
rectangle(250,220,280,230);
 /*
//D

line(300,172,300,268);
line(315,205,315,236);

arc(300,220,270,90,49);
arc(315,220.5,270,90,15.5);




//O

circle(395,220,40);
circle(395,220,20);
//K
line(439,169,439,266);
line(439,169,453,169);
line(453,169,453,208);
line(453,208,469,169);
line(469,169,481,169);
line(481,169,462,213);
line(462,213,482,268);
line(482,268,468,268);
line(468,268,454,228);
line(454,228,454,267);
line(454,267,439,267);

//U
line(491,171,491,243);
line(554,243,554,172);
line(554,172,537,172);
line(537,172,537,235);

line(507,235,507,171);
line(507,171,491,171);


	  arc(522,240,180,360,31);
	  arc(522,233,180,360,15);
	 */
	 settextstyle(10,0,7);
	 outtextxy(300,142,"DOKU");
	  delay(1500);

int n=0;
front=0;

for(i=0;i<6;i++)
{
while(n!=50)
{
delay(5);

setcolor(BLACK);
line(138+front,152,138+front,288);
line(167+front,185,167+front,246);

line(138+front,152,250+front,163+n);
line(167+front,185,250+front,163+n);
line(167+front,246,249+front,265-n);
line(138+front,288,250+front,265-n);

n++; front++;
setcolor(WHITE);
line(138+front,152,138+front,288);
line(167+front,185,167+front,246);

line(138+front,152,250+front,163+n);
line(167+front,185,250+front,163+n);
line(167+front,246,249+front,265-n);
line(138+front,288,250+front,265-n);


pos=10;
  while(pos<=32)
  {
  line(320+pos*10,0,320+pos*10,480-tempo*(32-pos)/2.0);
  line(320-pos*10,0,320-pos*10,480-tempo*(32-pos)/2.0);
  pos++;
  }
}

while(n!=0)
{
delay(5);

setcolor(BLACK);
line(138+front,152,138+front,288);
line(167+front,185,167+front,246);

line(138+front,152,250+front,163+n);
line(167+front,185,250+front,163+n);
line(167+front,246,249+front,265-n);
line(138+front,288,250+front,265-n);

n--; front++;
setcolor(WHITE);
line(138+front,152,138+front,288);
line(167+front,185,167+front,246);

line(138+front,152,250+front,163+n);
line(167+front,185,250+front,163+n);
line(167+front,246,249+front,265-n);
line(138+front,288,250+front,265-n);


pos=0;
  while(pos<=32)
  {
  line(320+pos*10,0,320+pos*10,480-tempo*(32-pos)/2.0);
  line(320-pos*10,0,320-pos*10,480-tempo*(32-pos)/2.0);
  pos++;
  }
}
}



settextstyle(10,0,6);
outtextxy(150,50,"C-DOKU");
delay(500);
settextstyle(10,0,4);
outtextxy(185,160,"UNLIMITED");
settextstyle(2,0,7);
delay(500);
outtextxy(140,250,"A Sudoku Generator and Solver");
outtextxy(141,250,"A Sudoku Generator and Solver");

  delay(300);
strcpy(str,"123456789");
front=0;
while(front<=100)
{
line(300,320,300,320+front);


front++;
delay(5);
}
front=0;
while(front<=100)
{
line(330,320,330,320+front);



front++;
delay(5);
}
front=0;
while(front<=100)
{

  line(265,353,265+front,353);
front++;
delay(5);
}
front=0;
while(front<=100)
{
   line(265,386,265+front,386);





front++;
delay(5);
}
	 int num=0;
for( i=0;i<3;i++)
for(int j=0;j<3;j++)
{
a[0]=str[num];
delay(100);
outtextxy(270+40*j,320+40*i,a);
outtextxy(271+40*j,320+40*i,a);

	num++;
	}

delay(1000);
getch();

pos=0;
int tpos,tpos1;
while(pos!=660)
{
tpos=10;
tpos1=50;
while(tpos!=570)
{

setfillstyle(1,WHITE);
bar(pos,tpos-20,pos-1,tpos+20);
bar(640-pos,tpos1-20,640-pos+1,tpos1+20);
setfillstyle(1,BLACK);
bar(pos-10,tpos-20,pos-11,tpos+20);
bar(640-pos+10,tpos1-20,640-pos+11,tpos1+20);
tpos+=80;
tpos1+=80;
}



  pos++;
    delay(1);

}

/*pos=480;

while(pos!=0)
{

setmouseptr(60,pos);
hidemouseptr();
bar(40,pos,80,pos-1);
showmouseptr();
  pos--;
  delay(1);
} */
 setcolor(WHITE);

cleardevice();
delay(500);
}
}



void main()
{
int i,j;
int GD=DETECT,GM,x,y;

initgraph(&GD,&GM,"C:\\TURBOC3\\BGI");


initmouse();


showmouseptr();

 randomize();

 settextstyle(4,0,4);

 //temporary();
//soundstart();

beginning();

/*
setfillstyle(1,WHITE);
bar(0,0,640,480);
setfillstyle(1,LIGHTCYAN);
bar(0,0,10,480);


settextstyle(7,0,7);

getch();
int p=0;
while(p<=630)
{
outtextxy(200,225,"C-DOKU");
setfillstyle(1,WHITE);
bar(p+10,0,640,480);
setfillstyle(1,LIGHTCYAN);
bar(p,0,p+10,480);
setfillstyle(1,RED);
bar(p-10,0,p,480);

p+=10;
}
  delay(1000);
  p-=10;
while(p>=0)
{
outtextxy(200,225,"C-DOKU");
setfillstyle(1,WHITE);
bar(p+10,0,640,480);
setfillstyle(1,LIGHTCYAN);
bar(p,0,p+10,480);


p-=10;
}
delay(500);
p=0;
settextstyle(7,0,5);
while(p<=630)
{
outtextxy(100,150,"BY");
outtextxy(150,200,"ADITHYA");
outtextxy(200,250,"AND");
outtextxy(250,300,"PRIYANKAR");
setfillstyle(1,WHITE);
bar(p+10,0,640,480);
setfillstyle(1,LIGHTCYAN);
bar(p,0,p+10,480);
setfillstyle(1,BLUE);
bar(p-10,0,p,480);

p+=10;
}

getch();
cleardevice();
*/





menu();


getch();
closegraph();
}