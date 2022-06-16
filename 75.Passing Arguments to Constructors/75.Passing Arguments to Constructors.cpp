#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x)
    {
    cout<<"Welcome to A Constructor : \n";
    a=x;
    }
    void showa()
    {
    cout<<"Value of A = "<<a<<endl;
    }
};

class B:public A
{
    int b;
public:
    B(int x,int y):A(x)
    {
    cout<<"Welcome to B Constructor : \n";
    b=y;
    }
    void showb()
    {
    cout<<"Value of B = "<<b<<endl;
    }
};

int main()
{
B b(1,2);
b.showa();
b.showb();
}

