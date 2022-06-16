#include<iostream>
using namespace std;
int main()
{
    int n,i;
    char city[10][20]; // 10= size of array, 20= max. length of a string
    cout<<"How many cities you want to enter?\n";
    cin>>n;

    for(i=0;i<n;i++)
    {
      cout<<"Enter "<<n<<" Cities : ";
      cin>>city[i];
      fflush(stdin);
    }
    cout<<"Cities Entered are\n";
    for(i=0;i<n;i++)
    {
      cout<<city[i]<<endl;
    }


}
