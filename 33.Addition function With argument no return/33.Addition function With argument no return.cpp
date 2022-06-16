#include<iostream>
using namespace std;
void add(int a,int b);
int main()
{
int a,b;
cout<<"Enter the Value of A : ";
cin>>a;
cout<<"Enter the Value of B : ";
cin>>b;
add(a,b);
return 0;
}
void add(int a,int b)
{
int c;
c=a+b;
cout<<"The value of A+B is "<<c<<"";
}
