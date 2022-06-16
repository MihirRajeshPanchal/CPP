#include<iostream>
#include<string.h>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
    cout<<"Value of B : "<<b<<endl;
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
    cout<<"Value of B : "<<b<<endl;
    cout<<"Value of D : "<<d<<endl;
    }
};

int main()
{
BC *bptr;
BC base;
bptr = &base;
cout<<"bptr points to object base\n";
bptr->b=100;
bptr->show();

DC derived;
bptr = &derived;
cout<<"bptr points to object derived\n";
cout<<"It can only access the public members inherited by BC i.e only b\n";
bptr->b=200;
cout<<"Value of B : "<<bptr->b<<endl;

cout<<"Using Casting Concept a base pointer can access the members of derived class \n";
((DC *)bptr)->d=400;
((DC *)bptr)->show();
}
