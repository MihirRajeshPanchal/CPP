//Q1.Define a class named "TShirtPlaza" having id,company size(S,M,L),quantity,price as data members.Provide addTShirt(); displayTShirt(); and valuation(); member function.
//Write a C++ Program to test the functionality of the given class by creating some instances

#include<iostream>
using namespace std;

class TShirtPlaza
{
int id,quantity;
float price,cprice;
char company[50],tshirtsize[1];

public:
    void addTShirt();
    void displayTShirt();
    void valuation();
};

void TShirtPlaza::addTShirt()
{
cout<<"\nEnter TShirt Company Name : ";
cin>>company;
cout<<"Enter TShirt ID No : ";
cin>>id;
cout<<"Enter TShirt Size (S,M,L): ";
cin>>tshirtsize;
cout<<"Enter Quantity Of TShirts : ";
cin>>quantity;
cout<<"Enter Price of 1 TShirt : ";
cin>>price;
}

void TShirtPlaza::displayTShirt()
{
cout<<"\nTShirt Company Name : "<<company<<endl;;
cout<<"TShirt ID No : "<<id<<endl;
cout<<"TShirt Size (S,M,L): "<<tshirtsize<<endl;
cout<<"Quantity Of TShirts : "<<quantity<<endl;
cout<<"Price of 1 TShirt : "<<price<<endl;
}

void TShirtPlaza::valuation()
{
cprice=price*quantity;
cout<<"\nThe Total Cost Price on Buying "<<quantity<<" "<<tshirtsize<<" sized TShirt from Company "<<company<<" is : "<<cprice<<endl;
}

int main()
{
int no,i;
cout<<"\t\t\t\tTShirt Plaza"<<endl;
cout<<"Enter The Number(Variety) of Tshirt you want to buy : ";
cin>>no;
for(i=0;i<no;i++)
{
TShirtPlaza t[100];
t[i].addTShirt();
t[i].displayTShirt();
t[i].valuation();
}
}
