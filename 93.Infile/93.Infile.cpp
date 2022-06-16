#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream infile;
infile.open("demo.txt",ios::in);
char filedata[100];
infile.getline(filedata,sizeof(filedata));
cout<<"Data read from the file = \n"<<filedata<<endl;
infile.close();
}
