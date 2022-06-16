#include<iostream>
using namespace std;
int main()
{
long code,salary,da,ta,hra,gsalary;
cout<<"Enter the employee's code : ";
cin>>code;
cout<<"Enter your basic salary : ";
cin>>salary;
da=65*salary/100;
ta=15*salary/100;
hra=45*salary/100;
gsalary=salary+da+ta+hra;
cout<<"Your gross salary is "<<gsalary<<"";
}
