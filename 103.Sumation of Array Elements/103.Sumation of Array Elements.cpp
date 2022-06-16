#include<iostream>
using namespace std;

int main()
{
int a[10],n,i,sum=0;
cout<<"How many elements you want to enter : ";
cin>>n;

for(i=0;i<n;i++)
{
cout<<"Enter "<<n<<" Elements : ";
cin>>a[i];
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"Sum of "<<n<<" elements is  : "<<sum;
}
