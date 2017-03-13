int solvesud(int a[9][9],int size)
{
int r,c;
if(!checkzerosolve(a,r,c,size))
return 1;


int temp,x,y;
int ar[9]={1,2,3,4,5,6,7,8,9};
 for(int i=0;i<100;i++)
{
x=random(size);
y=random(size);
temp=ar[x];
ar[x]=ar[y];
ar[y]=temp;
}

for(int i1=0;i1<size;i1++)
{
int nums=ar[i1];
  char number[10];
if(!checkrowsolve(a,r,nums,size)&&!checkcolsolve(a,c,nums,size)&&!checkboxsolve(a,r,c,nums,size))
{
a[r][c]=nums;

if(solvesud(a,size))
return 1;


a[r][c]=0;
}
}

return 0;
}



int selfsolve(int a[9][9],int dup[9][9],int size)
{
settextstyle(2,0,7);

char str[20];

  setfillstyle(1,BLACK);

     int m1,n1;
 int m,n,sumx,flag=0;
 float pos1,pos2,pos3,pos4,slope;

   checkzerosolve(a,m,n,size);
 float xx=212.5+(25.0*n);
 float yy=62.5+(25.0*m);

 delay(500);


 while(sameornot(a,dup,m,n,size))
 {


 float xx=212.5+(25.0*n);
 float yy=62.5+(25.0*m);
 flag=0;

  sumx=1;
  for( m1=0;m1<3;m1++)
  {
  for( n1=0;n1<3;n1++)
  {
  if(sumx==dup[m][n])
  {
  flag=1;
  break;
  }
  sumx++;
  }
  if(flag==1)
  break;
  }
 pos1=212.5+(25.0*n);
 pos2=62.5+(25.0*m);

 pos3=512.5+(25.0*n1);
 pos4=62.5+(25.0*m1);

  if(pos2>pos4)
  slope=(pos2-pos4)/(pos3-pos1)*1.0;
  else
 slope=(pos4-pos2)/(pos3-pos1)*1.0;






 while(xx<pos3)
 {
  xx+=1;
  if(pos2<=pos4)
   yy+=slope;
  else
   yy-=slope;


  setmouseptr(xx,yy);
 delay(3);
 }
      a[m][n]=dup[m][n];

     itoa(a[m][n],str,10);
     bar(205+25*n,55+25*m,220+25*n,70+25*m);
outtextxy(208+25*n,50+25*m,str);
outtextxy(209+25*n,50+25*m,str);

if(sameornot(a,dup,m,n,size))
{pos1=212.5+(25.0*n);
 pos2=62.5+(25.0*m);
 }
 else
 {checkzerosolve(a,m,n,size);
pos1=212.5+(25.0*n);
 pos2=62.5+(25.0*m);
 }
 if(pos2>pos4)
 slope=(pos2-pos4)/(pos3-pos1)*1.0;
 else
  slope=(pos4-pos2)/(pos3-pos1)*1.0;
 while(xx>pos1)
 {
  xx-=1;
  if(pos2<=pos4)
  yy-=slope;
  else
   yy+=slope;

  setmouseptr(xx,yy);
 delay(3);
 }
 }

  checkzerosolve(a,m,n,size);
 xx=212.5+(25.0*n);
 yy=62.5+(25.0*m);




while(checkzerosolve(a,m,n,size)!=0)
  {

     flag=0;

  sumx=1;
  for( m1=0;m1<3;m1++)
  {
  for( n1=0;n1<3;n1++)
  {
  if(sumx==dup[m][n])
  {
  flag=1;
  break;
  }
  sumx++;
  }
  if(flag==1)
  break;
  }
 checkzerosolve(a,m,n,size);
 pos1=212.5+(25.0*n);
 pos2=62.5+(25.0*m);

 pos3=512.5+(25.0*n1);
 pos4=62.5+(25.0*m1);

  if(pos2>pos4)
  slope=(pos2-pos4)/(pos3-pos1)*1.0;
  else
 slope=(pos4-pos2)/(pos3-pos1)*1.0;



 hidemouseptr();


 setfillstyle(1,BLUE);
 bar(205+25*n,55+25*m,220+25*n,70+25*m);

 setfillstyle(1,BLACK);
bar(208+25*n,58+25*m,217+25*n,67+25*m);


      showmouseptr();


 while(xx<pos3)

 {
  xx+=1;
  if(pos2<=pos4)
   yy+=slope;
  else
   yy-=slope;


  setmouseptr(xx,yy);
 delay(3);
 }

 hidemouseptr();


 setfillstyle(1,BLACK);
 bar(205+25*n,55+25*m,220+25*n,70+25*m);




      showmouseptr();


      a[m][n]=dup[m][n];
     itoa(a[m][n],str,10);
outtextxy(208+25*n,50+25*m,str);
outtextxy(209+25*n,50+25*m,str);


if(checkzerosolve(a,m,n,size))
{
pos1=212.5+(25.0*n);
pos2=62.5+(25.0*m);
}
else
break;

 if(pos2>pos4)
 slope=(pos2-pos4)/(pos3-pos1)*1.0;
 else
  slope=(pos4-pos2)/(pos3-pos1)*1.0;
 while(xx>pos1)
 {
  xx-=1;
  if(pos2<=pos4)
  yy-=slope;
  else
   yy+=slope;

  setmouseptr(xx,yy);
 delay(3);
 }

 if( kbhit())
 {

 if(getch()==27)
 {

 return 0;
 }
 }
 }
  return 1;
 }




