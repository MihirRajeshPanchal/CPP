#include<iostream>
using namespace std;

float area(int r);
float area(int b,int l);
float area(int base,int h);

inline float area(int r)
{
float area=3.14*r*r;
cout<<"Area of circle is "<<area<<"";
return area;
}

inline float area(int b,int l)
{
float area=l*b;
cout<<"Area of rectangle is "<<area<<"";
return area;
}

inline float area(int base,float h)
{
float area=0.5*base*h;
cout<<"Area of triangle is "<<area<<"";
return area;
}

int main()
{
int choice;
float a;
cout<<"*******MENU*******\n";
cout<<"(1).Area of Circle\n";
cout<<"(2).Area of Rectangle\n";
cout<<"(3).Area of Triangle\n";
cout<<"Enter the choice from menu : ";
cin>>choice;

switch(choice)
{
case 1:
    int r;
    cout<<"Enter the radius of Circle : ";
    cin>>r;
    a=area(r);
    break;
case 2:
    int b,l;
    cout<<"Enter the Length of Rectangle : ";
    cin>>l;
    cout<<"Enter the Breadth of Rectangle : ";
    cin>>b;
    a=area(l,b);
    break;
case 3:
    int base;
    float h;
    cout<<"Enter the Base of Triangle : ";
    cin>>base;
    cout<<"Enter the Height of Triangle : ";
    cin>>h;
    a=area(base,h);
    break;
default:
    cout<<"Invalid input";
    break;
}
}
