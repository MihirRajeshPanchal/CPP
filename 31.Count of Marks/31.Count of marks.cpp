#include<iostream>
using namespace std;
int main()
{
int marks,n,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,i;
cout<<"Enter the number of students : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter the marks of students : ";
cin>>marks;
if(marks<=100&&marks>=80)
{
cout<<"Grade obtained is Excellent\n";
c1=c1+1;
}
else if(marks<=79&&marks>=70)
{
cout<<"Grade obtained is Distinction\n";
c2=c2+1;
}
else if(marks<=69&&marks>=60)
{
cout<<"Grade obtained is First\n";
c3=c3+1;
}
else if(marks<=59&&marks>=50)
{
cout<<"Grade obtained is Second\n";
c4=c4+1;
}
else if(marks<=49&&marks>=40)
{
cout<<"Grade obtained is Pass\n";
c5=c5+1;
}
else if(marks<=39&&marks>=0)
{
cout<<"Grade obtained is Fail\n";
c6=c6+1;
}
}
cout<<"The Number of Student Falling in Excellent Class are "<<c1<<"\n";
cout<<"The Number of Student Falling in Distinction Class are "<<c2<<"\n";
cout<<"The Number of Student Falling in First Class are "<<c3<<"\n";
cout<<"The Number of Student Falling in Second Class are "<<c4<<"\n";
cout<<"The Number of Student Falling in Pass Class are "<<c5<<"\n";
cout<<"The Number of Student Falling in Fail Class are "<<c6<<"\n";
}
