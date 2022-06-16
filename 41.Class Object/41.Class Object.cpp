#include<iostream>
using namespace std;

class student
{
char name[20];
int sem;

public :
    void input();
    void output();
};

inline void student::input()
{
cout<<"Enter Student Name : ";
cin>>name;
cout<<"Enter Semester Number : ";
cin>>sem;
}
void student::output()
{
cout<<"\nStudent Name : ";
cout<<name<<endl;
cout<<"Semester Number : ";
cout<<sem<<endl<<endl;
}
int main()
{
    student s1;
    s1.input();
    s1.output();
    student s2;
    s1.input();
    s1.output();
}
