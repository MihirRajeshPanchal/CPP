#include<iostream>
using namespace std;

float si(int p,int n,float r=0.04)
{
return p*r*n;
}
int main()
{
int p,n;
float r=0.04;
float si(int p,int n,float r=0.04);
cout<<"Enter the Value of Principal : ";
cin>>p;
cout<<"Enter the Value of Time : ";
cin>>n;
cout<<"Simple interest = "<<si(p,n,r);
return 0;
}


