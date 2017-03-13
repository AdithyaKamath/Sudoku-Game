void favouritemenu()
{
int button,xcor,ycor,position=0;
startss=clock();
 cleardevice();

	 int xtemp=-1,ytemp=-1;
dispmenu(3);

while(1)
{
restrictmouseptr(0,0,330,479);
setfillstyle(1,WHITE);
circle(0,240,350);

floodfill(400,20,getmaxcolor());
settextstyle(0,0,3);

setcolor(BLACK);

if(position>480)
position=-50;
for(int i=400;i<405;i++)
outtextxy(i,position,"FAVOURITES");

getmousepos(&button,&xcor,&ycor);

if(button||xtemp!=xcor||ytemp!=ycor)
  startss=clock();

  if(kbhit())
  {
  getch();
  startss=clock();
  }

if(button)
{

	if(xcor>5&&ycor>100&&xcor<130&&ycor<155)
	{
	settextstyle(1,0,5);
	setcolor(GREEN);
	outtextxy(10,100,"4 X 4");
	while(button)
	      {getmousepos(&button,&xcor,&ycor);}

	setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
favourites(4);
cleardevice();
dispmenu(3);


}

else if(xcor>5&&ycor>175&&xcor<130&&ycor<230)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,175,"6 X 6");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
favourites(6);
cleardevice();
dispmenu(3);
}


else if(xcor>5&&ycor>250&&xcor<130&&ycor<305)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,250,"9 X 9");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
favourites(9);
cleardevice();
dispmenu(3);
}

else if(xcor>5&&ycor>325&&xcor<115&&ycor<380)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,325,"BACK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
break;
}
}
delay(50);
setcolor(WHITE);
for(i=400;i<405;i++)
outtextxy(i,position,"FAVOURITES");

position+=20;
 endss=clock();
Tickss=(endss-startss)/CLK_TCK;

if(Tickss==screentime)
{
cleardevice();
screensaver();
hidemouseptr();
cleardevice();
showmouseptr();
dispmenu(3);
startss=clock();
}


xtemp=xcor;
ytemp=ycor;



}
}


void loadmenu()
{
int button,xcor,ycor,position=0;
    startss=clock();
 cleardevice();

	 int xtemp=-1,ytemp=-1;


   dispmenu(4);

while(1)
{
restrictmouseptr(0,0,330,479);
setfillstyle(1,WHITE);
circle(0,240,350);

floodfill(400,20,getmaxcolor());
settextstyle(0,0,3);

setcolor(BLACK);

if(position>480)
position=-50;
for(int i=500;i<505;i++)
outtextxy(i,position,"LOAD");



getmousepos(&button,&xcor,&ycor);
if(button||xtemp!=xcor||ytemp!=ycor)
  startss=clock();

  if(kbhit())
  {
  getch();
  startss=clock();
  }

 if(button)
 {


if(xcor>5&&ycor>100&&xcor<210&&ycor<155)
{

settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,100,"CONTINUE");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
      outtextxy(10,100,"CONTINUE");
	setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);
 settextstyle(1,0,4);
outtextxy(275,150,"OPEN");
outtextxy(155,190,"Enter the file name:");
moveto(250,230);
settextstyle(2,0,5);
outtext("(max 20 characters)");
restrictmouseptr(120,140,520,340);
settextstyle(1,0,4);
int t[30]={150},k=0;
char str[2];
char tname[30];
tname[k]=getch();
str[0]=tname[k];
str[1]='\0';
moveto(150,260);
while(tname[k]!=13)
{


if(tname[k]==8&&k!=0)
{
k--;
moveto(t[k],260);
str[0]=tname[k];
setcolor(BLACK);

outtext(str);

 setcolor(WHITE);
 moveto(t[k],260);

}
else if((isalnum(tname[k])||tname[k]==' ')&&k<20)
{


outtext(str);

if(k<20)
k++;



       }

tname[k]=getch();
str[0]=tname[k];


 t[k]=getx();

}

if(tname[k]==13)
tname[k]='\0';



settextstyle(2,0,7);




 restrictmouseptr(0,0,639,479);


setcolor(WHITE);
setfillstyle(0,WHITE);
open(tname);
cleardevice();
dispmenu(4);


}



else if(xcor>5&&ycor>200&&xcor<250&&ycor<255)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,200,"FAVOURITES");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
   favouritemenu();
  cleardevice();
  dispmenu(4);

}


else if(xcor>5&&ycor>300&&xcor<115&&ycor<355)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,300,"BACK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
break;
}
}
delay(50);
setcolor(WHITE);
for(i=500;i<505;i++)
outtextxy(i,position,"LOAD");

