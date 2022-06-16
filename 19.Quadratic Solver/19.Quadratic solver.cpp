#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int a,b,c;
float r1,r2,delta;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
cout<<"Enter the value of c : ";
cin>>c;

delta=b*b-4*a*c;

if(delta<0)
{
cout<<"Roots are imaginary";
}
else if(delta>0)
{
r1=(-b+sqrt(delta))/2*a;
r2=(-b-sqrt(delta))/2*a;
cout<<"Root 1 of the quadratic equation is "<<r1<<"\n";
cout<<"Root 2 of the quadratic equation is "<<r2<<"";
}
else if(delta=0)
{
r1=(-b)/2*a;
cout<<"Root 1 of the quadratic equation is "<<r1<<"";
}
}
