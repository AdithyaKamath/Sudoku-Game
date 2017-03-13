int minigame()
{


char str[6],strinput[6],Str[2];
Str[1]='\0';
int pos[5]={0,1,2,3,4};
str[5]='\0';
settextstyle(1,0,5);
outtextxy(65,20,"Sequence Guessing Game");
settextstyle(1,0,3);


outtextxy(50,200,"A random sequence of five alphabets will be");
outtextxy(50,230,"shown to you. They are displayed in random");
outtextxy(50,260,"order. Your job is to enter the sequence in");
outtextxy(50,290,"the correct order. There are five rounds.");
outtextxy(50,320,"If you can pass all the rounds, then you");
outtextxy(50,350,"can expect a reward.");
outtextxy(50,380,"Do not press any key unless you are asked to.");
outtextxy(50,410,"Press any key to start the game.");
getch();
settextstyle(1,0,5);
for(int turn=0;turn<5;turn++)
{
cleardevice();
for(int i=0;i<5;i++)
str[i]=random(25)+'a';

settextstyle(1,0,4);
outtextxy(60,100,"A sequence will be shown to you");
outtextxy(50,150,"Look carefully at the boxes below");

for(i=0;i<5;i++)
rectangle(200+i*50,300,250+i*50,400);

delay(1000);

 int temp,tpos1,tpos2;
for(i=0;i<60;i++)
{   tpos1=random(5);
tpos2=random(5);
temp=pos[tpos1];
pos[tpos1]=pos[tpos2];
pos[tpos2]=temp;
}


for( i=0;i<5;i++)
{
setcolor(WHITE);
Str[0]=str[pos[i]];
outtextxy(210+pos[i]*50,325,Str);
delay(1000-180*turn);
setcolor(BLACK);
outtextxy(210+pos[i]*50,325,Str);

}
cleardevice();
setcolor(WHITE);

outtextxy(10,100,"Enter the sequence in the same order.");
outtextxy(10,150,"The only characters which can be used");
outtextxy(150,200,"are lower case alphabets");

for(i=0;i<5;i++)
rectangle(200+i*50,300,250+i*50,400);

for( i=0;i<5;i++)
{  setfillstyle(1,BLUE);
bar(201+i*50,301,249+i*50,399);
      setfillstyle(1,BLACK);
bar(205+i*50,305,245+i*50,395);

   do
   {
   strinput[i]=getch();
   }
   while(!isalpha(strinput[i])||!islower(strinput[i]));
  Str[0]=strinput[i];

  setfillstyle(1,BLACK);
  bar(201+i*50,301,249+i*50,399);


outtextxy(210+i*50,325,Str);

}
strinput[5]='\0';

if(strcmp(str,strinput))
return 0;
}

   cleardevice();

   settextstyle(7,0,5);
   outtextxy(100,200,"CONGRATULATIONS!");
    settextstyle(7,0,1);
   outtextxy(1,400,"May the force be with you. Please proceed to reap your reward.");

   getch();
   cleardevice();

rectangle(1,1,639,479);
rectangle(10,10,630,470);
rectangle(10,360,630,370);
setfillstyle(1,colours[random(sizeof(colours)/2)]);
 floodfill(2,2,getmaxcolor());
 floodfill(11,361,getmaxcolor());


settextstyle(1,0,4);
int posx,posy,poss;
char string[9][30]={"show","correct","solution","row","column","stoptimer","starttimer","selfsolve","box(1-9)"};


settextstyle(2,0,7);
		setcolor(WHITE);
   outtextxy(20,380,"The master cheat is \'c-doku\'. Press 'Esc' during the");
   outtextxy(35,410,"game and enter this master code to unlock cheat");
   outtextxy(100,440,"mode. Catch the above codes if you can.");

    outtextxy(21,380,"The master cheat is \'c-doku\'. Press 'Esc' during the");
   outtextxy(36,410,"game and enter this master code to unlock cheat");
   outtextxy(101,440,"mode. Catch the above codes if you can.");




while(1)
{



   if(kbhit())
   break;



   settextstyle(1,0,4);
posx=random(400)+50;
posy=random(200)+50;
poss=random(9);
setcolor(WHITE);
outtextxy(posx,posy,string[poss]);
delay(100);
setcolor(BLACK);
outtextxy(posx,posy,string[poss]);
}
setcolor(WHITE);







cleardevice();
setcolor(WHITE);
setfillstyle(1,WHITE);


return 1;
}
