#include<iostream>
#include<string.h>
using namespace std;

class Person
{
int age;
char name[20];
public:
    setP()
    {
    cout<<"INPUT : "<<endl;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter Age : ";
    cin>>age;
    }
    getP()
    {
    cout<<"OUTPUT : "<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    }
};

class Student : private Person
{
int sem;
char id[20];
public:
    setS()
    {
    setP();
    cout<<"Enter ID : ";
    cin>>id;
    cout<<"Enter Semester No : ";
    cin>>sem;
    }
    getS()
    {
    getP();
    cout<<"Student ID : "<<id<<endl;
    cout<<"Semester No : "<<sem<<endl;
    }
};

int main()
{
Student a;
a.setS();
a.getS();
}
