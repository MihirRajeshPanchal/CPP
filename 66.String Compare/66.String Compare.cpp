#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char s1[20],s2[30],l;
cout<<"Enter a String 1 : ";
cin>>s1;
cout<<"Enter a String 2 : ";
cin>>s2;
l=strcmp(s1,s2);
if(l!=0)
{
  if(l>0)
  {
  cout<<s2<<" comes before "<<s1<<" in the Dictionary";
  }
else
  {
  cout<<s1<<" comes before "<<s2<<" in the Dictionary";
  }
}
else
  {
  cout<<"String 1 and String 2 are same";
  }
}
