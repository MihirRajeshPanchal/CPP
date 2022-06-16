#include<iostream>
using namespace std;

int main()
{
int i,j,n;
cout<<"Enter n : ";
cin>>n;
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
cout<<"*   ";
}
cout<<"\n";
}
}
