


 void save(SudoNum &sud,char *name)
{

fstream SUDOF ;
strcpy(fname,Dir);
strcat(fname, name ) ;
strcat(fname,".sud");
SUDOF.open(fname, ios::out | ios::binary );
SUDOF.write((char*)&sud,  sizeof(sud));
SUDOF.close() ;
}




void solve(int a[9][9],int solved[9][9],int duplicate[9][9],int size,int timestart)
{

startss=clock();
int xtemp=-1,ytemp=-1;
       int flagexit=0;
int temp[3][3]={1,2,3,4,5,6,7,8,9};
int flagsol=0;
pausetime=0;
displayboard(a,size,duplicate);
int chkrow,chkcol,chkbox1,chkbox2,chkbox3,chkbox4,chkbox5,chkbox6,chkbox7,chkbox8,chkbox9,chkzero;
char str[30];
int button,xcor,ycor;
char Strtime[10] ;
int i1=-1,j1=-1;

start = clock();

char code[30];






while(1)
{
getmousepos(&button,&xcor,&ycor);

if(button||xtemp!=xcor||ytemp!=ycor)
  startss=clock();

  if(kbhit())
  {
  getch();
  startss=clock();
  }

if(button==1)
{

if(xcor>503&&ycor>300&&xcor<580&&ycor<340)
{
 int startpause,endpause;
startpause=clock();

settextstyle(1,0,4);
      setcolor(GREEN);
      outtextxy(505,300,"SAVE");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
       outtextxy(505,300,"SAVE");
settextstyle(2,0,7);

setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,3);
outtextxy(215,145,"Enter the name to");

outtextxy(200,185,"save your progress as:");

moveto(250,230);
settextstyle(2,0,5);
outtext("(max 20 characters)");
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





cleardevice();
SudoNum sud;
for(int i=0;i<9;i++)
for(int j=0;j<9;j++)
sud.Num[i][j]=a[i][j];

for(i=0;i<9;i++)
for(j=0;j<9;j++)
sud.solved[i][j]=solved[i][j];

for(i=0;i<9;i++)
for(j=0;j<9;j++)
sud.duplicate[i][j]=duplicate[i][j];

sud.size=size;

sud.timestart=Tick;

save(sud,tname);

cleardevice();
displayboard(a,size,duplicate);
  endpause=clock();

pausetime+=(endpause-startpause)/CLK_TCK;

 startss=clock();
}
else if(xcor>503&&ycor>380&&xcor<585&&ycor<420)
{

int startpause,endpause;
startpause=clock();


settextstyle(1,0,4);
      setcolor(GREEN);
      outtextxy(505,380,"BACK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
       outtextxy(505,380,"BACK");
settextstyle(2,0,7);



setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,3);
outtextxy(195,145,"Do you want to quit?");
outtextxy(160,175,"(If not saved, your current");
outtextxy(195,205,"progress will be lost.)");

   restrictmouseptr(120,140,520,340);

outtextxy(200,255,"YES");
outtextxy(400,255,"NO");



    while(1)
    {
      getmousepos(&button,&xcor,&ycor);
    if(button)
     {
     if(xcor>395&&ycor>255&&xcor<435&&ycor<285)
     {
     setcolor(GREEN);
	outtextxy(400,255,"NO");
      while(button)
	 {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
     restrictmouseptr(0,0,639,479);

     cleardevice();
     displayboard(a,size,duplicate);

     endpause=clock();

pausetime+=(endpause-startpause)/CLK_TCK;

 startss=clock();
     break;

     }


     else if(xcor>195&&ycor>255&&xcor<245&&ycor<285)
      {
	setcolor(GREEN);
	outtextxy(200,255,"YES");
      while(button)
	 {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);

     restrictmouseptr(0,0,639,479);


cheatmode=0;
flagtime=1;
flagexit=1;
break;
}
}
}
if(flagexit==1)
break;
}



else if(xcor>503&&ycor>220&&xcor<605&&ycor<260)
{
 int startpause,endpause;
startpause=clock();


settextstyle(1,0,4);
      setcolor(GREEN);
      outtextxy(505,220,"CHECK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
       outtextxy(505,220,"CHECK");
settextstyle(2,0,7);


setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);



int chk,hint[3];
chk=sameornot(a,solved,hint[0],hint[1],size);

if(!chk)
{
 chk=checkzerosolve(a,hint[0],hint[1],size);

 if(!chk)
 {  settextstyle(1,0,4);
 outtextxy(195,175,"You Have Solved");
 outtextxy(140,235,"The Puzzle Successfully");
     settextstyle(2,0,5);
     outtextxy(300,320,"(Press any key to continue...)");
 getch();
    cheatmode=0;
     flagtime=1;





  bar(120,140,520,340);


Scores s1;

fstream SUDO;

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
SUDO.open(fname,  ios::in | ios::out | ios::binary );
SUDO.read((char*)&s1,  sizeof(s1));
int pos,flagt=0;
for(int i=0;i<=4;i++)
if(Tick<=s1.rettime(i))
{
flagt=1;
pos=i;
break;
}

  if(flagt==1)
  {
  for(int i=3; i>=pos ; i--)
  {
   strcpy(s1.retname(i+1),s1.retname(i));
   s1.rettime(i+1)=s1.rettime(i);

    }
	  settextstyle(1,0,4);
outtextxy(200,150,"NEW HIGHSCORE");
outtextxy(175,190,"Enter Your Name:");
moveto(250,230);
settextstyle(2,0,5);
outtext("(max 20 characters)");
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
strcpy(s1.retname(pos),tname);

s1.rettime(pos)=Tick;

SUDO.seekp(0);
SUDO.write((char*)&s1,  sizeof(s1));
}
SUDO.close() ;
flagtime=1;




     setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,3);
outtextxy(195,145,"Do you want to store");
outtextxy(200,175,"this board in the list");
outtextxy(240,205,"of Favourites?");

   restrictmouseptr(120,140,520,340);


outtextxy(200,255,"YES");
outtextxy(400,255,"NO");



    while(1)
    {
      getmousepos(&button,&xcor,&ycor);
    if(button)
     {
     if(xcor>395&&ycor>255&&xcor<435&&ycor<285)
     {
     setcolor(GREEN);
	outtextxy(400,255,"NO");
      while(button)
	 {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
     restrictmouseptr(0,0,639,479);

     cleardevice();
     break;

     }


     else if(xcor>195&&ycor>255&&xcor<245&&ycor<285)
      {
	setcolor(GREEN);
	outtextxy(200,255,"YES");
      while(button)
	 {getmousepos(&button,&xcor,&ycor);}

 fstream file;
 favour f1;

 if(size==4)
{
strcpy(fname,Dir);
strcat(fname,"FAV4X4" ) ;
strcat(fname,".fav");
}
else if(size==6)
{
strcpy(fname,Dir);
strcat(fname,"FAV6X6" ) ;
strcat(fname,".fav");
}
else if(size==9)
{
strcpy(fname,Dir);
strcat(fname,"FAV9X9" ) ;
strcat(fname,".fav");
}
 file.open(fname,ios::app|ios::binary);
 for(int i=0;i<size;i++)
 for(int j=0;j<size;j++)
 {
 f1.a[i][j]=a[i][j];
 f1.duplicate[i][j]=duplicate[i][j];
 }

 file.write((char*)&f1,sizeof(f1));


 break;
 }
 }
 }
 setcolor(WHITE);
 break;
}
  }



       cleardevice();
       displayboard(a,size,duplicate);

     for(int i1=0;i1<size;i1++)
     for(int j1=0;j1<size;j1++)
     {
     if(duplicate[i1][j1]==0)
     {


       if(a[i1][j1]==0)
	 setfillstyle(1,DARKGRAY);
       else if(a[i1][j1]!=solved[i1][j1])
		setfillstyle(1,RED);
       else if(a[i1][j1]==solved[i1][j1])
	    setfillstyle(1,GREEN);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
	if(a[i1][j1]!=0)
  {
  itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
      }

      }
      }

     delay(500);
  settextstyle(2,0,7);
	cleardevice();
       displayboard(a,size,duplicate);
       endpause=clock();
       pausetime+=(endpause-startpause)/CLK_TCK;
	pausetime-=5;
	 startss=clock();

 }


if(size==9&&xcor>=200&&ycor>=50&&xcor<=425&&ycor<=275)
{

if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);


showmouseptr();
}
else if(duplicate[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
setfillstyle(BLACK,1);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(WHITE,1);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
showmouseptr();
}
position(&i1,&j1,size);

  if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
 setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
showmouseptr();
}
else if(duplicate[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
showmouseptr();
}



  }

else if(size==6&&xcor>=200&&ycor>=50&&xcor<=350&&ycor<=200)
{

if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);


showmouseptr();
}
else if(duplicate[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
setfillstyle(BLACK,1);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(WHITE,1);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
showmouseptr();
}
position(&i1,&j1,size);

  if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
 setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
showmouseptr();
}
else if(duplicate[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
showmouseptr();
}

  }


else if(size==4&&xcor>=200&&ycor>=50&&xcor<=300&&ycor<=150)
{
if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);


showmouseptr();
}
else if(duplicate[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
setfillstyle(BLACK,1);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(WHITE,1);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
showmouseptr();
}
position(&i1,&j1,size);

  if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
 setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
showmouseptr();
}
else if(duplicate[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
showmouseptr();
}
  }
  else if(!(xcor>500&&ycor>50&&xcor<600&&ycor<125))
  {
  if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);


