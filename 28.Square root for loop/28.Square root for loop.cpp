#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int i=1,n,a;
float sqrtnum;
cout<<"Enter number of Repetitions: ";
cin>>n;
for(i=1;i<=n;i++)
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
cout<<"Iteration Number = "<<i<<"\n";

}
cout<<i;
}
