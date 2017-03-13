
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include"D:ADITHYA\C__~1\11\PROJECT\MOUSE.CPP"


int button,x,y;
int operation=0;
int color=WHITE,temp_color=WHITE;
ofstream myfile;
char name[10],drive[25];
void drawing_toolbar();


struct drawing
{
int object_no;
int x;
int y;
int radius;
int xradius;
int yradius;
int st_angle;
int end_angle;
}canvas_object[500];

void keep_drawing()
{
setcolor(color);
 for(int i=0;i<operation;i++)
 {
  if(canvas_object[i].object_no==6)setcolor(canvas_object[i].x);
  switch(canvas_object[i].object_no)
   {
	case 1:ellipse(canvas_object[i].x,canvas_object[i].y,0,360,canvas_object[i].xradius,canvas_object[i].yradius);
	   break;
	case 2:ellipse(canvas_object[i].x,canvas_object[i].y,canvas_object[i].st_angle,canvas_object[i].end_angle,canvas_object[i].xradius,canvas_object[i].yradius);
	   break;
	case 3:line(canvas_object[i].x,canvas_object[i].y,canvas_object[i].xradius,canvas_object[i].yradius);
	   break;
	case 4:rectangle(canvas_object[i].x,canvas_object[i].y,canvas_object[i].xradius,canvas_object[i].yradius);
	   break;
	case 5:circle(canvas_object[i].x,canvas_object[i].y,canvas_object[i].radius);
	   break;
   }
 }
}

void save_canvas();
void close_canvas();
void create_canvas()
{
cleardevice();
clrscr();
   do
   {
   cout<<"Enter the location where you want to save your file:\n";
   gets(drive);
    if((drive[strlen(drive)-1]!='\\')||(drive[strlen(drive)-2]!=':'))
     strcat(drive,":\\");
   cout<<" Enter a name for the file :";
   gets(name);
   strcat(name,".CPP");
   strcat(drive,name);
   myfile.open(drive);
   if(!myfile) {cout<<"Invalid filename"<<endl<<endl; }
   }while(!myfile);
   myfile<<"#include <graphics.h>\n"
		 <<"#include <conio.h>\n"
		 <<"void main()\n"
		 <<"{ \n "
		 <<"int GD=DETECT,GM;\n"
		 <<"initgraph(&GD,&GM,\"c:\tc\bgi\");\n";
   save_canvas();
   close_canvas();
   exit(0);
}

void save_canvas()
{
 for(int i=0;i<operation;i++)
 {
  switch(canvas_object[i].object_no)
   {
	case 1:myfile<<"\nellipse("<<canvas_object[i].x<<","<<canvas_object[i].y<<",0,360,"<<canvas_object[i].xradius<<","<<canvas_object[i].yradius<<");";
	   break;
	case 2:myfile<<"\nellipse("<<canvas_object[i].x<<","<<canvas_object[i].y<<","<<canvas_object[i].st_angle<<","<<canvas_object[i].end_angle<<","<<canvas_object[i].xradius<<","<<canvas_object[i].yradius<<");";
	   break;
	case 3:myfile<<"\nline("<<canvas_object[i].x<<","<<canvas_object[i].y<<","<<canvas_object[i].xradius<<","<<canvas_object[i].yradius<<");";
	   break;
	case 4:myfile<<"\nrectangle("<<canvas_object[i].x<<","<<canvas_object[i].y<<","<<canvas_object[i].xradius<<","<<canvas_object[i].yradius<<");";
	   break;
	case 5:myfile<<"\ncircle("<<canvas_object[i].x<<","<<canvas_object[i].y<<","<<canvas_object[i].radius<<");";
	   break;
	case 6:myfile<<"\nsetcolor("<<canvas_object[i].x<<");";
	   break;
	case 7:myfile<<"\nfloodfill("<<canvas_object[i].x<<","<<canvas_object[i].y<<","<<canvas_object[i].radius<<");";
	   break;
   }
 }
}

void close_canvas()
{
   myfile<<"\n getch(); \n }";
   myfile.close();
}

void undo()
{
setcolor(BLACK);
switch(canvas_object[operation].object_no)
   {
	case 1:ellipse(canvas_object[operation].x,canvas_object[operation].y,0,360,canvas_object[operation].xradius,canvas_object[operation].yradius);
	   break;
	case 2:ellipse(canvas_object[operation].x,canvas_object[operation].y,canvas_object[operation].st_angle,canvas_object[operation].end_angle,canvas_object[operation].xradius,canvas_object[operation].yradius);
	   break;
	case 3:line(canvas_object[operation].x,canvas_object[operation].y,canvas_object[operation].xradius,canvas_object[operation].yradius);
	   break;
	case 4:rectangle(canvas_object[operation].x,canvas_object[operation].y,canvas_object[operation].xradius,canvas_object[operation].yradius);
	   break;
	case 5:circle(canvas_object[operation].x,canvas_object[operation].y,canvas_object[operation].radius);
	   break;
   }
canvas_object[operation].object_no=0;
operation--;
keep_drawing();
setcolor(WHITE);
drawing_toolbar();
}

