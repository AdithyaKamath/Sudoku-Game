void cheat(char c[50],int change[9][9],int real[9][9],int dup[9][9],int size)
{
int x,y,chkzero,flagcheat=1;

if(!strcmp(c,"show"))
{
while(1)
{
chkzero=checkzero(change,size);
x=random(size);
y=random(size);
if(dup[x][y]==0||change[x][y]!=real[x][y])
{
change[x][y]=real[x][y];
break;
}
else if(chkzero==0)
break;
}
}
else if(!strcmp(c,"correct"))
{
if(sameornot(change,dup,x,y,size))
change[x][y]=real[x][y];

}
else if(!strcmp(c,"solution"))
{
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"row"))
{
int row;
row=random(size);

for(int i=0;i<size;i++)
change[row][i]=real[row][i];
}
else if(!strcmp(c,"column"))
{
int col;
col=random(size);

for(int i=0;i<size;i++)
change[i][col]=real[i][col];
}
else if(!strcmp(c,"stoptimer"))
{
flagtime=0;
chstop=clock();
flagcheat=0;
}
else if(!strcmp(c,"starttimer"))
{
flagtime=1;
chstart=clock();
flagcheat=0;
}
else if(!strcmp(c,"selfsolve"))
{
cleardevice();
displayboard(change,size,dup);
selfsolve(change,real,size);
}

