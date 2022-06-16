#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char *sptr;
char s[15];
cout<<"Enter String : ";
gets(s);
sptr=&s[0];
int i;
for(i=0;i<strlen(sptr);i++)
{
cout<<"Character "<<*(sptr+i)<<" is stored at address "<<(void*)sptr+i<<endl;
}
}
