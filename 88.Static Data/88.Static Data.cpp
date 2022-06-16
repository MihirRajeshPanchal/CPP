#include <iostream>
#include<string.h>
using namespace std;
class StaticDemo
{
    public:
    int a; // non static data member= instance(object) variable
    static int b; //static data member=    class member variable
};
int StaticDemo::b;

int main()
{
    StaticDemo ob1,ob2;
    ob1.a=5;
    ob2.a=10;
    cout<<"Value of A Object 1 : "<<ob1.a<<endl;
    cout<<"Value of A Object 2 : "<<ob2.a<<endl;
    cout<<"static data="<<StaticDemo::b<<endl;
    cout<<ob1.b<<endl;
    cout<<ob2.b<<endl;

}