else if(size==4)
{
if(!strcmp(c,"box1"))
{
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box2"))
{
for(int i=0;i<2;i++)
for(int j=2;j<4;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box3"))
{
for(int i=2;i<4;i++)
for(int j=0;j<2;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box4"))
{
for(int i=2;i<4;i++)
for(int j=2;j<4;j++)
change[i][j]=real[i][j];
}
else
{
outtextxy(350,390,"Invalid Code");

     settextstyle(2,0,5);
     outtextxy(400,450,"(Press any key to continue...)");
getch();
flagcheat=0;
}

}
else if(size==6)
{
if(!strcmp(c,"box1"))
{
for(int i=0;i<3;i++)
for(int j=0;j<2;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box2"))
{
for(int i=0;i<3;i++)
for(int j=2;j<4;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box3"))
{
for(int i=0;i<3;i++)
for(int j=4;j<6;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box4"))
{
for(int i=3;i<6;i++)
for(int j=0;j<2;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box5"))
{
for(int i=3;i<6;i++)
for(int j=2;j<4;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box6"))
{
for(int i=3;i<6;i++)
for(int j=4;j<6;j++)
change[i][j]=real[i][j];
}
else
{
outtextxy(350,390,"Invalid Code");

settextstyle(2,0,5);
     outtextxy(400,450,"(Press any key to continue...)");
getch();
flagcheat=0;
}
}
else if(size==9)
{
if(!strcmp(c,"box1"))
{
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box2"))
{
for(int i=0;i<3;i++)
for(int j=3;j<6;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box3"))
{
for(int i=0;i<3;i++)
for(int j=6;j<9;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box4"))
{
for(int i=3;i<6;i++)
for(int j=0;j<3;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box5"))
{
for(int i=3;i<6;i++)
for(int j=3;j<6;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box6"))
{
for(int i=3;i<6;i++)
for(int j=6;j<9;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box7"))
{
for(int i=6;i<9;i++)
for(int j=0;j<3;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box8"))
{
for(int i=6;i<9;i++)
for(int j=3;j<6;j++)
change[i][j]=real[i][j];
}
else if(!strcmp(c,"box9"))
{
for(int i=6;i<9;i++)
for(int j=6;j<9;j++)
change[i][j]=real[i][j];
}
else
{
outtextxy(350,390,"Invalid Code");

settextstyle(2,0,5);
     outtextxy(400,450,"(Press any key to continue...)");
getch();
flagcheat=0;
}
}
if(flagcheat)
pausetime-=60;
}






void paus(int a[9][9],int solved[9][9],int duplicate[9][9],int size)
{

startss=clock();
 cleardevice();

	 //int xtemp=-1,ytemp=-1;

settextstyle(1,0,4);
    setfillstyle(1,BLUE);
     int t[50]={200};
 rectangle(1,1,639,479);
 rectangle(11,11,629,469);
 floodfill(2,2,getmaxcolor());


rectangle(225,105,380,200);
rectangle(235,115,370,190);
floodfill(226,106,getmaxcolor());
setfillstyle(1,WHITE);
outtextxy(250,125,"Paused");
settextstyle(1,0,3);
outtextxy(160,230,"Press \'Esc\' key to Resume");

if(cheatmode==1)
{
setfillstyle(1,BLUE);
rectangle(11,335,629,345);
 floodfill(12,336,getmaxcolor());
outtextxy(65,390,"Cheat");
rectangle(180,345,190,469);
floodfill(181,346,getmaxcolor());

}


      int status[5]={0,0,0,0,0};
 int but,x,y;
 char code[50];
 char ch;
while(1)
{
if(kbhit())
{
ch=getch();

if(ch==27)
break;
if(cheatmode==0)
{
 if(ch=='c')
status[0]=1;
else if(ch=='-')
{
if(status[0]==1)
status[1]=1;
else
status[0]=0;
}
else if(ch=='d')
{
if(status[1]==1)
status[2]=1;
 else
 {
 status[0]=0;
 status[1]=0;
 }
}


 else if(ch=='o')
{
if(status[2]==1)
status[3]=1;
 else
 {
 status[0]=0;
 status[1]=0;
 status[2]=0;
 }
}
 else if(ch=='k')
{
if(status[3]==1)
status[4]=1;
 else
 {
 status[0]=0;
 status[1]=0;
 status[2]=0;
 status[3]=0;
 }
}


else if(ch=='u')
{
if(status[4]==1)
{
 cheatmode=1;
  setfillstyle(1,BLUE);
  rectangle(11,335,629,345);
 floodfill(12,336,getmaxcolor());
outtextxy(65,390,"Cheat");
rectangle(180,345,190,469);
floodfill(181,346,getmaxcolor());

 }
 else
 {
 status[0]=0;
 status[1]=0;
 status[2]=0;
 status[3]=0;
 status[4]=0;
 }
}


else
{
status[0]=0;
status[1]=0;
status[2]=0;
status[3]=0;
status[4]=0;
 }
}
 }

 getmousepos(&but,&x,&y);
 // if(button||xtemp!=xcor||ytemp!=ycor)
  //startss=clock();

 //if(kbhit())
 // {
  //getch();
  //startss=clock();
  //}


 if(but==1)
 {

 if(x>60&&y>390&&x<130&&y<420&&cheatmode==1)
 {
 setcolor(GREEN);
outtextxy(65,390,"Cheat");
 while(but)
	      {getmousepos(&but,&x,&y);}


   setcolor(WHITE);
outtextxy(65,390,"Cheat");
moveto(200,350);
outtext("Enter the cheat code:");
settextstyle(2,0,5);
moveto(getx(),360);
outtext(" (max 20 characters)");
settextstyle(1,0,3);

int i=0;
code[i]=getch();
char str[2];
str[0]=code[i];
str[1]='\0';
moveto(200,400);
while(code[i]!=13)
{


if(code[i]==8&&i!=0)
{
i--;
moveto(t[i],400);
str[0]=code[i];
setcolor(BLACK);

outtext(str);

 setcolor(WHITE);
 moveto(t[i],400);

}
else if((isalnum(code[i])||code[i]==' ')&&i<20)
{


outtext(str);

if(i<20)
i++;



       }

code[i]=getch();
str[0]=code[i];


 t[i]=getx();

}

if(code[i]==13)
{
setfillstyle(1,BLACK);
bar(191,346,628,468);
setfillstyle(1,WHITE);

code[i]='\0';



cheat(code,a,solved,duplicate,size);
break;



}




}
}
//endss=clock();
//Tickss=(endss-startss)/CLK_TCK;

/*if(Tickss==5)
{
cleardevice();
screensaver();
cleardevice();
 setfillstyle(1,BLUE);
	settextstyle(1,0,4);
 rectangle(1,1,639,479);
 rectangle(11,11,629,469);
 floodfill(2,2,getmaxcolor());


rectangle(225,105,380,200);
rectangle(235,115,370,190);
floodfill(226,106,getmaxcolor());
setfillstyle(1,WHITE);
outtextxy(250,125,"Paused");
settextstyle(1,0,3);
outtextxy(160,230,"Press \'Esc\' key to Resume");

if(cheatmode==1)
{
  rectangle(11,335,629,345);
 floodfill(12,336,getmaxcolor());
outtextxy(65,390,"Cheat");
rectangle(180,345,190,469);
floodfill(181,346,getmaxcolor());
startss=clock();
}
}

xtemp=xcor;
ytemp=ycor;*/
}
}

