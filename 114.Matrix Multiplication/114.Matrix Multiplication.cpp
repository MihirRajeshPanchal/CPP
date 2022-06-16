#include<iostream>
using namespace std;

int main()
{
int a[100][100],r1,c1,i,j,k;
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
//
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
for(i=0;i<c1;i++)
{
for(j=0;j<r2;j++)
{
c[i][j]=0;
}
}
if(c1==r2)
{
cout<<"Multiplication Of Two Matrix is : "<<endl;
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
for(k=0;k<r2;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
for(i=0;i<r1;i++) // r1=3 1<3
{
	for(j=0;j<c2;j++) // c=3, 3<3
	{
		cout<<c[i][j]<<" "; // a[0][2]
	}
	cout<<"\n";
}
}
else
{
cout<<"Rows and columns of both matrix is not same";
}

}

