#include<iostream>
#include<string.h>
using namespace std;

class M
{
protected:
    int m;
public:
    void setm()
    {
    cout<<"Enter Value of M : ";
    cin>>m;
    }
};

class N
{
protected:
    int n;
public:
    void setn()
    {
    cout<<"Enter Value of N : ";
    cin>>n;
    }
};

class P : public M,public N
{
public:
    void display()
    {
    cout<<"Value of M : "<<m<<endl;
    cout<<"Value of N : "<<n<<endl;
    }
};

int main()
{
P p;
p.setm();
p.setn();
p.display();
}
