struct multip
{
int stat1,stat2;
};



void solvemulti(int a[9][9],int solved[9][9],int duplicate[9][9],int size)
{
     fstream fil1,fil2,fil3;
		     multip m1;
			m1.stat1=0;
			m1.stat2=0;


int temp[3][3]={1,2,3,4,5,6,7,8,9};
int flagsol=0;
pausetime=0;
displayboard(a,size,duplicate);
int chkrow,chkcol,chkbox1,chkbox2,chkbox3,chkbox4,chkbox5,chkbox6,chkbox7,chkbox8,chkbox9;
char str[30];
int button,xcor,ycor;
char Strtime[10] ;
int i1=-1,j1=-1;

start = clock();

char code[30];






while(1)
{

//fil1.open(f1,ios::out|ios::binary);
//fil1.write((char*)&m1,sizeof(m1));
//fil1.close();



fil3.open("I:\\HEAD.PLA",ios::in|ios::binary);
fil3.read((char*)&m1,sizeof(m1));
fil3.close();

if(m1.stat1==1)
{

setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);

	  settextstyle(1,0,4);
 outtextxy(195,175,"YOU WIN");

     settextstyle(2,0,5);
     outtextxy(300,320,"(Press any key to continue...)");
 getch();
 break;
}
else if(m1.stat2==1)
{
setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);

	  settextstyle(1,0,4);
 outtextxy(195,175,"YOU LOSE");

     settextstyle(2,0,5);
     outtextxy(300,320,"(Press any key to continue...)");
 getch();
break;
}



getmousepos(&button,&xcor,&ycor);


if(button==1)
{

if(xcor>503&&ycor>380&&xcor<585&&ycor<420)
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

  //rectangle(195,255,245,285);
outtextxy(200,255,"YES");
//rectangle(395,255,435,285);
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

     break;

     }


     else if(xcor>195&&ycor>255&&xcor<245&&ycor<285)
      {
	setcolor(GREEN);
	outtextxy(200,255,"YES");
      while(button)
	 {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);



       m1.stat1=1;
       fil3.open("I:\\HEAD.PLA",ios::out|ios::binary);
       fil3.write((char*)&m1,sizeof(m1));
	   fil3.close();

       setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);

	  settextstyle(1,0,4);
 outtextxy(195,175,"YOU LOSE");

     settextstyle(2,0,5);
     outtextxy(300,320,"(Press any key to continue...)");
 getch();



      //restrictmouseptr(0,0,639,479);



     break;


}

if(m1.stat1==1)
break;
     }
     }
     if(m1.stat1==1)
break;
     }
 /*






		       */





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


/*
chkrow=checkrow(a,size);
chkcol=checkcol(a,size);
if(size==4)
{
chkbox1=checkbox(a,0,0,size);
chkbox2=checkbox(a,0,2,size);
chkbox3=checkbox(a,2,0,size);
chkbox4=checkbox(a,2,2,size);
chkbox5=0;
chkbox6=0;
chkbox7=0;
chkbox8=0;
chkbox9=0;
}
else if(size==6)
{
chkbox1=checkbox(a,0,0,size);
chkbox2=checkbox(a,0,2,size);
chkbox3=checkbox(a,0,4,size);
chkbox4=checkbox(a,3,0,size);
chkbox5=checkbox(a,3,2,size);
chkbox6=checkbox(a,3,4,size)	;
chkbox7=0;
chkbox8=0;
chkbox9=0;
}
else if(size==9)
{
chkbox1=checkbox(a,0,0,size);
chkbox2=checkbox(a,0,3,size);
chkbox3=checkbox(a,0,6,size);
chkbox4=checkbox(a,3,0,size);
chkbox5=checkbox(a,3,3,size);
chkbox6=checkbox(a,3,6,size);
chkbox7=checkbox(a,6,0,size);
chkbox8=checkbox(a,6,3,size);
chkbox9=checkbox(a,6,6,size);
}
chkzero=checkzero(a,size);
if(chkzero==0&&chkrow==0&&chkcol==0&&chkbox1==0&&chkbox2==0&&chkbox3==0&&chkbox4==0&&chkbox5==0&&chkbox6==0&&chkbox7==0&&chkbox8==0&&chkbox9==0)
{

outtextxy(200,300,"You have done it!!!");
getch();
exit(0);
}
else
{
outtextxy(200,300,"Incorrect. Please Check.");
getch();
setfillstyle(1,BLACK);
bar(200,300,550,350);
setfillstyle(1,WHITE);
} */




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

     setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,3);
outtextxy(195,145,"Do you want to store");
outtextxy(200,175,"this board in the list");
outtextxy(240,205,"of Favourites?");

   restrictmouseptr(120,140,520,340);

  //rectangle(195,255,245,285);
