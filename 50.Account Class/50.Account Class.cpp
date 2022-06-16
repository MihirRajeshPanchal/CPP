#include<iostream>
using namespace std;

class account
{
char name[20];
int acno,balance,tbalance,d,w;

public :
    void input();
    void output();
    void deposit();
    void withdraw();
};

void account::input()
{
cout<<"Enter Account Holder Name : ";
cin>>name;
cout<<"Enter Account Number : ";
cin>>acno;
cout<<"Enter Balance Amount : ";
cin>>balance;
}

void account::deposit()
{
cout<<"Deposit Process\n";
cout<<"Enter Deposit Amount : ";
cin>>d;
tbalance=balance+d;
cout<<"Total Money in Account : ";
cout<<tbalance;
}

void account::withdraw()
{
cout<<"\nWithdraw Process\n";
cout<<"Enter Withdraw Amount : ";
cin>>w;
tbalance=balance-w;
if(tbalance<500)
{
cout<<"You cannot withdraw !!Balance amount in account is less than 500";
}
else
{
tbalance=balance-w;
cout<<"Total Money in Account : ";
cout<<tbalance;
}
}

void account::output()
{
cout<<"\nAccount Holder Name : ";
cout<<name<<endl;
cout<<"Account Number : ";
cout<<acno<<endl;
cout<<"Balance Amount : ";
cout<<balance<<"\n";
}

int main()
{
    int choice;
    account s1;
    s1.input();
    s1.output();
    cout<<"(1).Withdraw\n";
    cout<<"(2).Deposit\n";
    cout<<"(3).Exit\n";
    cout<<"\nEnter the Choice from the Menu : ";
    cin>>choice;
    switch (choice)
        {
    case 1:
         s1.withdraw();
         break;
    case 2:
         s1.deposit();
         break;
    case 3:
        cout<<"You have successfully terminated the program.Thank You!!";
        break;
    default:
        cout<<"Invalid Choice!Please Try Again";
        }
}
