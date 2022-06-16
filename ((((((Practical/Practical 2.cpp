//Q2.Write A C++ Program to overload Binary '%' operator using friend function

#include<iostream>
using namespace std;

class Modulus
{
private:
    int x;
public:
    void input();
    void output();
    friend Modulus operator %(Modulus,Modulus);
};
void Modulus::input()
    {
    cout<<"Enter The Number: ";
    cin>>x;
    }
void Modulus::output()
    {
    cout<<"Value of Number : "<<x<<endl;
    }
Modulus operator %(Modulus a,Modulus b)
{
Modulus c;
c.x=a.x%b.x;
}

int main()
{
Modulus a,b;
a.input();
b.input();
cout<<"Value of Number in Object 1"<<endl;
a.output();
cout<<"Value of Number in Object 2"<<endl;
b.output();
Modulus d=a%b;
cout<<"Value of X And Y after calling operator overloading friend function % : "<<endl;
d.output();
}
