#include<iostream>
using namespace std;

int main()
{
int a=10;
int *p;
cout<<"Address of A is :"<<&a<<endl;
cout<<"Value of A is :"<<*&a<<endl;
cout<<"Address of P is :"<<&p<<endl;
cout<<"Value of P is :"<<*&p<<endl;
p=&a;
cout<<"P is :"<<*&p<<endl;
cout<<"The value of address pointed by P :"<<*p<<endl;
*p=*p+5;
cout<<"Value of A is :"<<a<<endl;
cout<<"Value of A is :"<<*p<<endl;
}
