#include<iostream>
#include<string.h>
using namespace std;

class A
{
int a;

public:
    int b;
    void setab();
    int geta();
    void showa();
};
void A::setab()
{
cout<<"Enter Value of A : ";
cin>>a;
cout<<"Enter Value of B : ";
cin>>b;
}

int A::geta()
{
return a;
}

void A::showa()
{
cout<<"A = "<<a<<endl;
}

class B:public A
{
int c;
public:
void mul();
void display();
};

void B::mul()
{
c=b*geta();
}

void B::display()
{
cout<<"A = "<<geta()<<endl;
cout<<"B = "<<b<<endl;
cout<<"C = "<<c<<endl;
}

int main()
{
B b;
b.setab();
b.mul();
b.showa();
b.display();

b.b=20;
b.mul();
b.display();
}
