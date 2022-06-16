#include<iostream>
using namespace std;

int main()
{
int a[10],n,i,maxnumber;
cout<<"How many elements you want to enter : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter "<<n<<" Elements : ";
cin>>a[i];
maxnumber=a[0];
}
for(i=1;i<n;i++)
{
if(maxnumber<=a[i])
{
maxnumber=a[i];
}
}
cout<<"Maximum Number in Array is : "<<maxnumber<<endl;
}
