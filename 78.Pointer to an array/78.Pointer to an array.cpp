#include<iostream>
using namespace std;

int main()
{
int a[10],n,i;
cout<<"How Many Numbers you want to enter ? : ";
cin>>n;
cout<<"Enter "<<n<<" numbers now \n";
for(i=0;i<n;i++)
{
cout<<"Enter Number "<<i+1<<": ";
cin>>a[i];
}
int *p;
cout<<"Address of first location of A = "<<&a[0]<<endl;
cout<<"Entered Numbers are as follows : \n";
for(p=&a[0];p<&a[0]+n;p++)
{
cout<<*p <<" is stored at address "<<p<<endl;
}
}