position+=20;

endss=clock();
Tickss=(endss-startss)/CLK_TCK;

if(Tickss==screentime)
{
cleardevice();
screensaver();
hidemouseptr();
cleardevice();
showmouseptr();
dispmenu(4);
startss=clock();
}


xtemp=xcor;
ytemp=ycor;

}
}






void solvermenu(int mode)
{
int button,xcor,ycor,position=0;
   startss=clock();
 cleardevice();

	 int xtemp=-1,ytemp=-1;
 dispmenu(3);

while(1)
{
restrictmouseptr(0,0,330,479);
setfillstyle(1,WHITE);
circle(0,240,350);

floodfill(400,20,getmaxcolor());
settextstyle(0,0,3);

setcolor(BLACK);

if(position>480)
position=-50;
for(int i=400;i<405;i++)
{if(mode==0)
outtextxy(i,position,"SOLVER");
else
outtextxy(i,position,"SELF-SOLVER");
}


getmousepos(&button,&xcor,&ycor);


 if(button||xtemp!=xcor||ytemp!=ycor)
  startss=clock();

  if(kbhit())
  {
  getch();
  startss=clock();
  }
 if(button)
 {

if(xcor>5&&ycor>100&&xcor<130&&ycor<155)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,100,"4 X 4");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
 restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
solver(4,mode);
cleardevice();
dispmenu(3);


}

else if(xcor>5&&ycor>175&&xcor<130&&ycor<230)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,175,"6 X 6");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
solver(6,mode);
cleardevice();
dispmenu(3);
}


else if(xcor>5&&ycor>250&&xcor<130&&ycor<305)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,250,"9 X 9");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
solver(9,mode);
cleardevice();
dispmenu(3);
}

else if(xcor>5&&ycor>325&&xcor<115&&ycor<380)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,325,"BACK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
break;
}
}
delay(50);
setcolor(WHITE);
for(i=400;i<405;i++)
{if(mode==0)
outtextxy(i,position,"SOLVER");
else
outtextxy(i,position,"SELF-SOLVER");
}

position+=20;

endss=clock();
Tickss=(endss-startss)/CLK_TCK;

if(Tickss==screentime)
{
cleardevice();
screensaver();
hidemouseptr();
cleardevice();
showmouseptr();
dispmenu(3);
startss=clock();
}


xtemp=xcor;
ytemp=ycor;
}
}




