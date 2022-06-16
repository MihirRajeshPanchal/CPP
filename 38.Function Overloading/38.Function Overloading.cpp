#include<iostream>
using namespace std;
void display(int c);
void display(float d);
void display(int c,float d);
void display(float d,int c);

void display(int c)
{
cout<<"Integer Variable is "<<c<<"\n";
}
void display(float d)
{
cout<<"Float Variable is "<<d<<"\n";
}
void display(int c,float d)
{
cout<<"Integer Variable is "<<c<<"\n";
cout<<"Float Variable is "<<d<<"\n";
}
void display(float d,int c)
{
cout<<"Float Variable is "<<d<<"\n";
cout<<"Integer Variable is "<<c<<"\n";
}

int main()
{
int a=5;
float b=6.1;
display(a);
display(b);
display(a,b);
display(b,a);
return 0;
}
