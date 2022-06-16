#include<iostream>
#include<string.h>
using namespace std;

class Marvel
{
int hpa,hpv,a,b;
char choice;
char na[100],nv[100];
char cana1[100],cana2[100],cana3[100],cana4[100];
char cvnv1[100],cvnv2[100],cvnv3[100],cvnv4[100];
int caa1,caa2,caa3,caa4;
int cvv1,cvv2,cvv3,cvv4;
public:
    Marvel();
    void setchar();
    void getchar();
    void fight();
    ~Marvel();
};
Marvel::~Marvel()
{
cout<<"\nObject Destroyed";
}
Marvel::Marvel()
{
cout<<"\t\t\t\tMarvel Avengers Fighting Simulator Game \n";
}
void Marvel::setchar()
{
    cout<<"Customize Avenger : "<<endl;
    cout<<"Enter Avenger Name : ";
    cin>>na;
    cout<<"Enter Avenger Hitpoints (Number): ";
    cin>>hpa;
    cout<<"Enter Name of Attack 1 : ";
    cin>>cana1;
    cout<<"Enter Damage of Attack 1 (Number): ";
    cin>>caa1;
    cout<<"Enter Name of Attack 2 : ";
    cin>>cana2;
    cout<<"Enter Damage of Attack 2 (Number): ";
    cin>>caa2;
    cout<<"Enter Name of Attack 3 : ";
    cin>>cana3;
    cout<<"Enter Damage of Attack 3 (Number): ";
    cin>>caa3;
    cout<<"Enter Name of Attack 4 : ";
    cin>>cana4;
    cout<<"Enter Damage of Attack 4 (Number): ";
    cin>>caa4;
    cout<<"\nCustomize Avenger : "<<endl;
    cout<<"Enter Villain Name : ";
    cin>>nv;
    cout<<"Enter Villain Hitpoints (Number): ";
    cin>>hpv;
    cout<<"Enter Name of Attack 1 : ";
    cin>>cvnv1;
    cout<<"Enter Damage of Attack 1 (Number): ";
    cin>>cvv1;
    cout<<"Enter Name of Attack 2 : ";
    cin>>cvnv2;
    cout<<"Enter Damage of Attack 2 (Number): ";
    cin>>cvv2;
    cout<<"Enter Name of Attack 3 : ";
    cin>>cvnv3;
    cout<<"Enter Damage of Attack 3 (Number): ";
    cin>>cvv3;
    cout<<"Enter Name of Attack 4 : ";
    cin>>cvnv4;
    cout<<"Enter Damage of Attack 4 (Number): ";
    cin>>cvv4;
}

void Marvel::getchar()
{
    cout<<"\n"<<na<<"'s Base HP : "<<hpa<<""<<endl;
    cout<<""<<na<<" Attacks :\n";
    cout<<"(1)"<<cana1<<" (Damage : "<<caa1<<")"<<endl;
    cout<<"(2)"<<cana2<<" (Damage : "<<caa2<<")"<<endl;
    cout<<"(3)"<<cana3<<" (Damage : "<<caa3<<")"<<endl;
    cout<<"(4)"<<cana4<<" (Damage : "<<caa4<<")"<<endl<<endl;

    cout<<"\n"<<nv<<"'s Base HP : "<<hpv<<""<<endl;
    cout<<""<<nv<<" Attacks :\n";
    cout<<"(1)"<<cvnv1<<" (Damage : "<<cvv1<<")"<<endl;
    cout<<"(2)"<<cvnv2<<" (Damage : "<<cvv2<<")"<<endl;
    cout<<"(3)"<<cvnv3<<" (Damage : "<<cvv3<<")"<<endl;
    cout<<"(4)"<<cvnv4<<" (Damage : "<<cvv4<<")"<<endl<<endl;
}
void Marvel::fight()
{
    cout<<"\n"<<na<<" VS "<<nv<<"\n"<<endl;
    cout<<na<<" Attacks\n";
    cout<<"(1)"<<cana1<<endl;
    cout<<"(2)"<<cana2<<endl;
    cout<<"(3)"<<cana3<<endl;
    cout<<"(4)"<<cana4<<endl;
    cout<<"\n"<<na<<"'s Base HP : "<<hpa<<endl;
    cout<<nv<<"'s Base HP : "<<hpv<<endl;
    while(hpa>0 ||hpv>0)
    {
    cout<<"\nEnter Attack Choice : ";
    cin>>choice;
    switch (choice)
    {
    case '1':
    hpa=hpa-cvv1;
    hpv=hpv-caa1;
    a=hpv;
    b=hpa;
    cout<<"\n"<<na<<" Used "<<cana1<<"\n";
    if(a<0)
    {
    cout<<nv<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<nv<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<nv<<" used "<<cvnv1<<"\n";
    if(b<0)
    {
    cout<<na<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<na<<"'s HP left : "<<hpa<<endl;
    }
    break;

    case '2':
    hpa=hpa-cvv2;
    hpv=hpv-caa2;
    a=hpv;
    b=hpa;
    cout<<"\n"<<na<<" Used "<<cana2<<"\n";
    if(a<0)
    {
    cout<<nv<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<nv<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<nv<<" used "<<cvnv2<<"\n";
    if(b<0)
    {
    cout<<na<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<na<<"'s HP left : "<<hpa<<endl;
    }
    break;

    case '3':
    hpa=hpa-cvv3;
    hpv=hpv-caa3;
    a=hpv;
    b=hpa;
    cout<<"\n"<<na<<" Used "<<cana3<<"\n";
    if(a<0)
    {
    cout<<nv<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<nv<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<nv<<" used "<<cvnv3<<"\n";
    if(b<0)
    {
    cout<<na<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<na<<"'s HP left : "<<hpa<<endl;
    }
    break;

    case '4':
    hpa=hpa-cvv4;
    hpv=hpv-caa4;
    a=hpv;
    b=hpa;
    cout<<"\n"<<na<<" Used "<<cana4<<"\n";
    if(a<0)
    {
    cout<<nv<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<nv<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<nv<<" used "<<cvnv4<<"\n";
    if(b<0)
    {
    cout<<na<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<na<<"'s HP left : "<<hpa<<endl;
    }
    break;

    default:
    hpa=hpa-cvv1;
    b=hpa;
    cout<<"\nAttack Missed!!!"<<endl;
    cout<<"\n"<<nv<<" used "<<cvnv1<<"\n";
    if(b<0)
    {
    cout<<na<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<na<<"'s HP left : "<<hpa<<endl;
    }
    break;
    }
    if(hpv<=0 && hpa<=0)
    {
    cout<<"\n"<<na<<" and "<<nv<<" Killed each other"<<endl;
    cout<<"It's A Tie!!";
    break;
    }
    else if(hpa<=0)
    {
    cout<<"\n"<<nv<<" Killed "<<*na<<"\n";
    cout<<"Sorry You Lost!!";
    break;
    }
    else if(hpv<=0)
    {
    cout<<"\n"<<na<<" Killed "<<nv<<"\n";
    cout<<"Congratulations You Won!!";
    break;
    }
    }
    }

int main()
{
int i;
char choicep;
Marvel a[1];
do
{
for(i=0;i<1;i++)
{
a[i].setchar();
a[i].getchar();
a[i].fight();
}
cout<<"\n\nDo you want to Play Again???"<<endl;
cout<<"Press 1 to Play Again or any other key to exit : ";
cin>>choicep;
cout<<endl;
}while(choicep=='1');
}
