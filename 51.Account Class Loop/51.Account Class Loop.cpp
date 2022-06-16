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
cout<<"\n";
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
cout<<"\n";
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
cout<<"\n";
}

int main()
{
    int choice,setf=0;
    char a;
    account s1;
    do
    {
    cout<<"*****MENU*****\n";
    cout<<"(1).Input\n";
    cout<<"(2).Output\n";
    cout<<"(3).Withdraw\n";
    cout<<"(4).Deposit\n";
    cout<<"(5).Exit\n";
    cout<<"\nEnter the Choice from the Menu : ";
    cin>>choice;

    switch (choice)
        {
    case 1:
         s1.input();
         setf=1;
         break;
    case 2:
         if(setf==0)
         {
          cout<<"Please Choose Option One to set The Inputs!!";
         }
         s1.output();
         break;
    case 3:
         if(setf==0)
         {
          cout<<"Please Choose Option One to set The Inputs!!";
         }
         s1.withdraw();
         break;
    case 4:
         if(setf==0)
         {
          cout<<"Please Choose Option One to set The Inputs!!";
         }
         s1.deposit();
         break;
    case 5:
         if(setf==0)
         {
          cout<<"Please Choose Option One to set The Inputs!!";
         }
        cout<<"You have successfully terminated the program.Thank You!!";
        break;
    default:
        cout<<"Invalid Choice!Please Try Again";
        break;
        }
    cout<<"Enter Y to continue the loop and N to exit the loop : ";
    cin>>a;
    cout<<"\n";
    }while((a=='Y')||(a=='y'));
}
