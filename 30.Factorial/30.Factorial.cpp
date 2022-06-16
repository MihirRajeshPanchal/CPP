#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int i,num,fact=1;
cout<<"Enter the number : ";
cin>>num;
for (i=num; i>=1;i--)
{
fact=fact*i;
}
cout<<"Factorial of "<<num<<" is "<<fact<<"";
}
