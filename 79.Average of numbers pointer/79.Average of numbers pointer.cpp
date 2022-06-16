#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,sum=0;
    float avg;
    cout<<"How many numbers you want to enter ? : ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers now \n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter Number "<<i+1<<": ";
        cin>>a[i];
    }
    //displaying array elements using a pointer to an array concept
    int *p;
    for(p=a;p<a+n;p++)
    {
        sum=sum+ *p;
    }
    avg=sum/n;
    cout<<"Sum of all numbers : "<<sum<<endl;
    cout<<"Average of "<<n<< " numbers : "<<avg<<endl;
}
