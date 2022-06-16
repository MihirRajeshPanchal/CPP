#include<iostream>
using namespace std;

int main()
{
int a[10],n,i,searchn,flag=0;
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
flag=1;
break;
}
}
if(flag==1)
{
cout<<"Entered Number "<<searchn<<" is found in the list\n";
}
else
{
cout<<"Entered Number "<<searchn<<" is not found in the list";
}
}
