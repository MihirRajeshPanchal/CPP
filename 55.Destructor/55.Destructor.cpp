#include<iostream>
using namespace std;

class box
{
float width,depth,height;
public:
        box();
        void getbox();
        box(float w,float h,float d);
        box(box &b);
        ~box();
};

box::~box()
{
cout<<"Object Destroyed\n";
}
box::box(box & b)
{
cout<<"\nWelcome to Copy Constructor : \n";
width=b.width;
height=b.height;
depth=b.depth;
}

box::box(float w,float h,float d)
{
cout<<"Welcome to Constructor : \n";
width=w;
height=h;
depth=d;
}
void box::getbox()
{
cout<<"Width = "<<width<<endl;
cout<<"Height = "<<height<<endl;
cout<<"Depth = "<<depth<<endl;
}

int main()
{
box b1(2.2,3.1,4.3);
b1.getbox();
box b2(b1);
b2.getbox();
}
