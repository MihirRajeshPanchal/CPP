#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i,j;
char acity[10];
char temp[10];
char city[10][20]; // 10= size of array, 20= max. length of a string
cout<<"How many cities you want to enter? : ";
cin>>n;

for(i=0;i<n;i++)
{
cout<<"Enter "<<n<<" Cities : ";
cin>>city[i];
fflush(stdin);
}

for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(city[i],city[j])>0)
{
strcpy(temp,city[i]);
strcpy(city[i],city[j]);
strcpy(city[j],temp);
}
}
}

for(i=0;i<n;i++)
{
cout<<"Cities in alphabetical order are : ";
cout<<city[i]<<"\n";
fflush(stdin);
}
}
