#include<iostream>
using namespace std;

int main()
{
int i,j,n,space;
cout<<"Enter n : ";
cin>>n;
for(i=0;i<=n;i++)
{
for(space=1;space<20-i;space++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
}
