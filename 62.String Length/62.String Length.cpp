#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char name[20],sname[30];
cout<<"Enter Your Name : ";
cin>>name;
cout<<"Enter Your Surname : ";
cin>>sname;
cout<<"Length of Your Name : "<<strlen(name)<<endl;
cout<<"Length of Your Surname : "<<strlen(sname)<<endl;
}