void nextmenu()
{
int button,xcor,ycor,position=0,tpos,flagshow=1,xpos;

startss=clock();
 cleardevice();

	 int xtemp=-1,ytemp=-1;


 dispmenu(2);




while(1)
{



if(!flagshow)
{
restrictmouseptr(xpos-1,0,639,479);
 setcolor(BLACK);
   // 290
rectangle(200,220,xpos,260);

line(200,200,200,280);
line(200,200,150,240);
line(200,280,150,240);
settextstyle(0,0,1);
outtextxy(230,237,"BACK");

settextstyle(0,0,2);

if(position>480)
position=-50;
for(int i=50;i<55;i++)
outtextxy(i,position,"PLAY");

}

if(flagshow)
{
 restrictmouseptr(0,0,250,479);
setfillstyle(1,WHITE);


line(250,0,250,480);
 floodfill(400,20,getmaxcolor());


setfillstyle(1,WHITE);


    setcolor(BLACK);
rectangle(250,220,400,260);
line(400,200,400,280);
line(400,200,450,240);
line(400,280,450,240);
settextstyle(0,0,1);
outtextxy(280,237,"SWIPE");
   settextstyle(0,0,2);

if(position>480)
position=-50;
for(int i=470;i<475;i++)
outtextxy(i,position,"PLAY");
}

getmousepos(&button,&xcor,&ycor);


if(button||xtemp!=xcor||ytemp!=ycor)
  startss=clock();

	 if(kbhit())
  {
  getch();
  startss=clock();
  }

 if(button)
 {

 if(xcor>249&&flagshow==1)
 {
 tpos=xcor+1;
    setfillstyle(1,WHITE);

 restrictmouseptr(0,0,639,479);
 while(button)
 {
 getmousepos(&button,&xcor,&ycor);







  settextstyle(1,0,5);
setcolor(WHITE);
dispmenu(2);
outtextxy(350,100,"SELF-SOLVER");

outtextxy(390,225,"MINI-GAME");
outtextxy(350,350,"MULTIPLAYER");

setfillstyle(1,WHITE);

setfillstyle(1,BLACK);
 if(tpos!=xcor&&xcor>249)
  {
  hidemouseptr();


       if(tpos<xcor)
	 setfillstyle(1,WHITE);

	   else
	  setfillstyle(1,BLACK);


	  bar(tpos-350,0,xcor-350,480);
	     if(tpos<xcor)
	     setfillstyle(1,BLACK);

	   else
	    setfillstyle(1,WHITE);

	    bar(tpos,0,xcor,480);



setfillstyle(1,WHITE);

	 showmouseptr();
tpos=xcor;
}

}


if(tpos<400)
{
hidemouseptr();
while(tpos>250)
{
setfillstyle(1,BLACK);
bar(tpos-350,0,tpos-355,480);
setfillstyle(1,WHITE);
bar(tpos,0,tpos-5,480);

tpos-=5;
dispmenu(2);
}
setfillstyle(1,BLACK);
bar(tpos,0,250,480);
showmouseptr();
}
else
{
hidemouseptr();

setfillstyle(1,BLACK);
settextstyle(1,0,5);
setcolor(WHITE);
while(tpos<=640)
{
outtextxy(350,100,"SELF-SOLVER");

outtextxy(390,225,"MINI-GAME");

outtextxy(350,350,"MULTIPLAYER");
setfillstyle(1,WHITE);


bar(tpos-350,0,tpos-345,480);
xpos=tpos-345;
setfillstyle(1,BLACK);
bar(tpos,0,tpos+5,480);

tpos+=5;
}

flagshow=0;

showmouseptr();


}


}

else if(xcor<xpos&&flagshow==0)
{
 tpos=xcor+1;
    setfillstyle(1,WHITE);
    restrictmouseptr(0,0,639,479);
 while(button)
 {
 getmousepos(&button,&xcor,&ycor);

  settextstyle(1,0,5);
setcolor(WHITE);
dispmenu(2);
outtextxy(350,100,"SELF-SOLVER");

outtextxy(390,225,"MINI-GAME");
outtextxy(350,350,"MULTIPLAYER");
setfillstyle(1,WHITE);

setfillstyle(1,BLACK);
 if(tpos!=xcor&&xcor<xpos)
  {
  hidemouseptr();


	  if(tpos<xcor)
	 setfillstyle(1,WHITE);

	   else
	  setfillstyle(1,BLACK);

	  bar(tpos,0,xcor,480);

	   if(tpos<xcor)
	 setfillstyle(1,BLACK);

	   else
	  setfillstyle(1,WHITE);




	  bar(tpos+350,0,xcor+350,480);
	showmouseptr();
tpos=xcor;
}

}


if(tpos>150)
{
    hidemouseptr();
while(tpos<xpos)
{
setfillstyle(1,WHITE);
bar(tpos,0,tpos-5,480);
setfillstyle(1,BLACK);
bar(tpos+350,0,tpos+345,480);
tpos+=5;
settextstyle(1,0,5);
setcolor(WHITE);
outtextxy(350,100,"SELF-SOLVER");

outtextxy(390,225,"MINI-GAME");
outtextxy(350,350,"MULTIPLAYER");

}
showmouseptr();
}
else
{
 hidemouseptr();
setfillstyle(1,BLACK);
settextstyle(1,0,5);
setcolor(WHITE);
while(tpos+350>=250)
{
dispmenu(2);
setfillstyle(1,BLACK);


bar(tpos,0,tpos+5,480);
setfillstyle(1,WHITE);
bar(tpos+350,0,tpos+355,480);

tpos-=5;
}
bar(tpos+355,0,250,480);
flagshow=1;

showmouseptr();


}


}



else if(xcor>345&&ycor>100&&xcor<615&&ycor<155&&flagshow==0)
 {
 flagshow=1;
 settextstyle(1,0,5);
 setcolor(GREEN);
 outtextxy(350,100,"SELF-SOLVER");
 while(button)
 {getmousepos(&button,&xcor,&ycor);}
 cleardevice();
 setcolor(WHITE);
 solvermenu(1);
 cleardevice();
 dispmenu(2);
 }

else if(xcor>350&&ycor>350&&xcor<620&&ycor<400&&flagshow==0)
{
 flagshow=1;
settextstyle(1,0,5);
 setcolor(GREEN);
outtextxy(350,350,"MULTIPLAYER");
 while(button)
 {getmousepos(&button,&xcor,&ycor);}
 restrictmouseptr(0,0,639,479);
 cleardevice();
 setcolor(WHITE);
 dispmenu(5);
 multiplayer();
 cleardevice();
 dispmenu(2);
}

else if(xcor>390&&ycor>225&&xcor<615&&ycor<280&&flagshow==0)
{
settextstyle(1,0,5);
 setcolor(GREEN);
  outtextxy(390,225,"MINI-GAME");
  setcolor(WHITE);
 while(button)
 {getmousepos(&button,&xcor,&ycor);}
cleardevice();
loading();
cleardevice();
if(minigame()==0)
{
cleardevice();
outtextxy(50,50,"The sequence you entered did not");
outtextxy(50,100,"match with the sequence which");
outtextxy(50,150,"was shown to you.");
outtextxy(250,270,"YOU LOSE");
settextstyle(2,0,5);
outtextxy(330,460,"(Press any key to go back to the menu)");

 getch();
cleardevice();
flagshow=1;
dispmenu(2);
}
else
{
cleardevice();
flagshow=1;
dispmenu(2);
}
}
else if(xcor>5&&ycor>25&&xcor<130&&ycor<80&&flagshow==1)
{
flagshow=1;
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,25,"4 X 4");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
 restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
sud4X4();
cleardevice();
dispmenu(2);
}
else if(xcor>5&&ycor>100&&xcor<130&&ycor<155&&flagshow==1)
{
flagshow=1;
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,100,"6 X 6");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
sud6X6();
cleardevice();
dispmenu(2);

}
else if(xcor>5&&ycor>175&&xcor<130&&ycor<230&&flagshow==1)
{
flagshow=1;
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,175,"9 X 9");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
loading();
cleardevice();
setcolor(WHITE);
setfillstyle(0,WHITE);
sud9X9();
cleardevice();
dispmenu(2);
}
else if(xcor>5&&ycor>250&&xcor<110&&ycor<305&&flagshow==1)
{
flagshow=1;
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,250,"OPEN");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);

       loadmenu();

