#include<iostream>
using namespace std;

int main()
{
int i,j,n,space;
cout<<"Enter n : ";
cin>>n;
for(i=0;i<n;i++)
{
for(space=1;space<n-i;space++)
{
cout<<" ";
}
for(j=0;j<=i;j++)
{
cout<<"* ";
}
cout<<"\n";
}
}
