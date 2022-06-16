#include<iostream>
using namespace std;

int main()
{
char *sptr;
char str[15];
cout<<"Enter String : ";
gets(str);
sptr=&str[0];
cout<<"Value of String : "<<sptr<<endl;
cout<<"Address of first character : "<<(void*)sptr;
}
