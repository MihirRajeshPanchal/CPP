#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

class polar
{
float x,y;
double z;
float r,th;
public:
    void setp()
    {
    cout<<"Enter Cartesian Values : "<<endl;
    cout<<"Enter value of X : ";
    cin>>x;
    cout<<"Enter value of Y : ";
    cin>>y;
    }

    void calculation()
    {
    th=y/x;
    z=atan(th);
    z=z*180/3.1415;
    r=sqrt(x*x+y*y);
    }

    void getp()
    {
        cout<<"Polar Form : ";
    cout<<r<<"(cos" <<round(z)<<" + isin" <<round(z)<<")\n";
    }

};
int main()
{
polar a;
a.setp();
a.calculation();
a.getp();
}
