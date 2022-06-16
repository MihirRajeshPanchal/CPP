#include<iostream>
using namespace std;
int main()
{
int jno,lno,bsal,gsal,perks,ca,ea,a;
float tax,nsal,hra;
cout<<"Enter the Executive's Job Number: ";
cin>>jno;
cout<<"Enter the Level Number: ";
cin>>lno;
cout<<"Enter the Basic Salary: ";
cin>>bsal;

switch(lno)
{
case 1:
    ca=1000;
    ea=500;
    perks=ca+ea;
    hra=25*(bsal+perks)/100;
    gsal=bsal+hra+perks;
    break;
case 2:
    ca=750;
    ea=200;
    perks=ca+ea;
    hra=25*(bsal+perks)/100;
    gsal=bsal+hra+perks;
    break;
case 3:
    ca=500;
    ea=100;
    perks=ca+ea;
    hra=25*(bsal+perks)/100;
    gsal=bsal+hra+perks;
    break;
case 4:
    ca=250;
    ea=0;
    perks=ca+ea;
    hra=25*(bsal+perks)/100;
    gsal=bsal+hra+perks;
    break;
default:
    cout<<"Entered Level Number is invalid\n";
}

if(gsal<=2000)
{
tax=0;
nsal=gsal-tax;
cout<<"Net Salary is "<<nsal<<"";
}
else if(gsal<=4000&&gsal>2000)
{
tax=3*gsal/100;
nsal=gsal-tax;
cout<<"Net Salary is "<<nsal<<"";
}
else if(gsal<=5000&&gsal>4000)
{
tax=5*gsal/100;
nsal=gsal-tax;
cout<<"Net Salary is "<<nsal<<"";
}
else
{
tax=8*gsal/100;
nsal=gsal-tax;
cout<<"Net Salary is "<<nsal<<"";
}
}