void draw_pallete()
{
int k=0;
 for(int i=0;i<5;i++)
  for(int j=0;j<3;j++)
   {
   rectangle(585+j*16,190+i*11,596+j*16,195+i*11);
   floodfill(586+j*16,191+i*11,WHITE);
   setfillstyle(1,k);
   k++;
   }
}

void drawing_toolbar()
{
 settextstyle(2,0,4);
 rectangle(580,1,639,479);
 rectangle(582,10,635,35);    outtextxy(588,15,"Ellipse");
 rectangle(582,40,635,65);    outtextxy(594,45,"Arc");
 rectangle(582,70,635,95);    outtextxy(592,75,"Circle");
 rectangle(582,100,635,125);  outtextxy(593,105,"Line");
 rectangle(582,130,635,155);  outtextxy(585,135,"Rectangle");
 rectangle(582,270,635,295);  outtextxy(594,275,"Save");
 rectangle(582,300,635,325);  outtextxy(594,305,"Undo");
 rectangle(582,445,635,470);  outtextxy(594,450,"Exit");
 draw_pallete();
}

void color_check(int x,int y)
{
int k=0;
temp_color=color;
 for(int i=0;i<5;i++)
  for(int j=0;j<3;j++)
   {
   if(x>585+j*16&&x<596+j*16&&y>190+i*11&&y<195+i*11)
	{
	 color=k-1;
	  if(color!=temp_color)
	   {
	    drawing temp={6,k-1,0,0,0,0,0,0};
	    canvas_object[operation]=temp;
	   }
	  else operation--;
	}
   k++;
   }
}

void draw_ellipse()
{
int tempx,tempy;
int xradius=0,yradius=0;
  while(1)
  {
   getmousepos(&button,&x,&y);
   setcolor(WHITE);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   delay(10);
   setcolor(BLACK);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   tempx=x;tempy=y;
	while(button==1&&(tempx+x)/2+xradius<580)
	 {
	  getmousepos(&button,&x,&y);

	  setcolor(RED); //ellipse pointer
	  circle(x,y,2);
	  delay(1);
	  setcolor( BLACK );
	  circle(x,y,2);

	  xradius=abs(x-tempx);yradius=abs(y-tempy);
	  setcolor( color );
	  ellipse((tempx+x)/2,(tempy+y)/2,0,360,xradius,yradius);
	  delay(1);
	  setcolor( BLACK );
	  ellipse((tempx+x)/2,(tempy+y)/2,0,360,xradius,yradius);
	  keep_drawing();
	 }
	if(tempx-x!=0||tempy-y!=0)
	{
	setcolor( color );
	drawing temp={1,(tempx+x)/2,(tempy+y)/2,0,xradius,yradius,0,0};
	canvas_object[operation]=temp;
	ellipse((tempx+x)/2,(tempy+y)/2,0,360,xradius,yradius);
	operation++;
	}
  keep_drawing();
  setcolor(WHITE);
  drawing_toolbar();
  if(x>576&&button==1)break;
  }
}

void draw_arc()
{
int tempx,tempy;
int xradius=0,yradius=0;
int start_angle,end_angle;
  while(1)
  {
   getmousepos(&button,&x,&y);
   setcolor(WHITE);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   delay(10);
   setcolor(BLACK);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   tempx=x;tempy=y;
	while(button==1&&(tempx+x)/2+xradius<580)
	 {
	  getmousepos(&button,&x,&y);

	  setcolor(RED); //arc pointer
	  circle(x,y,2);
	  delay(1);
	  setcolor( BLACK );
	  circle(x,y,2);
	  xradius=abs(x-tempx);yradius=abs(y-tempy);
	   if(tempy-y>0){start_angle=0;   end_angle=180;}
		else        {start_angle=180; end_angle=0;  }
	  setcolor( color );
	  ellipse((tempx+x)/2,(tempy+y)/2,start_angle,end_angle,xradius,yradius);
	  delay(1);
	  setcolor( BLACK );
	  ellipse((tempx+x)/2,(tempy+y)/2,start_angle,end_angle,xradius,yradius);
	  keep_drawing();
	 }
	if(tempx-x!=0||tempy-y!=0)
	{
	setcolor( color );
	drawing temp={2,(tempx+x)/2,(tempy+y)/2,0,xradius,yradius,start_angle,end_angle};
	canvas_object[operation]=temp;
	ellipse((tempx+x)/2,(tempy+y)/2,start_angle,end_angle,xradius,yradius);
	operation++;
	}
  keep_drawing();
  setcolor(WHITE);
  drawing_toolbar();
  if(x>576&&button==1)break;
  }
}

