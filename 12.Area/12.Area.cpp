#include<iostream>
#include <math.h>
using namespace std;
#define PI 3.14
int main()
{
float radius,height,area;
cout<<"Enter Radius of the object : ";
cin>>radius;
cout<<"Enter Height of the object : ";
cin>>height;
area=(PI*pow(radius,2))+(2*PI*radius*height);
cout<<"Area calculated is "<<area<<"";
}
