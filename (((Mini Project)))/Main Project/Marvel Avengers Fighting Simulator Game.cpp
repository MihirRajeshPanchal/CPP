#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Marvel
{
public:
int hpa,hpv;
char na[100],nv[100];
char cana1[100],cana2[100],cana3[100],cana4[100];
char cvnv1[100],cvnv2[100],cvnv3[100],cvnv4[100];
int caa1,caa2,caa3,caa4;
int cvv1,cvv2,cvv3,cvv4;
char choicea,choicev;
    setchar()
    {
    cout<<"Marvel Avenger List : "<<endl;
    cout<<"(1)Iron Man"<<endl;
    cout<<"(2)Hulk"<<endl;
    cout<<"(3)Thor"<<endl;
    cout<<"(4)Captain America"<<endl;
    cout<<"(5)Customize Avenger"<<endl;
    cout<<"Choose Your Marvel Avenger (Number): ";
    cin>>choicea;
    cout<<"\n";
    }
    getchar()
    {
    if(choicea=='1')
    {
    cout<<"Avenger Choosen : Iron Man"<<endl;
    hpa=220;
    }
    else if(choicea=='2')
    {
    cout<<"Avenger Choosen : Hulk"<<endl;
    hpa=300;
    }
    else if(choicea=='3')
    {
    cout<<"Avenger Choosen : Thor"<<endl;
    hpa=200;
    }
    else if(choicea=='4')
    {
    cout<<"Avenger Choosen : Captain America"<<endl;
    hpa=260;
    }
    else if(choicea=='5')
    {
    cout<<"Customize Avenger : "<<endl;
    cout<<"Enter Avenger Name (EX : Your Name) : ";
    cin>>na;
    cout<<"Enter Avenger Hitpoints (Number): ";
    cin>>hpa;
    cout<<"Enter Name of Attack 1 (EX : Thunder) : ";
    cin>>cana1;
    cout<<"Enter Damage of Attack 1 (Number): ";
    cin>>caa1;
    cout<<"Enter Name of Attack 2 (EX : Telepathy) : ";
    cin>>cana2;
    cout<<"Enter Damage of Attack 2 (Number): ";
    cin>>caa2;
    cout<<"Enter Name of Attack 3 (EX : Flamethrower) : ";
    cin>>cana3;
    cout<<"Enter Damage of Attack 3 (Number): ";
    cin>>caa3;
    cout<<"Enter Name of Attack 4 (EX : Punch) : ";
    cin>>cana4;
    cout<<"Enter Damage of Attack 4 (Number): ";
    cin>>caa4;
    }
    else
    {
    cout<<"Wrong Input"<<endl;
    cout<<"Try Again!!!"<<endl<<endl;
    setchar();
    getchar();
    }
    }

    setvill()
    {
    cout<<"\nMarvel Villain List : "<<endl;
    cout<<"(1)Thanos"<<endl;
    cout<<"(2)Loki"<<endl;
    cout<<"(3)Customize Villain"<<endl;
    cout<<"Choose Your Marvel Villain (Number): ";
    cin>>choicev;
    cout<<"\n";
    }

    getvill()
    {
    if(choicev=='1')
    {
    cout<<"Villain Choosen : Thanos"<<endl;
    hpv=480;
    }
    else if(choicev=='2')
    {
    cout<<"Villain Choosen : Loki"<<endl;
    hpv=240;
    }
    else if(choicev=='3')
    {
    cout<<"Customize Villain : \n"<<endl;
    cout<<"Enter Villain Name (EX : Enemy): ";
    cin>>nv;
    cout<<"Enter Villain Hitpoints (Number): ";
    cin>>hpv;
    cout<<"Enter Name of Attack 1 (EX : Kick) : ";
    cin>>cvnv1;
    cout<<"Enter Damage of Attack 1 (Number): ";
    cin>>cvv1;
    cout<<"Enter Name of Attack 2 (EX : Uppercut) : ";
    cin>>cvnv2;
    cout<<"Enter Damage of Attack 2 (Number): ";
    cin>>cvv2;
    cout<<"Enter Name of Attack 3 (EX : Takedown) : ";
    cin>>cvnv3;
    cout<<"Enter Damage of Attack 3 (Number): ";
    cin>>cvv3;
    cout<<"Enter Name of Attack 4 (EX : Smash) : ";
    cin>>cvnv4;
    cout<<"Enter Damage of Attack 4 (Number): ";
    cin>>cvv4;
    }
    else
    {
    cout<<"Wrong Input"<<endl;
    cout<<"Try Again"<<endl;
    setvill();
    getvill();
    }
    }

};
class Fight:public Marvel
{
public:
char choice;
char *avg[100],*vill[100];
char *na1[100],*na2[100],*na3[100],*na4[100];
char *nv1[100],*nv2[100],*nv3[100],*nv4[100];
int a1,a2,a3,a4;
int v1,v2,v3,v4;
float a,b;
    matchup()
    {
    if(choicea=='1' && choicev=='1')
    {
    *avg={"Iron Man"};
    *na1={"Laser Beam"};
    *na2={"Power Drive"};
    *na3={"Thruster Uppercut"};
    *na4={"Repulsor Shot"};
    a1=80;
    a2=60;
    a3=40;
    a4=20;
    *vill={"Thanos"};
    *nv1={"Palm Breaker"};
    *nv2={"Titan's Gaze"};
    *nv3={"Insolence Crusher"};
    *nv4={"Hand Bomb"};
    v1=30;
    v2=10;
    v3=20;
    v4=15;
    fight();
    }
    else if(choicea=='1' && choicev=='2')
    {
    *avg={"Iron Man"};
    *na1={"Laser Beam"};
    *na2={"Power Drive"};
    *na3={"Thruster Uppercut"};
    *na4={"Repulsor Shot"};
    a1=80;
    a2=60;
    a3=40;
    a4=20;
    *vill={"Loki"};
    *nv1={"Energy Blast"};
    *nv2={"Scepter"};
    *nv3={"Hypnosis"};
    *nv4={"Telekinesis"};
    v1=50;
    v2=30;
    v3=20;
    v4=35;
    fight();
    }
    else if(choicea=='1' && choicev=='3')
    {
    *avg={"Iron Man"};
    *na1={"Laser Beam"};
    *na2={"Power Drive"};
    *na3={"Thruster Uppercut"};
    *na4={"Repulsor Shot"};
    a1=80;
    a2=60;
    a3=40;
    a4=20;
    *vill=nv;
    *nv1=cvnv1;
    *nv2=cvnv2;
    *nv3=cvnv3;
    *nv4=cvnv4;
    v1=cvv1;
    v2=cvv2;
    v3=cvv3;
    v4=cvv4;
    fight();
    }
    else if(choicea=='2' && choicev=='1')
    {
    *avg={"Hulk"};
    *na1={"Aftershock"};
    *na2={"Meteor"};
    *na3={"Gamma Crusher"};
    *na4={"Tectonic Fury"};
    a1=20;
    a2=80;
    a3=40;
    a4=60;
    *vill={"Thanos"};
    *nv1={"Palm Breaker"};
    *nv2={"Titan's Gaze"};
    *nv3={"Insolence Crusher"};
    *nv4={"Hand Bomb"};
    v1=30;
    v2=10;
    v3=20;
    v4=15;
    fight();
    }
    else if(choicea=='2' && choicev=='2')
    {
    *avg={"Hulk"};
    *na1={"Aftershock"};
    *na2={"Meteor"};
    *na3={"Gamma Crusher"};
    *na4={"Tectonic Fury"};
    a1=20;
    a2=80;
    a3=40;
    a4=60;
    *vill={"Loki"};
    *nv1={"Energy Blast"};
    *nv2={"Scepter"};
    *nv3={"Hypnosis"};
    *nv4={"Telekinesis"};
    v1=50;
    v2=30;
    v3=20;
    v4=35;
    fight();
    }
    else if(choicea=='2' && choicev=='3')
    {
    *avg={"Hulk"};
    *na1={"Aftershock"};
    *na2={"Meteor"};
    *na3={"Gamma Crusher"};
    *na4={"Tectonic Fury"};
    a1=20;
    a2=80;
    a3=40;
    a4=60;
    *vill=nv;
    *nv1=cvnv1;
    *nv2=cvnv2;
    *nv3=cvnv3;
    *nv4=cvnv4;
    v1=cvv1;
    v2=cvv2;
    v3=cvv3;
    v4=cvv4;
    fight();
    }
    else if(choicea=='3' && choicev=='1')
    {
    *avg={"Thor"};
    *na1={"Bring The Thunder"};
    *na2={"Thunderstruck"};
    *na3={"Crack The Sky"};
    *na4={"Falling Star"};
    a1=60;
    a2=80;
    a3=20;
    a4=40;
    *vill={"Thanos"};
    *nv1={"Palm Breaker"};
    *nv2={"Titan's Gaze"};
    *nv3={"Insolence Crusher"};
    *nv4={"Hand Bomb"};
    v1=30;
    v2=10;
    v3=20;
    v4=15;
    fight();
    }
    else if(choicea=='3' && choicev=='2')
    {
    *avg={"Thor"};
    *na1={"Bring The Thunder"};
    *na2={"Thunderstruck"};
    *na3={"Crack The Sky"};
    *na4={"Falling Star"};
    a1=60;
    a2=80;
    a3=20;
    a4=40;
    *vill={"Loki"};
    *nv1={"Energy Blast"};
    *nv2={"Scepter"};
    *nv3={"Hypnosis"};
    *nv4={"Telekinesis"};
    v1=50;
    v2=30;
    v3=20;
    v4=35;
    fight();
    }
    else if(choicea=='3' && choicev=='3')
    {
    *avg={"Thor"};
    *na1={"Bring The Thunder"};
    *na2={"Thunderstruck"};
    *na3={"Crack The Sky"};
    *na4={"Falling Star"};
    a1=60;
    a2=80;
    a3=20;
    a4=40;
    *vill=nv;
    *nv1=cvnv1;
    *nv2=cvnv2;
    *nv3=cvnv3;
    *nv4=cvnv4;
    v1=cvv1;
    v2=cvv2;
    v3=cvv3;
    v4=cvv4;
    fight();
    }
    else if(choicea=='4' && choicev=='1')
    {
    *avg={"Captain America"};
    *na1={"Shield Bash"};
    *na2={"Soldier's Slam"};
    *na3={"Grand Slam"};
    *na4={"Rising Hope"};
    a1=80;
    a2=40;
    a3=20;
    a4=60;
    *vill={"Thanos"};
    *nv1={"Palm Breaker"};
    *nv2={"Titan's Gaze"};
    *nv3={"Insolence Crusher"};
    *nv4={"Hand Bomb"};
    v1=30;
    v2=10;
    v3=20;
    v4=15;
    fight();
    }
    else if(choicea=='4' && choicev=='2')
    {
    *avg={"Captain America"};
    *na1={"Shield Bash"};
    *na2={"Soldier's Slam"};
    *na3={"Grand Slam"};
    *na4={"Rising Hope"};
    a1=80;
    a2=40;
    a3=20;
    a4=60;
    *vill={"Loki"};
    *nv1={"Energy Blast"};
    *nv2={"Scepter"};
    *nv3={"Hypnosis"};
    *nv4={"Telekinesis"};
    v1=50;
    v2=30;
    v3=20;
    v4=35;
    fight();
    }
    else if(choicea=='4' && choicev=='3')
    {
    *avg={"Captain America"};
    *na1={"Shield Bash"};
    *na2={"Soldier's Slam"};
    *na3={"Grand Slam"};
    *na4={"Rising Hope"};
    a1=80;
    a2=40;
    a3=20;
    a4=60;
    *vill=nv;
    *nv1=cvnv1;
    *nv2=cvnv2;
    *nv3=cvnv3;
    *nv4=cvnv4;
    v1=cvv1;
    v2=cvv2;
    v3=cvv3;
    v4=cvv4;
    fight();
    }
    else if(choicea=='5' && choicev=='1')
    {
    *avg=na;
    *na1=cana1;
    *na2=cana2;
    *na3=cana3;
    *na4=cana4;
    a1=caa1;
    a2=caa2;
    a3=caa3;
    a4=caa4;
    *vill={"Thanos"};
    *nv1={"Palm Breaker"};
    *nv2={"Titan's Gaze"};
    *nv3={"Insolence Crusher"};
    *nv4={"Hand Bomb"};
    v1=30;
    v2=10;
    v3=20;
    v4=15;
    fight();
    }
    else if(choicea=='5' && choicev=='2')
    {
    *avg=na;
    *na1=cana1;
    *na2=cana2;
    *na3=cana3;
    *na4=cana4;
    a1=caa1;
    a2=caa2;
    a3=caa3;
    a4=caa4;
    *vill={"Loki"};
    *nv1={"Energy Blast"};
    *nv2={"Scepter"};
    *nv3={"Hypnosis"};
    *nv4={"Telekinesis"};
    v1=50;
    v2=30;
    v3=20;
    v4=35;
    fight();
    }
    else if(choicea=='5' && choicev=='3')
    {
    *avg=na;
    *na1=cana1;
    *na2=cana2;
    *na3=cana3;
    *na4=cana4;
    a1=caa1;
    a2=caa2;
    a3=caa3;
    a4=caa4;
    *vill=nv;
    *nv1=cvnv1;
    *nv2=cvnv2;
    *nv3=cvnv3;
    *nv4=cvnv4;
    v1=cvv1;
    v2=cvv2;
    v3=cvv3;
    v4=cvv4;
    fight();
    }
    }

