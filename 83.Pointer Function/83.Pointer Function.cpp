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
    float investment();
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

float product::investment()
{
return quantity*price;
}
int main()
{
/*product a,b;
a.setproduct();
a.getproduct();
float investment=a.investment();
cout<<"Investment is : ";
cout<<investment<<endl<<endl;
b.setproduct();
b.getproduct();
investment=b.investment();
cout<<"Investment is : ";
cout<<investment<<endl;*/
product p1;
product *pob=&p1;
cout<<&p1<<"\t"<<pob<<endl;
(*pob).setproduct();
(*pob).getproduct();
}
