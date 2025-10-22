#include<iostream>
using namespace std;


struct person
{
    string name;
    string address;
    int phone;
};

void addinfo(){
    person person2;
    cout<<"Name of the person :";
    cin>>person2.name;
    cout<<endl <<"Address :";
    cin>>person2.address;
    cout<<endl <<"Phone number :";
    cin>>person2.phone;

    cout <<"person1 details:" <<endl ;
    cout<<person2.name <<endl;
    cout<<person2.address <<endl;
    cout<<person2.phone <<endl;

}

int main()
{   person person1;
    cout<<"Name of the person :";
    cin>>person1.name;
    cout<<endl <<"Address :";
    cin>>person1.address;
    cout<<endl <<"Phone number :";
    cin>>person1.phone;

    cout <<"person1 details:" <<endl;
    cout<<person1.name <<endl;
    cout<<person1.address <<endl;
    cout<<person1.phone <<endl;

    cout <<"Press the numbers to perform following actions.";
    cout <<"1. Add another person detail." <<endl;
    cout <<"2. Displaly all the information." <<endl;
    int question;
    cin>>question;
 
    switch (question)
    {
    case 1:
        addinfo();
        break;
    case 2:
        cout << 1 + question <<" till yet " <<endl;
    default:
        break;
    }

}