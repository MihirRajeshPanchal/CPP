#include <iostream>
#include <fstream>
using namespace std;
int main()
{
char ch;
ofstream outfile;
outfile.open("demo.txt",ios::out);
outfile.close();
ifstream infile;
infile.open ("demo.txt",ios::in);
while(infile)
{
ch=infile.get();
cout<<ch;
}
infile.close();
}
