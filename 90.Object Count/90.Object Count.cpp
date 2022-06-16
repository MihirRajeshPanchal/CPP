#include <iostream>
#include<string.h>
using namespace std;
class ObjectCount
{
    int a; // instance member
    static int count;
    public:
    ObjectCount(int x)
    {
        a=x;
        count++;
    }
    ~ObjectCount()
    {
        cout<<"desctructor called\n";
        count--;
        cout<<"\n";
    }
    static void show_count()
    {
        //cout<<"a="<<a;
        cout<<"Objects existing="<<count;
        cout<<"\n";
    }

};
int ObjectCount::count;
int main()
{
    ObjectCount::show_count();
    ObjectCount ob1(1),ob2(20);
    ObjectCount::show_count();
    cout<<"End of program\n";
}