void draw_line()
{
int tempx,tempy;
  while(1)
  {
   getmousepos(&button,&x,&y);
   setcolor(WHITE);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   delay(10);
   setcolor(BLACK);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   tempx=x;tempy=y;
	while(button==1&&x<580)
	 {
	  getmousepos(&button,&x,&y);
	  setcolor( color );
	  line(tempx,tempy,x,y);
	  delay(1);
	  setcolor( BLACK );
	  line(tempx,tempy,x,y);
	  keep_drawing();
	 }
	if(tempx-x!=0||tempy-y!=0)
	{
	setcolor( color );
	drawing temp={3,tempx,tempy,0,x,y,0,0};
	canvas_object[operation]=temp;
	line(tempx,tempy,x,y);
	operation++;
	}
  keep_drawing();
  setcolor(WHITE);
  drawing_toolbar();
  if(x>576&&button==1)break;
  }
}

void draw_rectangle()
{
int tempx,tempy;
  while(1)
  {
   getmousepos(&button,&x,&y);
   setcolor(WHITE);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   delay(5);
   setcolor(BLACK);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   tempx=x;tempy=y;
	while(button==1&&x<580)
	 {
	  getmousepos(&button,&x,&y);
	  setcolor( color );
	  rectangle(tempx,tempy,x,y);
	  delay(1);
	  setcolor( BLACK );
	  rectangle(tempx,tempy,x,y);
	  keep_drawing();
	 }
	if(tempx-x!=0||tempy-y!=0)
	{
	setcolor( color );
	drawing temp={4,tempx,tempy,0,x,y,0,0};
	canvas_object[operation]=temp;
	rectangle(tempx,tempy,x,y);
	operation++;
	}
  keep_drawing();
  setcolor(WHITE);
  drawing_toolbar();
  if(x>576&&button==1)break;
  }
}

void draw_circle()
{
int tempx,tempy;
int radius;
  while(1)
  {
   getmousepos(&button,&x,&y);
   setcolor(WHITE);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   delay(5);
   setcolor(BLACK);
   line(x-3,y,x+3,y);
   line(x,y-3,x,y+3);
   tempx=x;tempy=y;
	while(button==1&&x<580)
	 {
	  getmousepos(&button,&x,&y);

	  setcolor(RED); //circle pointer
	  circle(x,y,2);
	  delay(1);
	  setcolor( BLACK );
	  circle(x,y,2);

	  setcolor( color );
	  radius=sqrt( pow(tempx-x,2) + pow(tempy-y,2) )/2;
	  circle((tempx+x)/2,(tempy+y)/2,radius);
	  delay(1);
	  setcolor( BLACK );
	  circle((tempx+x)/2,(tempy+y)/2,radius);
	  keep_drawing();
	 }
	if(tempx-x!=0||tempy-y!=0)
	{
	setcolor( color );
	drawing temp={5,(tempx+x)/2,(tempy+y)/2,radius,0,0,0,0};
	canvas_object[operation]=temp;
	circle((tempx+x)/2,(tempy+y)/2,radius);
	operation++;
	}
  keep_drawing();
  setcolor(WHITE);
  drawing_toolbar();
  if(x>576&&button==1)break;
  }
}

void paint()
{
cleardevice();
int ch=0;
 while(ch!=27)
  {
   getmousepos(&button,&x,&y);
   putpixel(x,y,YELLOW);
   putpixel(x-1,y+1,YELLOW);
   putpixel(x+1,y+1,YELLOW);
   delay(50);
   putpixel(x,y,BLACK);
   putpixel(x-1,y+1,BLACK);
   putpixel(x+1,y+1,BLACK);
   drawing_toolbar();
   //if(x>580) showmouseptr();
   //if(x<580) hidemouseptr();
   if(x>582&&x<635&&y>10&&y<35&&button==1)   {draw_ellipse();   operation++;}
   if(x>582&&x<635&&y>40&&y<65&&button==1)   {draw_arc();       operation++;}
   if(x>582&&x<635&&y>70&&y<95&&button==1)   {draw_circle();    operation++;}
   if(x>582&&x<635&&y>100&&y<125&&button==1) {draw_line();      operation++;}
   if(x>582&&x<635&&y>130&&y<155&&button==1) {draw_rectangle(); operation++;}
   if(x>585&&x<632&&y>190&&y<239&&button==1) {color_check(x,y); operation++;}
   if(x>582&&x<635&&y>270&&y<295&&button==1) {create_canvas();}
   if(x>582&&x<635&&y>300&&y<325&&button==1) {delay(300);undo();}
   if(x>582&&x<635&&y>445&&y<470&&button==1) exit(0);
  if(operation==499)break;
  if(kbhit()) ch=getch();
  }
}



void main()
{
 int gd= DETECT, GM;
 initgraph(&gd, &GM,"c:\\turboc3\\bgi");
 cleardevice();
 initmouse();
 //showmouseptr();
 drawing_toolbar();
 paint();
}
