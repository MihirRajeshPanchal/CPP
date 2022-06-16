#include<iostream>
using namespace std;

int main()
{
int a[10],n,i;
cout<<"How many elements you want to enter : ";
cin>>n;
cout<<"Enter "<<n<<" Elements\n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<n<<" elements are as below:\n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
}
