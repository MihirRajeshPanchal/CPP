#include<iostream>
using namespace std;

int main()
{
int a[10],i,n,sum=0;
cout<<"Enter The Number of Elements : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter The Elements : ";
cin>>a[i];
sum=sum+a[i];
}
cout<<"Sum of All Numbers Entered is : "<<sum;
}
