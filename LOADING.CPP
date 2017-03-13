void loading()
{
hidemouseptr();
char str[30];
int a[9][9];
int count=1;
for(int x=200;x<=425;x+=25)
line(x,50,x,275);
for(int y=50;y<=275;y+=25)
line(200,y,425,y);
settextstyle(1,0,8);
outtextxy(160,350,"LOADING");

rectangle(198,48,427,277);

rectangle(1,1,639,479);
rectangle(10,10,630,470);



while(count!=10)
{
setfillstyle(1,colours[random(sizeof(colours)/2)]);
floodfill(2,2,getmaxcolor());

settextstyle(2,0,7);
setcolor(WHITE);

for(int i=0;i<9;i++)
for(int j=0;j<9;j++)
a[i][j]=0;
solvesud(a,9);
  delay(rand()%200);

setfillstyle(1,BLACK);
for(int i1=0;i1<9;i1++)
for(int j1=0;j1<9;j1++)
bar(201+25*j1,51+25*i1,224+25*j1,74+25*i1);


/*rectangle(198-6*count,48-6*count,427+6*count,277+6*count);
setfillstyle(1,colours[random(sizeof(colours)/2)]);
floodfill (199-6*count,100,getmaxcolor());
  */


for( i=0;i<9;i++)
for( j=0;j<9;j++)
 if(a[i][j]!=0)
{



itoa(a[i][j],str,10);
outtextxy(208+(j*25),50+(i*25),str);
outtextxy(209+(j*25),50+(i*25),str);
}
count++;
settextstyle(3,0,8);
}
showmouseptr();
}