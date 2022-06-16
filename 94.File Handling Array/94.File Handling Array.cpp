#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main () {
  ofstream outfile;
  ifstream infile;
  char str[50],ch;
  int i;
  cout<<"Enter the string to be written to the file\n";
  gets(str); // It considers space in the string
  outfile.open("demo1.txt",ios::out);
  for(i=0;i<strlen(str);i++)
  {
      outfile.put(str[i]);
  }
  outfile.close();
  infile.open ("demo1.txt",ios::in);
  cout<<"Data read from the file is:\n";
  while(infile) // reads file till end of file
  {
      ch=infile.get();
      cout<<ch;
  }
  infile.close();
  cout<<endl;
}
