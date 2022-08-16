#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int id;
    double cgpa;
};

int main()
{
    student ob1,ob2;
    
    ob1.name="Emran";
    ob1.id=64;
    ob1.cgpa=3.87;

    
    cout<<ob1.name<<endl;
    cout<<"Emran ID:"<<ob1.id<<endl;
    cout<<"Emran Cgpa:"<<ob1.cgpa<<endl<<endl;


    ob2.name="Sajib";
    ob2.id=53;
    ob2.cgpa=3.99;


    cout<<ob2.name<<endl;
    cout<<"Sajib ID:"<<ob2.id<<endl;
    cout<<"Sajib Cgpa:"<<ob2.cgpa<<endl;

    return 0;

}