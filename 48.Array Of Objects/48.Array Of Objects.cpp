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

void student::input()
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
    student s[10];
    int n,i;
    cout<<"Enter the Number of Students : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
    s[i].input();
    }
    for(i=0;i<n;i++)
    {
    s[i].output();
    }
}
