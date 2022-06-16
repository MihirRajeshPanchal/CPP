#include<iostream>
using namespace std;

class product
{
char name[20];
int code;
int quantity;
float price;

public :
    void setproduct();
    void getproduct();
};

void product::setproduct()
{
cout<<"Enter Product Code : ";
cin>>code;
cout<<"Enter Product Name : ";
cin>>name;
cout<<"Enter Quantity of Product : ";
cin>>quantity;
cout<<"Enter Price of the Product : ";
cin>>price;
}

void product::getproduct()
{
cout<<"\nProduct Code : ";
cout<<code<<endl;
cout<<"Product Name : ";
cout<<name<<endl;
cout<<"Quantity of Product : ";
cout<<quantity<<endl;
cout<<"Price of the Product : ";
cout<<price<<endl<<endl;
}
int main()
{
product a;
a.setproduct();
a.getproduct();
}
