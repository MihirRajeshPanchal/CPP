#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char name[10],sname[20];
cout<<"Enter Your Name : ";
cin>>name;
strcpy(sname,name);
cout<<"Copied string : ";
cout<<sname;
}

