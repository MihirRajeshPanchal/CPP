#include<iostream>
using namespace std;
void avg();
int main()
{
avg();
return 0;
}
void avg()
{
int a,b,c,d;
cout<<"Enter the Value of A : ";
cin>>a;
cout<<"Enter the Value of B : ";
cin>>b;
cout<<"Enter the Value of c : ";
cin>>c;
d=(a+b+c)/3;
cout<<"The Average of A,B,C is "<<d<<"";
}
