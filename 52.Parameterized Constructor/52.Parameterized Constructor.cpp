#include<iostream>
using namespace std;

class box
{
float width,depth,height;
public:
        box();
        void getbox();
        box(float w,float h,float d);
        box(float val);
};
box::box(float w,float h,float d)
{
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

box::box(float val)
{
width=val;
height=val;
depth=val;
}

int main()
{
box b1(2.2,3.1,4.3);
b1.getbox();
box b2(1.4);
b2.getbox();
}
