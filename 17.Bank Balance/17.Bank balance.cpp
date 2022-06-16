#include<iostream>
using namespace std;
#include <math.h>
int main()
{
float accountno,age,balance,interest,fbalance;
char gender;
cout<<"Enter Account Number : ";
cin>>accountno;
cout<<"Enter Age : ";
cin>>age;
cout<<"Enter Balance : ";
cin>>balance;
cout<<"Enter Gender (m/f) : ";
cin>>gender;

if((gender=='m')||(gender=='M'))
{
if(age<60)
{
interest=(4*balance)/100;
}
else
{
interest=(7*balance)/100;
}
}
else if((gender=='f')||(gender=='F'))
{
if(age<60)
{
interest=(5*balance)/100;
}
else
{
interest=(7*balance)/100;
}
}
fbalance=balance+interest;
cout<<"Total interest is "<<interest<<"\n";
cout<<"Total bank balance is "<<fbalance<<"";
}
