#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i,flag=0;
char scity[10];
char city[10][20]; // 10= size of array, 20= max. length of a string
cout<<"How many cities you want to enter? : ";
cin>>n;

for(i=0;i<n;i++)
{
cout<<"Enter "<<n<<" Cities : ";
cin>>city[i];
fflush(stdin);
}
cout<<"Enter City to be searched : ";
cin>>scity;

for(i=0;i<n;i++)
{
if(strcmp(scity,city[i])==0)
{
flag=1;
break;
}
}

if(flag==1)
{
cout<<"Entered City is found in the list";
}
else
{
cout<<"Entered City is not found in the list";
}

}
