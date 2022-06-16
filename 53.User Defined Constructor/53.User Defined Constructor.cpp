#include<iostream>
using namespace std;

class box
{
float width,depth,height;
public:
        box();
        void getbox();
};
box::box()
{
width=2;
height=0;
depth=0;
}
void box::getbox()
{
cout<<"Width = "<<width<<endl;
cout<<"Height = "<<height<<endl;
cout<<"Depth = "<<depth<<endl;
}

int main()
{
box b1;
b1.getbox();
}
