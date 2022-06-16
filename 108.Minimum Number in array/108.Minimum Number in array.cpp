#include<iostream>
using namespace std;

int main()
{
int a[10],n,i,minnumber;
cout<<"How many elements you want to enter : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter "<<n<<" Elements : ";
cin>>a[i];
minnumber=a[0];
}
for(i=1;i<n;i++)
{
if(minnumber>=a[i])
{
minnumber=a[i];
}
}
cout<<"Minimum Number in Array is : "<<minnumber<<endl;
}
