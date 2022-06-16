#include<iostream>
using namespace std;
class student
{
char name[20];
int sem,n,i;
int sub[3];
public:
void input();
void output();
float avg();
};
float student::avg()
{
 int i,sum=0;
 for(i=0;i<3;i++)
 {
     sum=sum+sub[i];
 }
 return (sum/3.0);
}
void student::input()
{
cout<<"Enter Student Name : ";
cin>>name;
cout<<"Enter Semester Number : ";
cin>>sem;
int i;
for(i=0;i<3;i++)
{
    cout<<"Enter marks of 3 subjects : ";
    cin>>sub[i];
}
}
void student::output()
{
cout<<"Student Name : ";
cout<<name<<endl;
cout<<"Semester Number : ";
cout<<sem<<endl;
int i;
for(i=0;i<3;i++)
{
    cout<<"Marks of 3 subject : ";
    cout<<sub[i]<<endl;
}
}
int main()
{
int n,i;
 student s[10];

    cout<<"Enter the Number of Students : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nINPUT : "<<i+1<<"\n";
        s[i].input();
    }
    cout<<"\n**********Student details**********";
    for(i=0;i<n;i++)
    {
        cout<<"\nOUTPUT : "<<i+1<<"\n";
        s[i].output();
        cout<<"\nAverage marks : ";
        float avg=s[i].avg();
        cout<<avg<<endl;

    }
}