outtextxy(200,255,"YES");
//rectangle(395,255,435,285);
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

 m1.stat2=1;
       fil3.open("I:\\HEAD.PLA",ios::out|ios::binary);
       fil3.write((char*)&m1,sizeof(m1));
	   fil3.close();

 setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);

	  settextstyle(1,0,4);
 outtextxy(195,175,"YOU WIN");

     settextstyle(2,0,5);
     outtextxy(300,320,"(Press any key to continue...)");
 getch();


 break;
}
  }


  settextstyle(2,0,7);
	cleardevice();
       displayboard(a,size,duplicate);
       endpause=clock();
       pausetime+=(endpause-startpause)/CLK_TCK;


 }


if(size==9&&xcor>=200&&ycor>=50&&xcor<=425&&ycor<=275)
{

position(&i1,&j1,size);



  }

else if(size==6&&xcor>=200&&ycor>=50&&xcor<=350&&ycor<=200)
{

position(&i1,&j1,size);



  }


else if(size==4&&xcor>=200&&ycor>=50&&xcor<=300&&ycor<=150)
{

position(&i1,&j1,size);



  }


if(duplicate[i1][j1]==0)
 {



 flagsol=0;

if(xcor>575&&ycor>50&&xcor<600&&ycor<125)
{
setfillstyle(BLACK,1);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
a[i1][j1]=0;
}


for(int i=1;i<=3;i++)
{
for(int j=1;j<=3;j++)
{

//int but,x,y;
//getmousepos(&but,&x,&y);
 if(xcor>475+25*j&&ycor>25+25*i&&xcor<500+25*j&&ycor<50+25*i)
{
if(i1!=-1&&j1!=-1)
{
if((size==4&&temp[i-1][j-1]<=4)||(size==6&&temp[i-1][j-1]<=6)||size==9)
{
setfillstyle(BLACK,1);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(WHITE,1);
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
  // pausetime+=(chstart-chstop)/CLK_TCK;

   chstart=0;
   chstop=0;


   Tick = ((end-start)/ CLK_TCK )-pausetime ;


}

/*if( Tick >= 10 )
{
	setcolor(WHITE) ;
	outtextxy(200,250,"Time Overflow!!!");
	break;

} */





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


}
}





void multiplayer()
{

//char fil1[10]="I:\\f1.GAM",fil2[10]="I:\\f2.GAM";
int choice;
cout<<"Menu"
    <<"\n1.Create"
    <<"\n2.Join";
cin>>choice;
if(choice==1)
{
multip m1,m2;
fstream file;
multi mplay;
file.open("I:\\MULTI.GAM",ios::out|ios::binary);
mplay.status=1;
mplay.status2=0;
do
{;}
while(!gen(mplay.a,9));

//int duplicate[9][9];
//int solved[9][9];

for(int i=0;i<9;i++)
for(int j=0;j<9;j++)
mplay.solved[i][j]=mplay.a[i][j];



settextstyle(2,0,7);


for(i=1;i<=60;i++)
mplay.a[random(9)][random(9)]=0;


for(i=0;i<9;i++)
for(j=0;j<9;j++)
mplay.duplicate[i][j]=mplay.a[i][j];









//clock_t start, end ;
//file.seekp(0,ios::beg);
  file.write((char*)&mplay,sizeof(mplay));
    file.close();

      fstream file2;
cout<<"WAITING";

do
{
file2.open("I:\\MULTI.GAM",ios::in|ios::binary);
//file2.seekg(0,ios::beg);
file2.read((char*)&mplay,sizeof(mplay));
file2.close();
}while(mplay.status2==0);

     cleardevice();

     multip mx;
     mx.stat1=0;
     mx.stat2=0;

     fstream file1;
     file1.open("I:\\HEAD.PLA",ios::out|ios::binary);
     file1.write((char*)&mx,sizeof(mx));
     file1.close();
displayboard(mplay.a,9,mplay.duplicate);
solvemulti(mplay.a,mplay.solved,mplay.duplicate,9);


}
else if(choice==2)
{
multip m1,m2;
multi mplay;
fstream files;
files.open("I:\\MULTI.GAM",ios::in|ios::out|ios::binary);
files.read((char*)&mplay,sizeof(mplay));

if(mplay.status==1)
 {
  mplay.status2=1;
  files.seekp(0,ios::beg);
  files.write((char*)&mplay,sizeof(mplay));
  files.close();
 displayboard(mplay.a,9,mplay.duplicate);
 solvemulti(mplay.a,mplay.solved,mplay.duplicate,9);


 }


	   }
		}