void lockscreen()
{
int button,xcor,ycor,tpos;
hidemouseptr();
setfillstyle(1,WHITE);

  bar(0,0,640,480);
  setfillstyle(1,RED);
  bar(0,475,640,480);
  showmouseptr();
while(1)
{

 restrictmouseptr(0,0,640,480);



getmousepos(&button,&xcor,&ycor);


 if(button)
 {

 if(ycor>479)
 {
 tpos=ycor+1;
    setfillstyle(1,WHITE);

 while(button)
 {
 getmousepos(&button,&xcor,&ycor);

 if(tpos!=ycor)
  {
  hidemouseptr();


	 if(tpos>ycor)
	     setfillstyle(1,BLACK);

	   else
	    setfillstyle(1,WHITE);

	    bar(0,tpos,640,ycor);

       setfillstyle(1,RED);
  bar(0,ycor-5,640,ycor);

  setfillstyle(1,WHITE);
  bar(0,0,640,ycor-5);

	 showmouseptr();
tpos=ycor;
}

}


if(tpos<240)
{
hidemouseptr();
while(tpos>=0)
{
setfillstyle(1,BLACK);
delay(2);
bar(0,tpos,640,tpos-1);

    setfillstyle(1,BLACK);
  bar(0,480,640,tpos);

setfillstyle(1,RED);
  bar(0,tpos-5,640,tpos);

tpos--;
}
showmouseptr();
break;
}
else
{
hidemouseptr();

while(tpos<640)
{
setfillstyle(1,WHITE);
delay(2);
bar(0,tpos,640,tpos+1);

setfillstyle(1,WHITE);
  bar(0,0,640,tpos-5);

setfillstyle(1,RED);
  bar(0,tpos-5,640,tpos);


tpos++;
}
setfillstyle(1,RED);
  bar(0,475,640,480);


showmouseptr();


}


}


}
}
}


void screensaver()
{

int button,xcor,ycor,pos=480;
getmousepos(&button,&xcor,&ycor);
int xtemp=xcor,ytemp=ycor;



setfillstyle(1,RED);
bar(10,0,20,480);
bar(630,0,620,480);
setfillstyle(1,BLUE);
bar(25,0,30,480);
bar(615,0,610,480);



while(1)
{
getmousepos(&button,&xcor,&ycor);
	    setcolor(WHITE);
	     settextstyle(1,0,5);
outtextxy(150,pos,"C-Doku");
 settextstyle(1,0,3);
 outtextxy(220,pos+80,"A Special Thanks to :");
 outtextxy(250,pos+110,"Mrs. Sona Maria Fernandes");
 outtextxy(250,pos+140,"Prof. Mathew C. Ninan");
 outtextxy(250,pos+170,"Mrs. Lali A. Mathew");
 outtextxy(220,pos+220,"Programmers:");
outtextxy(250,pos+250,"Adithya");
outtextxy(250,pos+280,"Priyankar");
	delay(20);
 setcolor(BLACK);
   settextstyle(1,0,5);
outtextxy(150,pos,"C-Doku");
 settextstyle(1,0,3);
 outtextxy(220,pos+80,"A Special Thanks to :");
 outtextxy(250,pos+110,"Mrs. Sona Maria Fernandes");
 outtextxy(250,pos+140,"Prof. Mathew C. Ninan");
 outtextxy(250,pos+170,"Mrs. Lali A. Mathew");
 outtextxy(220,pos+220,"Programmers:");
outtextxy(250,pos+250,"Adithya");
outtextxy(250,pos+280,"Priyankar");

if(button||xtemp!=xcor||ytemp!=ycor)
break;

if(kbhit())
{
getch();
break;
}

xtemp=xcor;
ytemp=ycor;

if(pos<-350)
pos=480;

pos-=10;

}
setfillstyle(1,WHITE);
setcolor(WHITE);
//lockscreen();
}



