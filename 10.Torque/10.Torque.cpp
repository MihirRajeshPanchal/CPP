#include<iostream>
using namespace std;
int main()
{
float m1,m2,torque;
cout<<"Enter Mass of the first object : ";
cin>>m1;
cout<<"Enter Mass of the second object : ";
cin>>m2;
torque=(2*m1*m2*9.8)/(m1+m2);
cout<<"Torque calculated is "<<torque<<"";
}
