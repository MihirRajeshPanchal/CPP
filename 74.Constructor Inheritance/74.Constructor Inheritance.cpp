#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
    cout<<"Welcome to A Constructor : \n";
    }
};

class B:public A
{
public:
    B()
    {
    cout<<"Welcome to B Constructor : \n";
    }
};

class C:public B
{
public:
    C()
    {
    cout<<"Welcome to C Constructor : \n";
    }
};

int main()
{
C c;
}
