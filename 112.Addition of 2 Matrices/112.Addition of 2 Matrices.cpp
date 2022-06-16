#include<iostream>
using namespace std;

int main()
{
int a[100][100],r1,c1,i,j;
int b[100][100],r2,c2;
int c[100][100],r3,c3;
cout<<"Matrix 1 : "<<endl;
cout<<"Enter Number of rows : ";
cin>>r1;
cout<<"Enter Number of coloumns : ";
cin>>c1;
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
cout<<"Enter Elements : ";
cin>>a[i][j];
}
}
//
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
cout<<"Matrix 2 : "<<endl;
cout<<"Enter Number of rows : ";
cin>>r2;
cout<<"Enter Number of coloumns : ";
cin>>c2;
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
cout<<"Enter Elements : ";
cin>>b[i][j];
}
}
//
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
cout<<b[i][j]<<"\t";
}
cout<<"\n";
}
if((r1==r2)&&(c1==c2))
{
c3=c2;
r3=r2;
cout<<"Addition Of Two Matrix is : "<<endl;
for(i=0;i<r3;i++)
{
for(j=0;j<c3;j++)
{
c[i][j]=a[i][j]+b[i][j];
cout<<c[i][j]<<"\t";
}
cout<<"\n";
}
}
else
{
cout<<"Rows and columns of both matrix is not same";
}
}

