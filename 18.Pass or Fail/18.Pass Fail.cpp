#include<iostream>
using namespace std;
int main()
{
unsigned int rno,marks;
cout<<"Enter the Roll No of student : ";
cin>>rno;
cout<<"Enter the Mark obtained by student : ";
cin>>marks;
if(marks<=100&&marks>=80)
{
cout<<"Grade obtained is Excellent";
}
else if(marks<=79&&marks>=70)
{
cout<<"Grade obtained is Distinction";
}
else if(marks<=69&&marks>=60)
{
cout<<"Grade obtained is First";
}
else if(marks<=59&&marks>=50)
{
cout<<"Grade obtained is Second";
}
else if(marks<=49&&marks>=40)
{
cout<<"Grade obtained is Pass";
}
else if(marks<=39&&marks>=0)
{
cout<<"Grade obtained is Fail";
}
}
