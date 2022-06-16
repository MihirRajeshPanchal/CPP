#include<iostream>
using namespace std;

int main()
{
int a[10],n,i,j,temp;
cout<<"How many elements you want to enter : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter "<<n<<" Elements : ";
cin>>a[i];
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"Output : "<<endl;
for(i=0;i<n;i++)
{
cout<<"Elements in ascending form : ";
cout<<a[i]<<endl;
}
}
