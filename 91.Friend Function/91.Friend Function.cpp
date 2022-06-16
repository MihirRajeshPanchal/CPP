#include <iostream>
using namespace std;
class Distance
{
    private:
        int meter;
    public:
        Distance() { meter = 0;}
        //friend function
        friend int addFive(Distance);
};
// friend function definition
int addFive(Distance d)
{
    //accessing private data from non-member function
    d.meter += 5;
    return d.meter;
}
int main()
{
    Distance d;
    cout<<"Distance: "<< addFive(d);
    return 0;
}
