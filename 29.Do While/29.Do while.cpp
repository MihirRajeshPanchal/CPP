#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int i=1,a;
char b;
float sqrtnum;

do
{
cout<<"Enter the number: ";
cin>>a;
if(a>=0)
{
sqrtnum=sqrt(a);
cout<<"Square root of "<<a<<" is "<<sqrtnum<<"\n";
}
else
{
cout<<"Square root of negative number is imaginary\n";
continue;
}
cout<<"Press Y to continue The Loop : ";
cin>>b;
}while(b=='Y'||b=='y');
}

