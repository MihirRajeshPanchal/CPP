#include<iostream>
using namespace std;
void add();
int main()
{
add();
return 0;
}
void add()
{
int a,b,c;
cout<<"Enter the Value of A : ";
cin>>a;
cout<<"Enter the Value of B : ";
cin>>b;
c=a+b;
cout<<"The value of A+B is "<<c<<"";
}
