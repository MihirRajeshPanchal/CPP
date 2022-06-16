#include<iostream>
using namespace std;

class UnaryMinus
{
int x,y;

public :
    void input()
    {
    cout<<"Enter Value of X : ";
    cin>>x;
    cout<<"Enter Value of Y : ";
    cin>>y;
    }
    void output()
    {
    cout<<"Value of X : "<<x<<endl;
    cout<<"Value of Y : "<<y<<endl;
    }
    void operator- ();
};
void UnaryMinus::operator- ()
{
x=-x;
y=-y;
}

int main()
{
UnaryMinus a,b;
a.input();
-a;
a.output();
b.input();
-b;
b.output();
}
