#include<iostream>
#include<string.h>
using namespace std;
class StrAdd
{
    //data member
    char str[30];
public:
    void setStr()
    {
        cout<<"Enter the string : ";
        cin>>str;
    }
    void getStr()
    {
        cout<<"String Entered : "<<str<<endl;
    }
    StrAdd operator+(StrAdd s2);
};
StrAdd StrAdd::operator+(StrAdd s2)
{
    StrAdd ans;  //will store the result
    //copy str of s1 to str of ans
    strcpy(ans.str,str);
    strcat(ans.str,s2.str);
    return ans;
}
int main()
{
    StrAdd s1,s2,s3;
    s1.setStr();
    s2.setStr();
    s1.getStr();
    s2.getStr();
    s3=s1+s2;
    s3.getStr();
}
