#include<iostream>
using namespace std;

class Minus
{
int x,y;

public :
    void input()
    {
    cout<<"Enter Value of X : ";
    cin>>x;
    }
    void output()
    {
    cout<<"Value of X (Pre decrement): "<<x<<endl;
    cout<<"Value of X (Post decrement): "<<x<<endl;
    }
    void operator- ();
};
void Minus::operator- ()
{
x=--x;
x=x--;
}

int main()
{
Minus a,b;
a.input();
-a;
a.output();
b.input();
-b;
b.output();
}