showmouseptr();
}
else if(duplicate[i1][j1]==0&&i1!=-1&&j1!=-1)
{
hidemouseptr();
setfillstyle(BLACK,1);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(WHITE,1);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
showmouseptr();
}
  i1=-1;
  j1=-1;
  }


if(duplicate[i1][j1]==0)
 {



 flagsol=0;

if(xcor>575&&ycor>50&&xcor<600&&ycor<125&&i1!=-1&&j1!=-1)
{
setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);

a[i1][j1]=0;
}


for(int i=1;i<=3;i++)
{
for(int j=1;j<=3;j++)
{

 if(xcor>475+25*j&&ycor>25+25*i&&xcor<500+25*j&&ycor<50+25*i)
{
if(i1!=-1&&j1!=-1)
{
if((size==4&&temp[i-1][j-1]<=4)||(size==6&&temp[i-1][j-1]<=6)||size==9)
{
setfillstyle(BLACK,1);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(WHITE,1);


setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);

itoa(temp[i-1][j-1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);



a[i1][j1]=temp[i-1][j-1];
flagsol=1;
break;
}
}
}

}
if(flagsol==1)
break;
}




}
}

if(flagtime==1)
{
   end = clock()-(chstart-chstop) ;

   chstart=0;
   chstop=0;


   Tick = ((end-start)/ CLK_TCK )-pausetime+timestart ;


}


 setcolor(WHITE) ;
 settextstyle(1,0,4);
 outtextxy(40,50,"TIMER");

 settextstyle(2,0,7);

 outtextxy(85,98,":");
 outtextxy(86,98,":");

