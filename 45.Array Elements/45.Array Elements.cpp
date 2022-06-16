#include<iostream>
using namespace std;

int main()
{
int a[10],i,n;
cout<<"Enter The Number of Elements : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter The Elements : ";
cin>>a[i];
}
for(i=0;i<n;i++)
{
cout<<"Entered Elements are : ";
cout<<a[i]<<"\n";
}
}
