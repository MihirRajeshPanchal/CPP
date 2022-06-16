#include<iostream>
using namespace std;
int main()
{
char choice;
cout<<"*******MENU*******\n";
cout<<"(R).RED\n";
cout<<"(Y).YELLOW\n";
cout<<"(B).BLACK\n";
cout<<"(W).WHITE\n";
cout<<"Enter the choice from menu : ";
cin>>choice;

switch(choice)
{
case 'R':
        cout<<"RED";
        break;
case 'r':
        cout<<"RED";
        break;
case 'Y':
        cout<<"YELLOW";
        break;
case 'y':
        cout<<"YELLOW";
        break;
case 'B':
        cout<<"BLACK";
        break;
case 'b':
        cout<<"BLACK";
        break;
case 'W':
        cout<<"WHITE";
        break;
case 'w':
        cout<<"WHITE";
        break;
default:
        cout<<"Choose correct color";
}
}
