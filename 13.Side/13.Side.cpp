#include<iostream>
#include <math.h>
using namespace std;
int main()
{
float side,a,b,x;
cout<<"Enter Value of A : ";
cin>>a;
cout<<"Enter Value of B : ";
cin>>b;
cout<<"Enter Value of X : ";
cin>>x;
side=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(x));
cout<<"Side calculated is "<<side<<"";
}
