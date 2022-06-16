#include<iostream>
using namespace std;
#include <math.h>
int main()
{
float a,s;
cout<<"Enter a number : ";
cin>>a;
s=sqrt(a);
if(a>=0)
{
cout<<"Square root of "<<a<<" is "<<s<<"";
}
else
{
cout<<"Square root of a negative number is not possible";
}
}
