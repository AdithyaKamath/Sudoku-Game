#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<time.h>
#include<dos.h>
#include<string.h>
#include<math.h>
#include<fstream.h>
#include<iomanip.h>
#include<ctype.h>


#define Dir "D:"


 clock_t start, end ,chstart=0,chstop=0,startss,endss;
 int pausetime=0,flagtime=1,Tick,Tickss,screentime=5;
 int xcor,ycor,button,count=0;
 char number[10];
 int cheatmode=0;
 int colours[5]={BLUE,RED,YELLOW,LIGHTCYAN,LIGHTGREEN};





struct favour
{
int a[9][9],duplicate[9][9];

};

 struct multi
{
int status,status2;
int a[9][9],solved[9][9],duplicate[9][9];
};


   struct SudoNum
{
	int Num[9][9];
	int solved[9][9];
	int duplicate[9][9];
	int size;
	int timestart;


};

class Scores
{

	char name[5][30];
	int time[5];

public:

char* retname(int i)
{
return name[i];
}

int& rettime(int i)
{
return time[i];
}
};

char fname[80] = Dir, name[30];