if(Tick%60<10)
{
itoa(Tick%60, Strtime, 10 );
outtextxy( 115,100 ,Strtime ) ;
outtextxy( 116,100 ,Strtime ) ;
itoa(0,Strtime,10);
outtextxy(100,100,Strtime);
outtextxy(101,100,Strtime);
}
else
{

itoa(Tick%60, Strtime, 10 );
outtextxy( 100,100 ,Strtime ) ;
outtextxy( 101,100 ,Strtime ) ;
}
if(Tick/60<10)
{
itoa(Tick/60, Strtime, 10 );
outtextxy( 65,100 ,Strtime ) ;
outtextxy( 66,100 ,Strtime ) ;
itoa(0,Strtime,10);
outtextxy(50,100,Strtime);
outtextxy(51,100,Strtime);
}
else
{
itoa(Tick/60, Strtime, 10 );

outtextxy( 50,100 ,Strtime ) ;
outtextxy( 51,100 ,Strtime ) ;
}


delay(30);

setcolor(BLACK);
if(Tick%60<10)
{
itoa(Tick%60, Strtime, 10 );
outtextxy( 115,100 ,Strtime ) ;
outtextxy( 116,100 ,Strtime ) ;
itoa(0,Strtime,10);
outtextxy(100,100,Strtime);
outtextxy(101,100,Strtime);
}
else
{

itoa(Tick%60, Strtime, 10 );
outtextxy( 100,100 ,Strtime ) ;
outtextxy( 101,100 ,Strtime ) ;
}
if(Tick/60<10)
{
itoa(Tick/60, Strtime, 10 );
outtextxy( 65,100 ,Strtime ) ;
outtextxy( 66,100 ,Strtime ) ;
itoa(0,Strtime,10);
outtextxy(50,100,Strtime);
outtextxy(51,100,Strtime);
}
else
{
itoa(Tick/60, Strtime, 10 );
outtextxy( 50,100 ,Strtime ) ;
outtextxy( 51,100 ,Strtime ) ;
}



