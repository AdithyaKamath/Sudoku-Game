void newstart()
{
float angle=180,rad;
int _delay=3;

while(angle<360)
{
 rad=(angle*M_PI)/180;
putpixel(100+50*sin(rad),240+50*cos(rad),WHITE);
delay(_delay);
angle+=1;
}


 for(int i=130;i<150;i++)
{
putpixel(i,240,WHITE);
delay(_delay);
}

angle=0;
for( i=190;i<290;i++)
{
putpixel(200,i,WHITE);
delay(_delay);
}


angle=0;
while(angle<180)
{
 rad=(angle*M_PI)/180;
putpixel(200+50*sin(rad),240+50*cos(rad),WHITE);
delay(_delay);
angle+=1;
}
angle=0;
while(angle<360)
{
 rad=(angle*M_PI)/180;
putpixel(320+50*cos(rad),240+50*sin(rad),WHITE);
delay(_delay);
angle+=1;
}

for( i=190;i<290;i++)
{
putpixel(400,i,WHITE);
delay(_delay);
}
int j;
for( i=450,j=190;i>400;i--,j++)
{
putpixel(i,j,WHITE);
delay(_delay);
}
while(i<450)
{     putpixel(i,j,WHITE);
delay(_delay);
i++;
j++;
}

for( i=190;i<240;i++)
{
putpixel(500,i,WHITE);
delay(_delay);
}

angle=270;
while(angle<450)
{
 rad=(angle*M_PI)/180;
putpixel(530+30*sin(rad),240+50*cos(rad),WHITE);
delay(_delay);
angle+=1;
}

for( i=240;i>190;i--)
{
putpixel(559,i,WHITE);
delay(_delay);
}

settextstyle(1,0,10);
outtextxy(10,300,"Unlimited");

soundstart();

getch();
}

void begin()
{

float angle=0,radians,Y,X=0,front=0,C=0;

int xcor,ycor;
for(int i=0;i<10000;i++)
{
xcor=random(640);
ycor=random(480);
putpixel(xcor,ycor,C);
C++;
}

setfillstyle(0,BLACK);
bar(0,130,640,295);
setfillstyle(0,WHITE);

C=0;
while(front<170)
{

//radians=angle*M_PI/180;
Y=cos(angle);
//X=sin(angle);
Y*=30;
X*=20;

setcolor(C);


outtextxy(X+front,Y+150,"MindGames Production");
outtextxy(640-(X+front)-200,Y+190,"presents");
outtextxy(X+front+35,Y+230,"C-Doku Unlimited");
delay(30);
setcolor(BLACK);
outtextxy(X+front,Y+150,"MindGames Production");
outtextxy(640-(X+front)-200,Y+190,"presents");
outtextxy(X+front+35,Y+230,"C-Doku Unlimited");

angle++;
front+=8;
C++;
}

setcolor(WHITE);

outtextxy(X+front,Y+150,"MindGames Production");
outtextxy(640-(X+front)-200,Y+190,"presents");
outtextxy(X+front+35,Y+230,"C-Doku Unlimited");

X=0,Y=0,front=0;
while(front<100)
{
setcolor(WHITE);
outtextxy(X+front,Y+250,"A");
delay(10);
setcolor(BLACK);
outtextxy(X+front,Y+250,"A");
front+=5;
}
setcolor(WHITE);
outtextxy(X+front,Y+250,"A");
front=0;
while(front<150)
{
setcolor(WHITE);
outtextxy(X+front,Y+250,"D");
delay(10);
setcolor(BLACK);
outtextxy(X+front,Y+250,"D");
setcolor(WHITE);
outtextxy(100,Y+250,"A");
front+=5;
}
setcolor(WHITE);
outtextxy(X+front,Y+250,"D");
front=0;

while(front<200)
{
setcolor(WHITE);
outtextxy(X+front,Y+250,"I");
delay(10);
setcolor(BLACK);
outtextxy(X+front,Y+250,"I");
setcolor(WHITE);
outtextxy(100,Y+250,"A");
outtextxy(150,Y+250,"D");
front+=5;
}
setcolor(WHITE);
outtextxy(X+front,Y+250,"I");



X=0,Y=0,front=0;
while(front<400)
{
setcolor(WHITE);
outtextxy(X+front,Y+250,"P");
delay(10);
setcolor(BLACK);
outtextxy(X+front,Y+250,"P");
setcolor(WHITE);
outtextxy(100,Y+250,"A");
outtextxy(150,Y+250,"D");
outtextxy(200,Y+250,"I");
front+=5;
}
setcolor(WHITE);
outtextxy(X+front,Y+250,"P");
front=0;
while(front<450)
{
setcolor(WHITE);
outtextxy(X+front,Y+250,"R");
delay(10);
setcolor(BLACK);
outtextxy(X+front,Y+250,"R");
setcolor(WHITE);
outtextxy(400,Y+250,"P");
outtextxy(100,Y+250,"A");
outtextxy(150,Y+250,"D");
outtextxy(200,Y+250,"I");
front+=5;
}
setcolor(WHITE);
outtextxy(X+front,Y+250,"R");
front=0;
while(front<500)
{
setcolor(WHITE);
outtextxy(X+front,Y+250,"I");

delay(10);
setcolor(BLACK);
outtextxy(X+front,Y+250,"I");
setcolor(WHITE);
outtextxy(400,Y+250,"P");
outtextxy(450,Y+250,"R");
outtextxy(100,Y+250,"A");
outtextxy(150,Y+250,"D");
outtextxy(200,Y+250,"I");
front+=5;
}
setcolor(WHITE);
outtextxy(X+front,Y+250,"I");





getch();
cleardevice();
}