void solver(int size,int mode)
{

int temp[3][3]={1,2,3,4,5,6,7,8,9};
int flagsol=0,flagsolver=1,flagsave=1;
int i1=-1,j1=-1;
char str[30];
int a[9][9],dup[9][9];
int button,xcor,ycor;
settextstyle(2,0,7);




for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
{
a[i][j]=0;
dup[i][j]=0;
}
displayboard(a,size,a,1);
setcolor(DARKGRAY);
settextstyle(1,0,4);
outtextxy(505,300,"SAVE");
settextstyle(2,0,7);
setcolor(WHITE);

while(1)
{
getmousepos(&button,&xcor,&ycor);


if(button==1)
{
if(xcor>503&&ycor>380&&xcor<585&&ycor<420)
{
settextstyle(1,0,4);
      setcolor(GREEN);
      outtextxy(505,380,"BACK");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
       outtextxy(505,380,"BACK");
settextstyle(2,0,7);


break;
}
else if(xcor>503&&ycor>300&&xcor<580&&ycor<340&&flagsolver==0&&flagsave==1)
{

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
     setcolor(WHITE);
      displayboard(a,9,dup,1);
     break;

     }


     else if(xcor>195&&ycor>255&&xcor<245&&ycor<285)
      {
	setcolor(GREEN);
	outtextxy(200,255,"YES");
      while(button)
	 {getmousepos(&button,&xcor,&ycor);}

 fstream file;

 favour f2;

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
 f2.a[i][j]=a[i][j];
 f2.duplicate[i][j]=dup[i][j];
 }

 file.write((char*)&f2,sizeof(f2));
      file.close();
  restrictmouseptr(0,0,639,479);
     cleardevice();
	 setcolor(WHITE);
      displayboard(a,size,dup,1);
 break;
 }
 }
 }
}


else if(xcor>40&&ycor>65&&xcor<135&&ycor<105)
{
settextstyle(1,0,4);
      setcolor(GREEN);
      outtextxy(40,65,"RESET");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
       outtextxy(40,65,"RESET");
settextstyle(2,0,7);
flagsolver=1;
flagsave=1;
setfillstyle(1,BLACK);
for( i=0;i<size;i++)
for( j=0;j<size;j++)
{
bar(205+25*j,55+25*i,220+25*j,70+25*i);
a[i][j]=0;
}
setcolor(DARKGRAY);
settextstyle(1,0,4);
outtextxy(505,300,"SAVE");
settextstyle(2,0,7);
 setcolor(WHITE);

}

else if(xcor>503&&ycor>220&&xcor<605&&ycor<260)
{


settextstyle(1,0,4);


      setcolor(GREEN);
      outtextxy(505,220,"SOLVE");
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);
       outtextxy(505,220,"SOLVE");

 if(mode==0)
 setcolor(WHITE);
 else
 setcolor(DARKGRAY);

outtextxy(505,300,"SAVE");
settextstyle(2,0,7);
setcolor(WHITE);

if(flagsolver==1)
{
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
dup[i][j]=a[i][j];
}

flagsolver=0;

for(i=0;i<size;i++)
for(j=0;j<size;j++)
a[i][j]=dup[i][j];





 int flagout=0,chkrow,chkcol,chkbox1,chkbox2,chkbox3,chkbox4,chkbox5,chkbox6,chkbox7,chkbox8,chkbox9,chkzero;

int possib[9],chk=0;

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
chkbox6=checkbox(a,3,4,size);
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
if(!(chkrow==0&&chkcol==0&&chkbox1==0&&chkbox2==0&&chkbox3==0&&chkbox4==0&&chkbox5==0&&chkbox6==0&&chkbox7==0&&chkbox8==0&&chkbox9==0))
{
  setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,4);
 outtextxy(150,190,"CANNOT BE SOLVED");

     settextstyle(2,0,5);
     outtextxy(300,320,"(Press any key to continue...)");


getch();
break;
}