setcolor(WHITE) ;

if(kbhit())
{

if(getch()==27)
{
int startpause,endpause;
if(flagtime==1)
startpause=clock();
paus(a,solved,duplicate,size);
cleardevice();
setcolor(WHITE);
displayboard(a,size,duplicate);
if(flagtime==1)
{
endpause=clock();

pausetime+=(endpause-startpause)/CLK_TCK;

}
}


}
endss=clock();
Tickss=(endss-startss)/CLK_TCK;

if(Tickss==screentime)
{
int startpause,endpause;
if(flagtime==1)
startpause=clock();

cleardevice();
screensaver();
hidemouseptr();
cleardevice();
showmouseptr();
displayboard(a,size,duplicate,0);
startss=clock();
if(flagtime==1)
{
endpause=clock();

pausetime+=(endpause-startpause)/CLK_TCK;

}
}


xtemp=xcor;
ytemp=ycor;
}
}


void sud4X4()
{
int a[9][9];

int temp,rando,pos1,pos2,chk=1;

do
{
chk=1;
do
{;}
while(!gen(a,4));
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
if(a[i][j]>4||a[i][j]<1)
{
chk=0;
break;
}
}
if(!chk)
break;
}
}
while(!chk);



int duplicate[9][9];
int solved[9][9];

for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
solved[i][j]=a[i][j];



settextstyle(2,0,7);


for(i=1;i<=5;i++)
a[random(4)][random(4)]=0;




int spacex;
int spacey;



displayboard(a,4,a);

for(i=0;i<4;i++)
for(j=0;j<4;j++)
duplicate[i][j]=a[i][j];




solve(a,solved,duplicate,4,0);
 }


void sud6X6()
{
int a[9][9];

int temp,rando,pos1,pos2;

do
{;}
while(!gen(a,6));

int duplicate[9][9];
int solved[9][9];

for(int i=0;i<6;i++)
for(int j=0;j<6;j++)
solved[i][j]=a[i][j];



settextstyle(2,0,7);


for(i=1;i<=15;i++)
a[random(6)][random(6)]=0;




int spacex;
int spacey;



displayboard(a,6,a);

for(i=0;i<6;i++)
for(j=0;j<6;j++)
duplicate[i][j]=a[i][j];

solve(a,solved,duplicate,6,0);
 }




void sud9X9()
{
int a[9][9];

int temp,rando,pos1,pos2;

do
{;}
while(!gen(a,9));

int duplicate[9][9];
int solved[9][9];

for(int i=0;i<9;i++)
for(int j=0;j<9;j++)
solved[i][j]=a[i][j];



settextstyle(2,0,7);


for(i=1;i<=60;i++)
a[random(9)][random(9)]=0;




int spacex;
int spacey;



displayboard(a,9,a);

for(i=0;i<9;i++)
for(j=0;j<9;j++)
duplicate[i][j]=a[i][j];




solve(a,solved,duplicate,9,0);
 }


 void open(char* filname)
{
SudoNum sud;
int flag=0;
fstream SUDOF ;

strcpy(fname,Dir);
strcat(fname, filname ) ;
strcat(fname,".sud");

SUDOF.open(fname, ios::in | ios::binary );

if(!SUDOF)
{
 setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,4);
outtextxy(200,210,"File not found");


settextstyle(2,0,5);
outtextxy(300,320,"(Press any key to continue...)");
getch();
}
else
{
flag=1;
SUDOF.read((char*)&sud,  sizeof(sud));
}
SUDOF.close() ;

if(flag)
{

   settextstyle(2,0,7);
    cleardevice();
    loading();
    cleardevice();
solve(sud.Num,sud.solved,sud.duplicate,sud.size,sud.timestart);
}
}
