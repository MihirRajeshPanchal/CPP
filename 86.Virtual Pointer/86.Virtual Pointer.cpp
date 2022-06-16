#include <iostream>
#include<string.h>
using namespace std;
class Base
{
public:
    void display() {cout<<"Display Base"<<endl;}
    virtual void show() { cout<<"Show Base"<<endl; }
};
class Derived : public Base
{
    public:
    void display() {cout<<"Display Derived"<<endl;}
    void show() { cout<<"Show Derived"<<endl; }
};

int main() {
   Base *bptr;
   Base b;
   bptr = &b;
   cout<<"bptr is pointing to object b\n";
   bptr->display();
   bptr->show();

   Derived d;
   bptr = &d;
   cout<<"bptr is pointing to object d\n";
   cout<<"As the type of bptr is Base, it can call Base display() only\n";
   bptr->display();
   cout<<"As show() is virtual and bptr is having address of d,\n";
   cout<<"it can call the derived version of show()\n";
   bptr->show();
   return 0;
}
