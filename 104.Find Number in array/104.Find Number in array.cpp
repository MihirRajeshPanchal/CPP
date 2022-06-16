#include<iostream>
using namespace std;

int main()
{
int a[10],n,i,searchn;
cout<<"How many elements you want to enter : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter "<<n<<" Elements : ";
cin>>a[i];
}
cout<<"Enter Number to be searched : ";
cin>>searchn;
for(i=0;i<n;i++)
{
if(searchn==a[i])
{
cout<<"Entered Number "<<searchn<<" is found in the list\n";
}
}
}
