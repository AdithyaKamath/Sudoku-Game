int gen(int a[9][9],int size)
{

for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
a[i][j]=0;

//From the second row, define some more variables
int r,c=0;
while(c<size)
{
r=0;
while(r<size)
{
if(a[r][c]==0)
{
int posib[9];
for(int i=0;i<size;i++)
posib[i]=i+1;
//checkbox
checkboxfull(r,c,posib,a,size);
//check column, keep constant and increment row
for(i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
if(posib[j]==a[i][c])
{

posib[j]=0;//doesnt account for duplication
}
}
}
//check row
for(int j=0;j<size;j++)
{
for(int k=0;k<size;k++)
{
if(posib[k]==a[r][j])
{
posib[k]=0;
}
}
}

int newar[9];
for(i=0;i<size;i++)
newar[i]=0;
int o=0;
for(i=0;i<size;i++)
{
if(posib[i]!=0)
{
newar[o]=posib[i];
o++;
}
}
for(int pos=0;newar[pos]!=0;pos++);
{
a[r][c]=newar[random(pos)];
if(a[r][c]==0)
return 0;
}

}
r++;
}//end of r while
c++;
}
return 1;
}
