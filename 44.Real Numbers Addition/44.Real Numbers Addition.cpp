#include<iostream>
using namespace std;

class complex
{
int real,img;
public:
void setcomp();
void getcomp();
complex addcomp(complex b);
};

void complex::setcomp()
{
cout<<"Enter The Real Part of Complex Number : ";
cin>>real;
cout<<"Enter The Imaginary Part of Complex Number : ";
cin>>img;
}

void complex::getcomp()
{
cout<<"Addition of Two Real Numbers is : "<<real<<" + "<<img<<"i"<<endl;
}

complex complex::addcomp(complex b)
{
complex ans;
ans.real=real+b.real;
ans.img=img+b.img;
return ans;
}
int main()
{
complex a,b;
a.setcomp();
b.setcomp();
a.getcomp();
b.getcomp();
complex c=a.addcomp(b);
c.getcomp();
}
