#include<iostream>
#include <math.h>
using namespace std;
int main()
{
long bsal=15000,n,commission,bonussal,gsal;
cout<<"Enter the number of computers : ";
cin>>n;
bonussal=2000*n;
commission=2*bonussal/100;
gsal=commission+bonussal+bsal;
cout<<"Basic salary is "<<bsal<<"\n";
cout<<"Bonus salary is "<<bonussal<<"\n";
cout<<"Commission is "<<commission<<"\n";
cout<<"Gross salary is "<<gsal<<"\n";
}











