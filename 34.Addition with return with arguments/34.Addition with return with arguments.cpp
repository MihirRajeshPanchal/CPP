#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
int a,b;
cout<<"Enter the Value of A : ";
cin>>a;
cout<<"Enter the Value of B : ";
cin>>b;
int c=add(a,b);
cout<<"The value of A+B is "<<c<<"";
return 0;
}
int add(int a,int b)
{
int c;
c=a+b;
}
