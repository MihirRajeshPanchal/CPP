#include<iostream>
using namespace std;

struct student
{
char name[20];
int sem;
};

int main()
{
student s1;
cout<<"Enter Student Name : ";
cin>>s1.name;
cout<<"Enter Semester : ";
cin>>s1.sem;
}
