void rules()
{
int a[9][9];
char str[30];
cleardevice();
settextstyle(7,0,15);
outtextxy(130,150,"ABOUT");
getch();
cleardevice();
settextstyle(7,0,1);
outtextxy(0,150,"Sudoku puzzles are the world's most loved number puzzle games.");
outtextxy(80,170,"C-doku Unlimited provides you the opportunity to");
setcolor(RED);
settextstyle(7,0,3);
outtextxy(75,190,"give your brain a workout like no other.");
setcolor(WHITE);
getch();
cleardevice();
settextstyle(7,0,15);
outtextxy(130,150,"RULES");
getch();
cleardevice();

do
{
;
}while(!gen(a,9));


for(int i=0;i<60;i++)
a[random(9)][random(9)]=0;

setfillstyle(1,RED);
bar(200,50,425,75);
setfillstyle(1,BLUE);
bar(200,50,225,275);
setfillstyle(1,GREEN);
bar(200,50,225,75);
setfillstyle(1,BROWN);
bar(350,200,425,275);



displayboard(a,9,a);
setfillstyle(1,BLACK);



bar(11,336,629,469);

bar(200,290,425,320);
bar(461,166,629,469);

 setcolor(WHITE) ;
 settextstyle(1,0,4);
 outtextxy(40,50,"TIMER");

 settextstyle(1,0,3);
 outtextxy(475,10,"INPUT BOARD");
 outtextxy(240,290,"9 X 9 BOARD");
settextstyle(7,0,1);
outtextxy(175,350,"The components of a SUDOKU are :");

settextstyle(4,0,2);
setfillstyle(1,RED);
bar(200,400,225,425);
outtextxy(230,400,"Rows");

setfillstyle(1,BLUE);
bar(300,400,325,425);
outtextxy(330,400,"Columns");

setfillstyle(1,BROWN);
bar(425,400,450,425);
outtextxy(455,400,"Region");

getch();

cleardevice();
settextstyle(7,0,1);
outtextxy(50,100,"Sudoku involves filling in numbers ranging from");
outtextxy(125,125,"1 to 4 (in case of 4 X 4)");
outtextxy(125,150,"1 to 6 (in case of 6 X 6)");
outtextxy(125,175,"1 to 9 (in case of 9 X 9)");

outtextxy(50,225,"The numbers should be filled in a manner such that");
outtextxy(50,250,"no number repeats in a given row, a given column");
outtextxy(50,275,"or a given region.");
 getch();

cleardevice();

settextstyle(7,0,8);
outtextxy(50,150,"HOW TO PLAY");
getch();
cleardevice();
settextstyle(7,0,1);
outtextxy(10,150,"In order to fill in the numbers first direct the cursor towards");
outtextxy(10,175,"the box where you want to fill-in the number.");
outtextxy(10,225,"Click to select the box and then move the cursor over to the input");
outtextxy(10,250,"board. Select the number you want to input by clicking it.");
outtextxy(10,300,"The following demo depicts how to input numbers into the box.");
outtextxy(10,325,"Please do not disturb the mouse cursor while the demo progresses.");
getch();
cleardevice();
for( i=0;i<9;i++)
for(int j=0;j<9;j++)
a[i][j]=0;

settextstyle(2,0,7);

  displayboard(a,9,a);
  setfillstyle(1,BLACK);
  bar(11,336,629,469);
bar(461,166,629,469);

settextstyle(7,0,1);
outtextxy(85,350,"Inputting and Deleting numbers is shown above.");
setfillstyle(1,YELLOW);
bar(70,390,85,405);
outtextxy(90,385,"represents positions which are fixed with numbers.");
outtextxy(20,420,"Other positions can be filled with numbers from input board.");


		int i2,j2;
		setcolor(BLACK);

		settextstyle(2,0,7);
	   for(int num=3;num<10;num++)
	   {
	   itoa(num,str,10);
	   i2=random(8)+1;
	   j2=random(8)+1;

bar(205+25*j2,55+25*i2,220+25*j2,70+25*i2);
outtextxy(208+(j2*25),50+(i2*25),str);
outtextxy(209+(j2*25),50+(i2*25),str);
}

		   setcolor(WHITE);
   settextstyle(2,0,7);

float xx=0.0,yy=55.0;
 while(xx<205)
 {
 xx++;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);
 hidemouseptr();
 setfillstyle(1,BLUE);
 bar(205,55,220,70);

 setfillstyle(1,BLACK);
  bar(208,58,217,67);
  showmouseptr();
 while(xx<505)
 {
 xx++;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);
 outtextxy(208,50,"1");
 outtextxy(209,50,"1");
 delay(500);
 while(xx>233)
 {
 xx--;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);
 hidemouseptr();
 setfillstyle(1,BLACK);
 bar(205,55,220,70);
     outtextxy(208,50,"1");
 outtextxy(209,50,"1");

 setfillstyle(1,BLUE);
 bar(230,55,245,70);

 setfillstyle(1,BLACK);
  bar(233,58,242,67);

      showmouseptr();
 while(xx<530)
 {
 xx++;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);



 outtextxy(233,50,"2");
 outtextxy(234,50,"2");
 delay(500);
 while(xx>258)
 {
 xx--;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);
  hidemouseptr();
 setfillstyle(1,BLACK);
bar(230,55,245,70);
     outtextxy(233,50,"2");
 outtextxy(234,50,"2");

 setfillstyle(1,BLUE);
 bar(255,55,270,70);

 setfillstyle(1,BLACK);
  bar(258,58,267,67);

      showmouseptr();
 while(xx<555)
 {
 xx++;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);
 outtextxy(258,50,"3");
 outtextxy(259,50,"3");
  delay(500);
 while(xx>205)
 {
 xx--;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);
   hidemouseptr();
 setfillstyle(1,BLACK);
bar(255,55,270,70);
     outtextxy(258,50,"3");
 outtextxy(259,50,"3");




 setfillstyle(1,BLUE);
 bar(205,55,220,70);

 setfillstyle(1,BLACK);
  bar(208,58,217,67);
  outtextxy(208,50,"1");
 outtextxy(209,50,"1");



      showmouseptr();
 while(xx<580)
 {
 xx++;

 setmouseptr(xx,yy);
 delay(3);
 }
 delay(500);

	   setfillstyle(1,BLUE);
 bar(205,55,220,70);

 setfillstyle(1,BLACK);
  bar(208,58,217,67);
  delay(1000);
 getch();
  cleardevice();

 }