for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
chk=0;
 if(a[i][j]==0)
 {
for(int k=0;k<size;k++)
possib[k]=k+1;

checkboxfull(i,j,possib,a,size);


for(int x=0;x<size;x++)
for(int y=0;y<size;y++)
{
if(possib[y]==a[x][j])
{
possib[y]=0;//doesnt account for duplication
}
}
//check row
for( x=0;x<size;x++)
for(y=0;y<size;y++)
{
if(possib[y]==a[i][x])
{
possib[y]=0;
}
}

for(k=0;k<size;k++)
if(possib[k]!=0)
{
chk=1;
break;
}

if(chk==0)
{
setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,4);
 outtextxy(150,190,"CANNOT BE SOLVED");

     settextstyle(2,0,5);
     outtextxy(300,320,"(Press any key to continue...)");
			 delay(200);

getch();
flagout=1;
break;
}


}
}
if(flagout==1)
break;
}
if(flagout==1)
break;

solvesud(a,size);

setfillstyle(1,BLACK);

for( i=0;i<size;i++)
for( j=0;j<size;j++)
{
if(dup[i][j]==0)
bar(205+25*j,55+25*i,220+25*j,70+25*i);
}


if(mode==0)
{
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
if(a[i][j]!=0&&dup[i][j]==0)
{
setcolor(WHITE);
itoa(a[i][j],str,10);

outtextxy(208+(j*25),50+(i*25),str);
outtextxy(209+(j*25),50+(i*25),str);
}
}
}
}
else
{
int temp[9][9];
 for(int i=0;i<size;i++)
 for(int j=0;j<size;j++)
 temp[i][j]=dup[i][j];


if(selfsolve(temp,a,size))
{
settextstyle(1,0,4);
setcolor(WHITE);
outtextxy(505,300,"SAVE");
settextstyle(2,0,7);
flagsave=1;
}
else
{flagsave=0;
}
}
}

setcolor(WHITE);




if(size==9&&xcor>=200&&ycor>=50&&xcor<=425&&ycor<=275)
{

if(flagsolver==1)
{
if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);


showmouseptr();
}
else if(a[i1][j1]!=0&&i1!=-1&&j1!=-1)
{
setfillstyle(1,YELLOW);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(1,WHITE);
setcolor(BLACK);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
}
}
position(&i1,&j1,size);
if(flagsolver==1)
{
if(a[i1][j1]==0)
{
hidemouseptr();
 setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
showmouseptr();
  }
  else if(a[i1][j1]!=0)
  {
  setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,YELLOW);
  bar(206+25*j1,56+25*i1,219+25*j1,69+25*i1);
setfillstyle(1,WHITE);
setcolor(BLACK);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
  }
 }


  }

else if(size==6&&xcor>=200&&ycor>=50&&xcor<=350&&ycor<=200)
{


if(flagsolver==1)
{
if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);


showmouseptr();
}
else if(a[i1][j1]!=0&&i1!=-1&&j1!=-1)
{
setfillstyle(1,YELLOW);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(1,WHITE);
setcolor(BLACK);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
}
}
position(&i1,&j1,size);
if(flagsolver==1)
{
if(a[i1][j1]==0)
{
hidemouseptr();
 setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
showmouseptr();
  }
  else if(a[i1][j1]!=0)
  {
  setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,YELLOW);
  bar(206+25*j1,56+25*i1,219+25*j1,69+25*i1);
setfillstyle(1,WHITE);
setcolor(BLACK);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
  }
 }


  }


else if(size==4&&xcor>=200&&ycor>=50&&xcor<=300&&ycor<=150)
{

if(flagsolver==1)
{
if(a[i1][j1]==0&&i1!=-1&&j1!=-1)
{
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);


showmouseptr();
}
else if(a[i1][j1]!=0&&i1!=-1&&j1!=-1)
{
setfillstyle(1,YELLOW);
bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);
setfillstyle(1,WHITE);
setcolor(BLACK);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
}
}
position(&i1,&j1,size);
if(flagsolver==1)
{
if(a[i1][j1]==0)
{
hidemouseptr();
 setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
showmouseptr();
  }
  else if(a[i1][j1]!=0)
  {
  setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,YELLOW);
  bar(206+25*j1,56+25*i1,219+25*j1,69+25*i1);
setfillstyle(1,WHITE);
setcolor(BLACK);
itoa(a[i1][j1],number,10);
outtextxy(208+25*j1,50+25*i1,number);
outtextxy(209+25*j1,50+25*i1,number);
  }
 }
  }
  flagsol=0;


  if(flagsolver==1)
  {
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

setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,YELLOW);
  bar(206+25*j1,56+25*i1,219+25*j1,69+25*i1);

setcolor(BLACK);
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




if(xcor>575&&ycor>50&&xcor<600&&ycor<125&&flagsolver==1&&i1!=-1&&j1!=-1)
{
setfillstyle(1,BLUE);
 bar(205+25*j1,55+25*i1,220+25*j1,70+25*i1);

 setfillstyle(1,BLACK);
  bar(208+25*j1,58+25*i1,217+25*j1,67+25*i1);
a[i1][j1]=0;
}


setcolor(WHITE) ;
}
}
}


