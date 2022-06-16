#include<iostream>
using namespace std;

void swap(int *p,int *q)
{
    cout<<"Address of P = "<<p<<endl;
    cout<<"Address of Q = "<<q<<endl;
    int temp;
    temp=*p; // temp=*&a=a=5
    *p=*q;    // a=*&b=b=6
    *q=temp;
}

int main()
{
    int a=5,b=6;
    cout<<"Address of A = "<<&a<<endl;
    cout<<"Address of B = "<<&b<<endl;
    cout<<"Before Swapping\n";
    cout<<"The Value of A = "<<a<<endl;
    cout<<"The Value of B = "<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping\n";
    cout<<"The Value of A = "<<a<<endl;
    cout<<"The Value of B = "<<b<<endl;
}
