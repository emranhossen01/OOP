#include<iostream>
using namespace std;

class emran
{
public:
    int id;
    double cgpa;
};

int main()
{
    emran ob;

    ob.id=23;
    ob.cgpa=3.89;

    cout<<"Your ID:"<<ob.id<<endl;
    cout<<"Your cgpa:"<<ob.cgpa<<endl;
    return 0;
}
