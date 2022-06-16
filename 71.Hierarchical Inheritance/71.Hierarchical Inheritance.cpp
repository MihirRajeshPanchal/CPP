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

class Student : public Person
{
int sem;
char id[20];
public:
    setS()
    {
    cout<<"Enter ID : ";
    cin>>id;
    cout<<"Enter Semester No : ";
    cin>>sem;
    }
    getS()
    {
    cout<<"Student ID : "<<id<<endl;
    cout<<"Semester No : "<<sem<<endl;
    }
};

class employee:public Person
{
int id,exp,basic;
public:
    void sete()
    {
    cout<<"Enter ID : ";
    cin>>id;
    cout<<"Enter Years of Experience : ";
    cin>>exp;
    cout<<"Enter Basic Salary : ";
    cin>>basic;
    }
    void gete()
    {
    cout<<"Employee ID : "<<id<<endl;
    cout<<"Years of Experience: "<<exp<<endl;
    cout<<"Basic Salary : "<<basic<<endl;
    }
    float calgross();
};

float employee::calgross()
{
float gsal=basic*0.25+basic+0.74*basic;
return gsal;
}

int main()
{
Student a;
cout<<"Student\n";
a.setP();
a.setS();
a.getP();
a.getS();

employee e1;
cout<<"\nEmployee\n";
e1.setP();
e1.sete();
e1.getP();
e1.gete();
cout<<"Gross Salary = "<<e1.calgross()<<endl;
}
