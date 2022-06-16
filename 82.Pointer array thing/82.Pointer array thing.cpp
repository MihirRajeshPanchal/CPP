#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char *p[4]={"tv","mobile","book","computer"};
    cout<<*p;
    int i;
    char str[25];
    cout<<"Enter Your Entertainment Media : ";
    cin>>str;
    int found=0;
    for(i=0;i<4;i++)
    {
        if(strcmp(str,p[i])==0)
        {
        found=1;
        break;
        }
    }
    if (found==1)
    {
    cout<<"Your Entertainment Media is in the list";
    }
    else
    {
    cout<<"Your Entertainment Media is not in the list";
    }
}
