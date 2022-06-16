#include <iostream>
#include <fstream>
using namespace std;
int main()
{
char ch[100];
ofstream outfile;
outfile.open("demo.txt",ios::out);
cout<<"Enter some text : ";
cin.getline(ch,sizeof(ch));
outfile<<ch;
outfile.close();
}
