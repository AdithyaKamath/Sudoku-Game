int sameornot(int a[9][9],int dup[9][9],int &r,int &c,int size)
{
for(r=0;r<size;r++)
for(c=0;c<size;c++)
if(a[r][c]!=0&&a[r][c]!=dup[r][c])
return 1;

return 0;
}

void checkboxfull(int row, int col, int posib[9],int ar[9][9],int size)
{
int r,c;
if(size==4)
{
if(row%2==0)
r=row;
else
r=row-1;
if(col%2==0)
c=col;
else
c=col-1;
for(int i=r;i<r+2;i++)
{
for(int j=c;j<c+2;j++)
{
for(int m=0;m<4;m++)
if(posib[m]==ar[i][j])
posib[m]=0;
}
}
}
 else if(size==6)
{
if(row%3==0)
r=row;
else if(row%3==1)
r=row-1;
else
r=row-2;
if(col%2==0)
c=col;
else if(col%2==1)
c=col-1;
for(int i=r;i<r+3;i++)
{
for(int j=c;j<c+2;j++)
{
for(int m=0;m<6;m++)
if(posib[m]==ar[i][j])
posib[m]=0;
}
}
}

else if(size==9)
{
if(row%3==0)
r=row;
else if(row%3==1)
r=row-1;
else
r=row-2;
if(col%3==0)
c=col;
else if(col%3==1)
c=col-1;
else
c=col-2;
for(int i=r;i<r+3;i++)
{
for(int j=c;j<c+3;j++)
{
for(int m=0;m<9;m++)
if(posib[m]==ar[i][j])
posib[m]=0;
}
}
}
}

int checkrow(int a[9][9],int size)
{
int row,i,j;
for(row=0;row<size;row++)
for(i=0;i<size;i++)
for(j=i+1;j<size;j++)
if(a[row][i]==a[row][j]&&a[row][i]!=0)
return 1;

return 0;
}


int checkcol(int a[9][9],int size)
{
int col,i,j;
for(col=0;col<size;col++)
for(i=0;i<size;i++)
for(j=i+1;j<size;j++)
if(a[i][col]==a[j][col]&&a[i][col]!=0)
return 1;

return 0;
}




int checkbox(int a[9][9],int startrow,int startcol,int size)
{
int boxi,boxj,i,j,m,n;
if(size==4)
{
n=2;
m=2;
}
else if(size==6)
{
n=3;
m=2;
}
else if(size==9)
{
n=3;
m=3;
}
for(boxi=startrow;boxi<startrow+n;boxi++)
for(boxj=startcol;boxj<startcol+m;boxj++)
for(i=startrow;i<startrow+n;i++)
for(j=startcol;j<startcol+m;j++)
{
if(a[boxi][boxj]==a[i][j]&&a[boxi][boxj]!=0&&(!(i==boxi&&j==boxj)))
return 1;
}
return 0;
}

int checkzero(int a[9][9],int size)
{
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
if(a[i][j]==0)
return 1;

return 0;
}



int checkboxsolve(int a[9][9],int row, int col,int n,int size)
{
int r,c,i,j;


if(size==4)
{
if(row%2==0)
r=row;
else if(row%2==1)
r=row-1;
if(col%2==0)
c=col;
else if(col%2==1)
c=col-1;

for(i=r;i<r+2;i++)
for(j=c;j<c+2;j++)
{
if(n==a[i][j])
return 1;
}
}


else if(size==6)
{
if(row%3==0)
r=row;
else if(row%3==1)
r=row-1;
else
r=row-2;
if(col%2==0)
c=col;
else if(col%2==1)
c=col-1;



for(i=r;i<r+3;i++)
for(j=c;j<c+2;j++)
{
if(n==a[i][j])
return 1;
}
}


else if(size==9)
{
if(row%3==0)
r=row;
else if(row%3==1)
r=row-1;
else
r=row-2;
if(col%3==0)
c=col;
else if(col%3==1)
c=col-1;
else
c=col-2;


for(i=r;i<r+3;i++)
for(j=c;j<c+3;j++)
{
if(n==a[i][j])
return 1;
}
}
return 0;
}



int checkrowsolve(int a[9][9],int r,int n,int size)
{
for(int j=0;j<size;j++)
if(n==a[r][j])
return 1;

return 0;

}


int checkcolsolve(int a[9][9],int c,int n,int size)
{

for(int i=0;i<size;i++)
if(n==a[i][c])
return 1;

return 0;
}

int checkzerosolve(int a[9][9],int &r,int &c,int size)
{
for(r=0;r<size;r++)
for(c=0;c<size;c++)
if(a[r][c]==0)
return 1;

return 0;
}