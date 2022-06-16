#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
int rollno;

public:
    void setroll()
    {
    cout<<"INPUT : \n";
    cout<<"Enter Roll No : ";
    cin>>rollno;
    }
    int getroll()
    {
    cout<<"OUTPUT : \n";
    cout<<"Entered Roll No. : "<<rollno<<endl;
    }
};

class Test : public student
{
protected:
int s1,s2;
public:
void setmarks()
{
cout<<"Enter Marks of Subject 1 : ";
cin>>s1;
cout<<"Enter Marks of Subject 2 : ";
cin>>s2;
}
void getmarks()
{
cout<<"Marks of Subject 1 : ";
cout<<s1<<endl;
cout<<"Marks of Subject 2 : ";
cout<<s2<<endl;
}
};

class Result: public Test
{
int total;
float avg;
public:
void dresult()
{
total=s1+s2;
avg=total/2.0;
cout<<"Total Marks Obtained : "<<total<<endl;
cout<<"Average Marks Obtained : "<<avg<<endl;
}
};

int main()
{
Result a;
a.setroll();
a.setmarks();
a.getroll();
a.getmarks();
a.dresult();
}
