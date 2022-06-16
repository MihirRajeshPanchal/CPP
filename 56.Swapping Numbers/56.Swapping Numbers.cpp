#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    cout<<"Address of a in swap()= "<<&a<<endl;
    cout<<"Address of b in swap()= "<<&b<<endl;
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a=5,b=7;
    cout<<"Address of a in int()= "<<&a<<endl;
    cout<<"Address of b in int()= "<<&b<<endl;
    cout<<"Before swapping : \n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping : \n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
