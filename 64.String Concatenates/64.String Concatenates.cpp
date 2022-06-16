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
strcat(name," ");
strcat(name,sname);
cout<<"Your Full Name is : "<<name<<endl;
}
