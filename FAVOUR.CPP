void favourites(int size)
{
int flagremove=1;
favour f1;
fstream file;
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
file.open(fname,ios::in|ios::binary);
file.read((char*)&f1,sizeof(f1));



if(file.eof())
flagremove=0;

char str[10];

 setcolor(WHITE);


rectangle(1,1,639,479);
rectangle(10,10,630,470);
rectangle(465,10,475,470);
setfillstyle(1,BLUE);
floodfill(2,2,getmaxcolor());
floodfill(466,11,getmaxcolor());

settextstyle(1,0,4);

if(!flagremove)
setcolor(DARKGRAY);
outtextxy(495,70,"BROWSE");
outtextxy(485,110,"BUTTONS");
outtextxy(495,270,"REMOVE");
setcolor(WHITE);
outtextxy(495,360,"BACK");
       if(!flagremove)
setcolor(DARKGRAY);
rectangle(485,170,620,220);
line(550,170,550,220);




rectangle(515,190,540,200);
line(515,185,515,205);
line(515,185,500,195);
line(515,205,500,195);


rectangle(560,190,585,200);
line(585,185,585,205);
line(585,185,600,195);
line(585,205,600,195);

setcolor(WHITE);

if(flagremove)
{
setfillstyle(3,BLUE);
bar3d(120,120,120+size*25,120+size*25,10,1);


for(int x=120;x<=120+size*25;x+=25)
line(x,120,x,120+size*25);
for(int y=120;y<=120+size*25;y+=25)
line(120,y,120+size*25,y);

 settextstyle(2,0,7);
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
{
setcolor(WHITE);
if(f1.duplicate[i][j]!=0)
{
setfillstyle(1,YELLOW);
bar(125+25*j,125+25*i,140+25*j,140+25*i);
setcolor(BLACK);
}
itoa(f1.a[i][j],str,10);
outtextxy(128+(j*25),120+(i*25),str);
outtextxy(129+(j*25),120+(i*25),str);


}
}
else
{
settextstyle(1,0,5);
outtextxy(100,200,"No Favourites");
}


int button,xcor,ycor;

while(1)
{
getmousepos(&button,&xcor,&ycor);
if(button)
{

if(xcor>485&&ycor>170&&xcor<550&&ycor<220&&flagremove==1)
{
setcolor(GREEN);
  rectangle(515,190,540,200);
line(515,185,515,205);
line(515,185,500,195);
line(515,205,500,195);
      while(button)
	      {getmousepos(&button,&xcor,&ycor);}


   setcolor(WHITE);
   rectangle(515,190,540,200);
line(515,185,515,205);
line(515,185,500,195);
line(515,205,500,195);


if(file.tellg()-sizeof(f1)!=0)
{

file.clear();
file.seekg(file.tellg()-2*sizeof(f1));

file.read((char*)&f1,sizeof(f1));
  setfillstyle(1,BLACK);
for( int i=0;i<size;i++)
for( int j=0;j<size;j++)
{
bar(125+25*j,125+25*i,140+25*j,140+25*i);
}




for( i=0;i<size;i++)
for( j=0;j<size;j++)
{
setcolor(WHITE);
if(f1.duplicate[i][j]!=0)
{
setfillstyle(1,YELLOW);
bar(125+25*j,125+25*i,140+25*j,140+25*i);
setcolor(BLACK);
}
itoa(f1.a[i][j],str,10);
outtextxy(128+(j*25),120+(i*25),str);
outtextxy(129+(j*25),120+(i*25),str);


}
}
}
else if(xcor>550&&ycor>170&&xcor<620&&ycor<220&&flagremove==1)
{

setcolor(GREEN);
  rectangle(560,190,585,200);
line(585,185,585,205);
line(585,185,600,195);
line(585,205,600,195);
while(button)
{getmousepos(&button,&xcor,&ycor);}


   setcolor(WHITE);
   rectangle(560,190,585,200);
line(585,185,585,205);
line(585,185,600,195);
line(585,205,600,195);
if(!file.eof())
{
file.read((char*)&f1,sizeof(f1));
}
if(!file.eof())
{
setfillstyle(1,BLACK);
for( int i=0;i<size;i++)
for( int j=0;j<size;j++)
{
bar(125+25*j,125+25*i,140+25*j,140+25*i);
}


for( i=0;i<size;i++)
for( j=0;j<size;j++)
{
setcolor(WHITE);
if(f1.duplicate[i][j]!=0)
{
setfillstyle(1,YELLOW);
bar(125+25*j,125+25*i,140+25*j,140+25*i);
setcolor(BLACK);
}
itoa(f1.a[i][j],str,10);
outtextxy(128+(j*25),120+(i*25),str);
outtextxy(129+(j*25),120+(i*25),str);

}
}
}

else if(xcor>495&&ycor>360&&xcor<575&&ycor<400)
{
setcolor(GREEN);
settextstyle(1,0,4);
outtextxy(495,360,"BACK");
while(button)
	      {getmousepos(&button,&xcor,&ycor);}
setcolor(WHITE);
outtextxy(495,360,"BACK");
break;

}
else if(xcor>495&&ycor>270&&xcor<615&&ycor<310&&flagremove==1)
{
setcolor(GREEN);
settextstyle(1,0,4);
outtextxy(495,270,"REMOVE");
while(button)
	      {getmousepos(&button,&xcor,&ycor);}
setcolor(WHITE);
outtextxy(495,270,"REMOVE");


setfillstyle(1,BLUE);
bar(110,130,530,350);
     setfillstyle(1,BLACK);
bar(120,140,520,340);
settextstyle(1,0,3);
outtextxy(195,145,"Do you want to remove");
outtextxy(205,175,"this board from the");
outtextxy(220,205,"list permanently?");

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


rectangle(1,1,639,479);
rectangle(10,10,630,470);
rectangle(465,10,475,470);
setfillstyle(1,BLUE);
floodfill(2,2,getmaxcolor());
floodfill(466,11,getmaxcolor());

settextstyle(1,0,4);


outtextxy(495,70,"BROWSE");
outtextxy(485,110,"BUTTONS");
outtextxy(495,270,"REMOVE");

outtextxy(495,360,"BACK");

rectangle(485,170,620,220);
line(550,170,550,220);




rectangle(515,190,540,200);
line(515,185,515,205);
line(515,185,500,195);
line(515,205,500,195);


rectangle(560,190,585,200);
line(585,185,585,205);
line(585,185,600,195);
line(585,205,600,195);


setfillstyle(3,BLUE);
bar3d(120,120,120+size*25,120+size*25,10,1);
for(int x=120;x<=120+size*25;x+=25)
line(x,120,x,120+size*25);
for(int y=120;y<=120+size*25;y+=25)
line(120,y,120+size*25,y);

 settextstyle(2,0,7);
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
{
setcolor(WHITE);
if(f1.duplicate[i][j]!=0)
{
setfillstyle(1,YELLOW);
bar(125+25*j,125+25*i,140+25*j,140+25*i);
setcolor(BLACK);
}
itoa(f1.a[i][j],str,10);
outtextxy(128+(j*25),120+(i*25),str);
outtextxy(129+(j*25),120+(i*25),str);



}
     break;

     }


     else if(xcor>195&&ycor>255&&xcor<245&&ycor<285)
      {

	setcolor(GREEN);
	outtextxy(200,255,"YES");
      while(button)
	 {getmousepos(&button,&xcor,&ycor);}

       setcolor(WHITE);



int nowpos=file.tellg();
file.seekg(0);
file.clear();
file.read((char*)&f1,sizeof(f1));


strcpy(fname,Dir);
strcat(fname,"TEMP" ) ;
strcat(fname,".fav");

       fstream temp;
       temp.open(fname,ios::out|ios::binary);

while(file.tellg()!=nowpos)
{
temp.write((char*)&f1,sizeof(f1));
 file.read((char*)&f1,sizeof(f1));
}
file.seekg(nowpos);
file.read((char*)&f1,sizeof(f1));
while(!file.eof())
{
temp.write((char*)&f1,sizeof(f1));
file.read((char*)&f1,sizeof(f1));
}
file.close();
temp.close();
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
char tname[80];
strcpy(tname,Dir);
strcat(tname,"TEMP" ) ;
strcat(tname,".fav");

remove(fname);
rename(tname,fname);


file.open(fname,ios::in|ios::binary);
file.read((char*)&f1,sizeof(f1));



if(file.eof())
{
file.close();
file.open(fname,ios::out|ios::binary);
file.close();
file.open(fname,ios::in|ios::binary);
flagremove=0;
}
    restrictmouseptr(0,0,639,479);

	  setcolor(WHITE);

	   cleardevice();
    hidemouseptr();
rectangle(1,1,639,479);
rectangle(10,10,630,470);
rectangle(465,10,475,470);
setfillstyle(1,BLUE);
floodfill(2,2,getmaxcolor());
floodfill(466,11,getmaxcolor());

settextstyle(1,0,4);
if(flagremove==0)
setcolor(DARKGRAY);
outtextxy(495,70,"BROWSE");
outtextxy(485,110,"BUTTONS");
outtextxy(495,270,"REMOVE");
setcolor(WHITE);
outtextxy(495,360,"BACK");
if(flagremove==0)
setcolor(DARKGRAY);
rectangle(485,170,620,220);
line(550,170,550,220);




rectangle(515,190,540,200);
line(515,185,515,205);
line(515,185,500,195);
line(515,205,500,195);


rectangle(560,190,585,200);
line(585,185,585,205);
line(585,185,600,195);
line(585,205,600,195);
	setcolor(WHITE);
if(flagremove==1)
{
setfillstyle(3,BLUE);
bar3d(120,120,120+size*25,120+size*25,10,1);
for(int x=120;x<=120+size*25;x+=25)
line(x,120,x,120+size*25);
for(int y=120;y<=120+size*25;y+=25)
line(120,y,120+size*25,y);

 settextstyle(2,0,7);
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
{
setcolor(WHITE);
if(f1.duplicate[i][j]!=0)
{
setfillstyle(1,YELLOW);
bar(125+25*j,125+25*i,140+25*j,140+25*i);
setcolor(BLACK);
}
itoa(f1.a[i][j],str,10);
outtextxy(128+(j*25),120+(i*25),str);
outtextxy(129+(j*25),120+(i*25),str);
 }



}
else
{
settextstyle(1,0,5);
outtextxy(100,200,"No Favourites");
}
      showmouseptr();
   break;
}
}
}




}




 }

}

file.close();
}