void displayboard(int a[9][9],int size,int dup[9][9],int mode=0)
{

hidemouseptr();
settextstyle(2,0,7);
for(int x=200;x<=200+size*25;x+=25)
line(x,50,x,50+size*25);
for(int y=50;y<=50+size*25;y+=25)
line(200,y,200+size*25,y);

setfillstyle(1,RED);
bar(496,46,604,129);
setfillstyle(1,BLACK);
bar(500,50,600,125);

for(x=500;x<=575;x+=25)
line(x,50,x,125);
for(y=50;y<=125;y+=25)
line(500,y,575,y);

rectangle(575,50,600,125);
settextstyle(1,2,2);
outtextxy(575,55,"CLEAR");

settextstyle(2,0,7);
int n=1;
for(int j=1;j<=3;j++)
for(int i=1;i<=3;i++)
{
if(n>size)
{
line(475+i*25,25+j*25,500+i*25,50+j*25);
line(500+i*25,25+j*25,475+i*25,50+j*25);
}
n++;
}




rectangle(1,1,639,479);
rectangle(10,10,630,470);
rectangle(165,10,175,470);
rectangle(450,10,460,470);
rectangle(175,325,450,335);
rectangle(10,155,165,165);
rectangle(460,155,630,165);
setfillstyle(1,colours[random(sizeof(colours)/2)]);
floodfill(2,2,getmaxcolor());
floodfill(166,11,getmaxcolor());
floodfill(451,11,getmaxcolor());
floodfill(176,326,getmaxcolor());
floodfill(11,156,getmaxcolor());
floodfill(461,156,getmaxcolor());
 setfillstyle(11,WHITE);
 floodfill(448,300,getmaxcolor());
 setfillstyle(1,RED);
 if(size==4)
 {
bar(248,50,252,150);
bar(200,98,300,102);

bar(196,46,200,154);
bar(300,46,304,154);
bar(196,46,304,50);
bar(196,150,304,154);
rectangle(194,44,306,156);
 }
 else if(size==6)
 {
bar(248,50,252,200);
bar(298,50,302,200);
bar(200,123,350,127);

bar(196,46,200,204);
bar(350,46,354,204);
bar(196,46,354,50);
bar(196,200,354,204);
rectangle(194,44,356,206);

 }
 else if(size==9)
 {
bar(273,50,277,275);
bar(348,50,352,275);
bar(200,123,425,127);
bar(200,198,425,202);

bar(196,46,200,279);
bar(425,46,429,279);
bar(196,46,429,50);
bar(196,275,425,279);
rectangle(194,44,431,281);
 }
outtextxy(508,50,"1");
outtextxy(531,50,"2");
outtextxy(554,50,"3");
outtextxy(508,75,"4");
outtextxy(531,75,"5");
outtextxy(554,75,"6");
outtextxy(508,100,"7");
outtextxy(531,100,"8");
outtextxy(554,100,"9");

outtextxy(509,50,"1");
outtextxy(532,50,"2");
outtextxy(555,50,"3");
outtextxy(509,75,"4");
outtextxy(532,75,"5");
outtextxy(555,75,"6");
outtextxy(509,100,"7");
outtextxy(532,100,"8");
outtextxy(555,100,"9");




settextstyle(1,0,4);



outtextxy(505,380,"BACK");

outtextxy(505,300,"SAVE");


if(mode==1)
{
outtextxy(505,220,"SOLVE");
}
else
outtextxy(505,220,"CHECK");


if(mode==1)
{

outtextxy(40,65,"RESET");
}


settextstyle(1,0,6);
char Str1[10];
itoa(size,Str1,10);
moveto(240,365);
outtext(Str1);
outtext(" X ");
outtext(Str1);




settextstyle(2,0,7);

for( i=0;i<size;i++)
for( j=0;j<size;j++)
 {
 if(a[i][j]!=0)
{
setcolor(WHITE);
itoa(a[i][j],Str1,10);
outtextxy(208+(j*25),50+(i*25),Str1);
outtextxy(209+(j*25),50+(i*25),Str1);
}
 if(dup[i][j]!=0)
{
setfillstyle(1,YELLOW);
bar(205+25*j,55+25*i,220+25*j,70+25*i);

setcolor(BLACK);
itoa(a[i][j],Str1,10);
outtextxy(208+(j*25),50+(i*25),Str1);
outtextxy(209+(j*25),50+(i*25),Str1);
}

}
setcolor(WHITE);
showmouseptr();
}


void dispmenu(int ch)
{
hidemouseptr();
if(ch==1)
{

settextstyle(1,0,5);
outtextxy(10,100,"PLAY");
outtextxy(10,175,"INSTRUCTIONS");
outtextxy(10,250,"HIGHSCORES");
outtextxy(10,325,"EXIT");
}
else if(ch==2)
{


settextstyle(1,0,5);
outtextxy(10,25,"4 X 4");
outtextxy(10,100,"6 X 6");
outtextxy(10,175,"9 X 9");
outtextxy(10,250,"OPEN");
outtextxy(10,325,"SOLVER");
outtextxy(10,400,"BACK");
}
else if(ch==3)
{

settextstyle(1,0,5);
outtextxy(10,100,"4 X 4");
outtextxy(10,175,"6 X 6");
outtextxy(10,250,"9 X 9");
outtextxy(10,325,"BACK");
}
else if(ch==4)
{


settextstyle(1,0,5);

outtextxy(10,100,"CONTINUE");
outtextxy(10,200,"FAVOURITES");
outtextxy(10,300,"BACK");
}
else if(ch==5)
{


settextstyle(1,0,5);

outtextxy(10,100,"HOST");
outtextxy(10,200,"JOIN");
outtextxy(10,300,"BACK");
}
showmouseptr();
}
