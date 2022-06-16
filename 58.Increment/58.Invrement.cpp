#include<iostream>
using namespace std;

class Plus
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
    cout<<"Value of X (Pre increment): "<<x<<endl;
    cout<<"Value of X (Post Increment): "<<x<<endl;
    }
    void operator- ();
};
void Plus::operator- ()
{
x=++x;
x=x++;
}

int main()
{
Plus a,b;
a.input();
-a;
a.output();
b.input();
-b;
b.output();
}
