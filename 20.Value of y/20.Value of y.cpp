#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int x,y;
cout<<"Enter the value of x : ";
cin>>x;

if(x<0)
{
y=pow(x,2)+1;
cout<<"Value of Y is "<<y<<"";
}
else if(x>0)
{
y=2*x+3;
cout<<"Value of Y is "<<y<<"";
}
else
{
y=4*x+3;
cout<<"Value of Y is "<<y<<"";
}
}
