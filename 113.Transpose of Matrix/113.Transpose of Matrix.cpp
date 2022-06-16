#include<iostream>
using namespace std;

int main()
{
int a[100][100],r,c,i,j,ta[100][100];
cout<<"Enter Number of rows : ";
cin>>r;
cout<<"Enter Number of coloumns : ";
cin>>c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<"Enter Elements : ";
cin>>a[i][j];
}
}
//
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
//Transpose of a
cout<<"Transpose of Matrix : "<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
ta[i][j]=a[j][i];
cout<<ta[i][j]<<"\t";
}
cout<<"\n";
}
}


