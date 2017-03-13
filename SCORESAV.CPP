
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

struct Scores
{

	char name[5][30];
	int time[5];
};
void main()
{
Scores sud;


fstream SUDOF;
SUDOF.open("D:\\SCORE4.SAV",ios::out|ios::binary);

for(int i=180;i<=184;i++)
{
strcpy(sud.name[i-180],"MyName");
sud.time[i-180]=(i+1)*5;
}


for(i=180;i<=184;i++)
{

SUDOF.write( (char*)&sud,  sizeof(sud) );

}
SUDOF.close() ;
SUDOF.open("D:\\SCORE6.SAV",ios::out|ios::binary);

for( i=180;i<=184;i++)
{
strcpy(sud.name[i],"MyName");
sud.time[i-180]=(i+1)*5;
}


for(i=180;i<=184;i++)
{

SUDOF.write( (char*)&sud,  sizeof(sud) );

}
SUDOF.close() ;
SUDOF.open("D:\\SCORE9.SAV",ios::out|ios::binary);

for( i=180;i<=184;i++)
{
strcpy(sud.name[i-180],"MyName");
sud.time[i-180]=(i+1)*5;
}


for(i=180;i<=184;i++)
{

SUDOF.write( (char*)&sud,  sizeof(sud) );

}
SUDOF.close() ;
getch();
}