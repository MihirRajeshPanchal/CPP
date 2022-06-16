#include<iostream>
#include <math.h>
using namespace std;
int main()
{
float energy,mass,acceleration,height,velocity;
cout<<"Enter Mass of the object : ";
cin>>mass;
cout<<"Enter Acceleration of the object : ";
cin>>acceleration;
cout<<"Enter Height of the object : ";
cin>>height;
cout<<"Enter Velocity of the object : ";
cin>>velocity;
energy=mass*(acceleration*height+pow(velocity,2)/2);
cout<<"Energy calculated is "<<energy<<"";
}