    fight()
    {
    ofstream ofile;
    ofile.open("Battle Log.txt",ios::app);
    ofile<<"\n"<<*avg<<" VS "<<*vill;
    ofile<<"\t\t\t";
    cout<<"\n"<<*avg<<" VS "<<*vill<<"\n"<<endl;
    cout<<*avg<<" Attacks\n";
    cout<<"(1)"<<*na1<<endl;
    cout<<"(2)"<<*na2<<endl;
    cout<<"(3)"<<*na3<<endl;
    cout<<"(4)"<<*na4<<endl;
    cout<<"\n"<<*avg<<"'s Base HP : "<<hpa<<endl;
    cout<<*vill<<"'s Base HP : "<<hpv<<endl;
    while(hpa>0 ||hpv>0)
    {
    cout<<"\nEnter Attack Choice (Number) : ";
    cin>>choice;
    switch (choice)
    {
    case '1':
    hpa=hpa-v1;
    hpv=hpv-a1;
    a=hpv;
    b=hpa;
    cout<<"\n"<<*avg<<" Used "<<*na1<<"\n";
    if(a<0)
    {
    cout<<*vill<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*vill<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<*vill<<" used "<<*nv1<<"\n";
    if(b<0)
    {
    cout<<*avg<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*avg<<"'s HP left : "<<hpa<<endl;
    }
    break;

    case '2':
    hpa=hpa-v2;
    hpv=hpv-a2;
    a=hpv;
    b=hpa;
    cout<<"\n"<<*avg<<" Used "<<*na2<<"\n";
    if(a<0)
    {
    cout<<*vill<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*vill<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<*vill<<" used "<<*nv2<<"\n";
    if(b<0)
    {
    cout<<*avg<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*avg<<"'s HP left : "<<hpa<<endl;
    }
    break;

    case '3':
    hpa=hpa-v3;
    hpv=hpv-a3;
    a=hpv;
    b=hpa;
    cout<<"\n"<<*avg<<" Used "<<*na3<<"\n";
    if(a<0)
    {
    cout<<*vill<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*vill<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<*vill<<" used "<<*nv3<<"\n";
    if(b<0)
    {
    cout<<*avg<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*avg<<"'s HP left : "<<hpa<<endl;
    }
    break;

    case '4':
    hpa=hpa-v4;
    hpv=hpv-a4;
    a=hpv;
    b=hpa;
    cout<<"\n"<<*avg<<" Used "<<*na4<<"\n";
    if(a<0)
    {
    cout<<*vill<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*vill<<"'s HP left : "<<hpv<<endl;
    }
    cout<<"\n"<<*vill<<" used "<<*nv4<<"\n";
    if(b<0)
    {
    cout<<*avg<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*avg<<"'s HP left : "<<hpa<<endl;
    }
    break;

    case 'X':
    cout<<"\nCheat Activated\n";
    hpv=0;
    if(a<0)
    {
    cout<<*vill<<"'s HP left : 0"<<endl;
    }
    break;

    case 'H':
    hpa=hpa+100;
    cout<<"\nCheat Activated\n";
    cout<<*avg<<"'s HP left : "<<hpa<<endl;
    break;

    default:
    hpa=hpa-v1;
    b=hpa;
    cout<<"\nAttack Missed!!!"<<endl;
    cout<<"\n"<<*vill<<" used "<<*nv1<<"\n";
    if(b<0)
    {
    cout<<*avg<<"'s HP left : 0"<<endl;
    }
    else
    {
    cout<<*avg<<"'s HP left : "<<hpa<<endl;
    }
    break;
    }
    if(hpv<=0 && hpa<=0)
    {
    cout<<"\n"<<*avg<<" and "<<*vill<<" Killed each other"<<endl;
    cout<<"It's A Tie!!";
    ofile<<"Tie"<<endl;
    ofile.close();
    break;
    }
    else if(hpa<=0)
    {
    cout<<"\n"<<*vill<<" Killed "<<*avg<<"\n";
    cout<<"Sorry You Lost!!";
    ofile<<"Winner : "<<*vill<<endl;
    ofile.close();
    break;
    }
    else if(hpv<=0)
    {
    cout<<"\n"<<*avg<<" Killed "<<*vill<<"\n";
    cout<<"Congratulations You Won!!";
    ofile<<"Winner : "<<*avg<<endl;
    ofile.close();
    break;
    }
    }
    }

};

int main()
{
char choicepa,guide,cc[8],*p[8]={"Avengers"};
int flag=0,i;
char name[100],choicera;
float rate;
ofstream outfile;
ifstream infile;
char ch;
cout<<"\t\t\t\tMarvel Avengers Fighting Simulator Game"<<endl;
while(choicepa!='7')
{
cout<<"\n\t\t\t\t\t\tMain Menu\n";
cout<<"(1)Play Game"<<endl;
cout<<"(2)Game Guide"<<endl;
cout<<"(3)Battle Log"<<endl;
cout<<"(4)Cheat Codes"<<endl;
cout<<"(5)Rate Game"<<endl;
cout<<"(6)Credits"<<endl;
cout<<"(7)Exit Game"<<endl;
cout<<"\nEnter Your Action from Main Menu : ";
cin>>choicepa;
cout<<"\n";
switch (choicepa)
{
case '1':
    Fight m1;
    m1.setchar();
    m1.getchar();
    m1.setvill();
    m1.getvill();
    m1.matchup();
    cout<<"\n";
case '2':
while(choicepa=='2')
{
    cout<<"Character Guide"<<endl;
    cout<<"(1)Iron Man"<<endl;
    cout<<"(2)Hulk"<<endl;
    cout<<"(3)Thor"<<endl;
    cout<<"(4)Captain America"<<endl;
    cout<<"(5)Thanos"<<endl;
    cout<<"(6)Loki"<<endl;
    cout<<"\nEnter Character's Number from Character Guide : ";
    cin>>guide;
    if(guide=='1')
    {
    cout<<"\nIron Man's Base HP : 220"<<endl;
    cout<<"Iron Man Attacks :\n";
    cout<<"(1)Laser Beam (Damage : 80)"<<endl;
    cout<<"(2)Power Drive (Damage : 60)"<<endl;
    cout<<"(3)Thruster Uppercut (Damage : 40)"<<endl;
    cout<<"(4)Repulsor Shot (Damage : 20)"<<endl<<endl;
    }
    else if(guide=='2')
    {
    cout<<"\nHulk's Base HP : 300"<<endl;
    cout<<"Hulk Attacks :\n";
    cout<<"(1)Aftershock (Damage : 20)"<<endl;
    cout<<"(2)Meteor (Damage : 80)"<<endl;
    cout<<"(3)Gamma Crusher (Damage : 40)"<<endl;
    cout<<"(4)Tectonic Fury (Damage : 60)"<<endl<<endl;
    }
    else if(guide=='3')
    {
    cout<<"\nThor's Base HP : 200"<<endl;
    cout<<"Thor Attacks :\n";
    cout<<"(1)Bring The Thunder (Damage : 60)"<<endl;
    cout<<"(2)Thunderstruck (Damage : 80)"<<endl;
    cout<<"(3)Crack The Sky (Damage : 20)"<<endl;
    cout<<"(4)Falling Star (Damage : 40)"<<endl<<endl;
    }
    else if(guide=='4')
    {
    cout<<"\nCaptain America's Base HP : 260"<<endl;
    cout<<"Captain America Attacks :\n";
    cout<<"(1)Shield Bash (Damage : 80)"<<endl;
    cout<<"(2)Soldier's Slam (Damage : 40)"<<endl;
    cout<<"(3)Grand Slam (Damage : 20)"<<endl;
    cout<<"(4)Rising Hope (Damage : 60)"<<endl<<endl;
    }
    else if(guide=='5')
    {
    cout<<"\nThanos's Base HP : 480"<<endl;
    cout<<"Thanos Attacks :\n";
    cout<<"(1)Palm Breaker (Damage : 30)"<<endl;
    cout<<"(2)Titan's Gaze (Damage : 10)"<<endl;
    cout<<"(3)Insolence Crusher (Damage : 20)"<<endl;
    cout<<"(4)Hand Bomb (Damage : 15)"<<endl<<endl;

    }
    else if(guide=='6')
    {
    cout<<"\nLoki's Base HP : 240"<<endl;
    cout<<"Loki Attacks :\n";
    cout<<"(1)Energy Blast (Damage : 50)"<<endl;
    cout<<"(2)Scepter (Damage : 30)"<<endl;
    cout<<"(3)Hypnosis (Damage : 20)"<<endl;
    cout<<"(4)Telekinesis (Damage : 35)"<<endl<<endl;

    }
    else
    {
    cout<<"\nWrong Input\n";
    cout<<"Try Again!!!";
    }
    break;
case '3':
    infile.open ("Battle Log.txt",ios::in);
    cout<<"Battle Log\t\t\t\tResult"<<endl;
    while(infile)
    {
    ch=infile.get();
    cout<<ch;
    }
    infile.close();
    break;
case '4':
    cout<<"Enter Password to Access Cheat Codes : ";
    cin>>cc;
    for(i=0;i<1;i++)
    {
    if(strcmp(cc,p[i])==0)
    {
    flag=1;
    break;
    }
    }
    if(flag==1)
    {
    cout<<"\nCheat Codes : "<<endl;
    cout<<"Enter 'X' while entering Attack Choice to Defeat Villain Instantly"<<endl;
    cout<<"Enter 'H' while entering Attack Choice to Heal Avenger By 100 HP"<<endl;
    flag=0;
    }
    else
    {
    cout<<"\nWrong Password\n";
    cout<<"Try Again!!!";
    }
    break;
case '5':
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Please Rate Marvel Avengers Fighting Simulator Game on a scale from 1 to 10 : ";
    cin>>rate;
    if(rate>=0 && rate<=10)
    {
    cout<<"\nThank You "<<name<<" for rating Marvel Avengers Fighting Simulator Game "<<rate<<" star out of 10"<<endl;
    ofstream outfile;
    outfile.open("Rating.txt",ios::app);
    outfile<<"\n"<<name;
    outfile<<"\t\t";
    outfile<<rate<<endl;
    outfile.close();
    cout<<"\n(1).View Reviews"<<endl;
    cout<<"(2).Exit"<<endl;
    cout<<"Enter Your Action From Menu : ";
    cin>>choicera;
    if(choicera=='1')
    {
    infile.open ("Rating.txt",ios::in);
    cout<<"\nReviews : \n"<<endl;
    cout<<"Name\t\tRating"<<endl;
    while(infile)
    {
    ch=infile.get();
    cout<<ch;
    }
    infile.close();
    }
    else
    {
    cout<<"\nReview Viewing Terminated\n";
    }
    }
    else
    {
    cout<<"\nWrong Input\n";
    cout<<"Try Again!!!";
    }
    break;
case '6':
    cout<<"Credits : "<<endl;
    cout<<"Project By : Mihir Rajesh Panchal"<<endl;
    cout<<"Project Name : Marvel Avengers Fighting Simulator Game"<<endl;
    cout<<"SAP ID : 57498200018"<<endl;
    cout<<"Roll No : T018"<<endl;
    break;
case '7':
break;
default:
    cout<<"Wrong Input\n";
    cout<<"Try Again!!!";
    break;
}
}
}
}
