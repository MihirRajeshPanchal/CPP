#include<iostream>
using namespace std;
int main()
{
float h,w,bmi;
cout<<"Enter your height in metres: ";
cin>>h;
cout<<"Enter your weight in kilograms: ";
cin>>w;
bmi=w/(h*h);
if(bmi<=18.5)
{
cout<<"You fall in underweight category";
}
else if(bmi>18.5&&bmi<=24.9)
{
cout<<"You fall in normal weight category";
}
else if(bmi>25.0&&bmi<=29.9)
{
cout<<"You fall in overweight category";
}
else if(bmi>30.0&&bmi<=34.9)
{
cout<<"You fall in obesity class I category";
}
else if(bmi>35.0&&bmi<=39.9)
{
cout<<"You fall in obesity class II category";
}
else
{
cout<<"You fall in obesity class III category";
}
}
