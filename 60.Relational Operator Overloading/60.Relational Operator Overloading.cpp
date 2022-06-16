#include<iostream>
using namespace std;

class Relational
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
    void seta();
    int operator==(Relational b);
};
int Relational::operator==(Relational b)
{
if((x==b.x) &&(y==b.y))
{
return 1;
}
else
{
return 0;
}
}

int main()
{
Relational a,b;
a.input();
b.input();
a.output();
b.output();

if(a==b)
{
cout<<"Strings have same value";
}
else
{
cout<<"Strings don't have same value";
}
}
