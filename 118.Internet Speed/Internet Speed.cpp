#include<iostream>
using namespace std;

int main()
{
float mbps,ans;
cout<<"Enter the number of Megabits per second : ";
cin>>mbps;
ans=mbps*0.125;
cout<<endl;
if(ans>1)
{
ans=mbps*0.125;
cout<<ans<<" MB per second"<<endl;
}
else
{
ans=mbps*0.125*1000;
cout<<ans<<" KB per second"<<endl;
}
}