cleardevice();
dispmenu(2);



}
else if(xcor>5&&ycor>325&&xcor<160&&ycor<380&&flagshow==1)
{
flagshow=1;
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,325,"SOLVER");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);

       solvermenu(0);

  cleardevice();
dispmenu(2);
   }
else if(xcor>5&&ycor>400&&xcor<115&&ycor<455&&flagshow==1)
{
flagshow=1;
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,400,"BACK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);

break;
}
startss=clock();
}
if(flagshow)
{
delay(50);
setcolor(WHITE);
for(int i=470;i<475;i++)
outtextxy(i,position,"PLAY");

position+=20;
}
if(!flagshow)
{
delay(50);
setcolor(WHITE);
for(int i=50;i<55;i++)
outtextxy(i,position,"PLAY");

position+=20;
}
endss=clock();
Tickss=(endss-startss)/CLK_TCK;

if(Tickss==screentime)
{
cleardevice();
screensaver();
hidemouseptr();
cleardevice();
showmouseptr();
if(flagshow==1)
dispmenu(2);
else
{
bar(0,0,290,480);


settextstyle(1,0,5);
setcolor(WHITE);
outtextxy(350,100,"SELF-SOLVER");

outtextxy(390,225,"MINI-GAME");
outtextxy(350,350,"MULTIPLAYER");
}


startss=clock();
}


xtemp=xcor;
ytemp=ycor;
}
}

void scorelist(int size)
{
Scores s1;
   cleardevice();
   fstream SUDOF ;
if(size==4)
{

strcpy(fname,Dir);
strcat(fname, "SCORE4" ) ;
strcat(fname,".SAV");
}


else if(size==6)
{
strcpy(fname,Dir);
strcat(fname, "SCORE6" ) ;
strcat(fname,".SAV");

}
else if(size==9)
{
strcpy(fname,Dir);
strcat(fname, "SCORE9" ) ;
strcat(fname,".SAV");
}
SUDOF.open(fname, ios::in | ios::binary );

SUDOF.read((char*)&s1, sizeof(s1));
int num=1;
 char str[30];
settextstyle(1,0,5);
outtextxy(50,50,"RANK");
outtextxy(200,50,"NAME");
outtextxy(500,50,"TIME");
     rectangle(30,50,615,410);
     line(30,120,615,120);
     line(180,50,180,410);
     line(450,50,450,410);

  settextstyle(1,0,4);

for(int i=0;i<=4;i++)
{
outtextxy(545,148+50*i,":");

itoa(num,str,10);
outtextxy(90,150+50*i,str);
outtextxy(200,150+50*i,s1.retname(i));

if(s1.rettime(i)%60<10)
{
itoa(s1.rettime(i)%60,str,10);
outtextxy(580,150+50*i,str);
itoa(0,str,10);
outtextxy(560,150+50*i,str);
}
else
{
itoa(s1.rettime(i)%60,str,10);
outtextxy(560,150+50*i,str);
}

if(s1.rettime(i)/60<10)
{
itoa(s1.rettime(i)/60,str,10);
outtextxy(520,150+50*i,str);
itoa(0,str,10);
outtextxy(500,150+50*i,str);

}
else
{
itoa(s1.rettime(i)/60,str,10);
outtextxy(500,150+50*i,str);
}




num++;
}
  settextstyle(1,0,5);
SUDOF.close() ;

settextstyle(2,0,5);
outtextxy(420,440,"Press any key to go back...");

}


