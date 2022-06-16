#include <iostream>
#include<string.h>
using namespace std;
class Media
{
 protected:
    char title[50];
    float price;
public:
    Media(char *t, float p)
    {
        strcpy(title,t);
        price=p;
    }
    virtual void display() {} // Empty virtual function

};
class Book : public Media
{
    int pages;
    public:
    Book(char *s,float p,int pgs):Media(s,p)
    {
        pages=pgs;
    }
    void display()
    {
     cout<<"Title="<<title<<endl;
     cout<<"Pages="<<pages<<endl;
     cout<<"Price="<<price<<endl;
    }
};
class DVD : public Media
{   int length;
    public:
    DVD(char *s,float p,int l):Media(s,p)
    {
        length=l;
    }
    void display()
    {
     cout<<"Title="<<title<<endl;
     cout<<"Length in Minutes="<<length<<endl;
     cout<<"Price="<<price<<endl;
    }

};

int main() {
   Media *mptr;
   Book b("Object Oriented Programming In C++",350,656);
   mptr = &b;
   cout<<"mptr is pointing to Book object b\n";
   mptr->display();

   DVD d("Fight against COVID19",150,40);
   mptr = &d;
   cout<<"mptr is pointing to DVD object d\n";
   mptr->display();
   return 0;
}