void highscores()
{
int button,xcor,ycor,position=0;
startss=clock();
 cleardevice();

	 int xtemp=-1,ytemp=-1;

 dispmenu(3);

while(1)
{
restrictmouseptr(0,0,330,479);
setfillstyle(1,WHITE);
circle(0,240,350);

floodfill(400,20,getmaxcolor());
settextstyle(0,0,3);

setcolor(BLACK);

if(position>480)
position=-50;
for(int i=400;i<405;i++)
outtextxy(i,position,"HIGHSCORES");



getmousepos(&button,&xcor,&ycor);

    if(button||xtemp!=xcor||ytemp!=ycor)
  startss=clock();

  if(kbhit())
  {
  getch();
  startss=clock();
  }
 if(button)
 {

if(xcor>5&&ycor>100&&xcor<130&&ycor<155)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,100,"4 X 4");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
 restrictmouseptr(0,0,639,479);
cleardevice();
scorelist(4);
getch();
cleardevice();
dispmenu(3);
}

else if(xcor>5&&ycor>175&&xcor<130&&ycor<230)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,175,"6 X 6");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
scorelist(6);
getch();
cleardevice();
dispmenu(3);
}


else if(xcor>5&&ycor>250&&xcor<130&&ycor<305)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,250,"9 X 9");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
restrictmouseptr(0,0,639,479);
cleardevice();
scorelist(9);
getch();
cleardevice();
dispmenu(3);
}

else if(xcor>5&&ycor>325&&xcor<115&&ycor<380)
{
settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,325,"BACK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
break;
}
startss=clock();
}
delay(50);
setcolor(WHITE);
for(i=400;i<405;i++)
outtextxy(i,position,"HIGHSCORES");

position+=20;

endss=clock();
Tickss=(endss-startss)/CLK_TCK;

if(Tickss==screentime)
{
cleardevice();
screensaver();
hidemouseptr();
cleardevice();
showmouseptr();
dispmenu(3);

startss=clock();
}


xtemp=xcor;
ytemp=ycor;
}
}



void menu()
{
startss=clock();
 cleardevice();

	 int xtemp=-1,ytemp=-1;

	   int position=-50;

int button,xcor,ycor;


	       dispmenu(1);


while(1)
{
restrictmouseptr(0,0,330,479);

  setfillstyle(1,WHITE);

settextstyle(4,0,8);
     setcolor(WHITE);
circle(0,240,350);
floodfill(400,40,getmaxcolor());
setcolor(BLACK);

if(position>480)
position=-50;
for(int i=360;i<365;i++)
outtextxy(i,position,"C-Doku");


 getmousepos(&button,&xcor,&ycor);

  if(button||xtemp!=xcor||ytemp!=ycor)
  startss=clock();

  if(kbhit())
  {
  getch();
  startss=clock();
  }
 if(button)
 {
 if(xcor>5&&ycor>100&&xcor<115&&ycor<155)
 {
      settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,100,"PLAY");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
 nextmenu();
  cleardevice();
  dispmenu(1);
 }
 else if(xcor>5&&ycor>175&&xcor<290&&ycor<230)
  {
  settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,175,"INSTRUCTIONS");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
  restrictmouseptr(0,0,639,479);
   rules();
   dispmenu(1);
  }
  else if(xcor>5&&ycor>250&&xcor<255&&ycor<305)
  {
     settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,250,"HIGHSCORES");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);

  highscores();

cleardevice();
dispmenu(1);

  }
 else if(xcor>5&&ycor>325&&xcor<100&&ycor<380)
 {
      settextstyle(1,0,5);
      setcolor(GREEN);
      outtextxy(10,325,"EXIT");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
 restrictmouseptr(0,0,639,480);
 exit(0);
  }

  }

delay(50);
setcolor(WHITE);
for(i=360;i<365;i++)
outtextxy(i,position,"C-Doku");
    setcolor(WHITE);
position+=20;


endss=clock();
Tickss=(endss-startss)/CLK_TCK;

if(Tickss==screentime)
{
cleardevice();
screensaver();
hidemouseptr();
cleardevice();
showmouseptr();
dispmenu(1);
startss=clock();
}


xtemp=xcor;
ytemp=ycor;
}

}