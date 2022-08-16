#include<bits/stdc++.h>
using namespace std;

class calculate
{
public:

    int choose,num1,num2,result;
    void option()
    {
        cout<<"Please choose an option:";
        cout<<endl<<"Enter 1 For Additation";
        cout<<endl<<"Enter 2 For Subtraction";
        cout<<endl<<"Enter 3 For Multiplication";
        cout<<endl<<"Enter 4 For Division";
        cout<<endl<<"Enter 0 For Exit";

        cout<<endl<<endl<<"Please Enter an option";

        cin>>choose;
    }

    void input()
    {
        cout<<"Please Enter Two number:";
        cin>>num1>>num2;
    }

    void emran()
    {
        switch(choose)
        {
        case 1:
            result =num1+num2;
            cout<<"Additation of "<<num1<<" and "<<num2<<" is : "<<result;
            break;

        case 2:
            if(num1>num2)
            {
                result=num1-num2;
                cout<<"Subtraction of "<<num1<<" and "<<num2<<" is : "<<result;
            }

            else
            {
                result=num2-num1;
                cout<<"Subtraction of "<<num2<<" and "<<num1<<" is : "<<result;
            }
            break;

        case 3:
            result =num1*num2;
            cout<<"Multiplication of "<<num1<<" and "<<num2<<" is : "<<result;
            break;

        case 4:
            result =num1/num2;
            cout<<"Division of "<<num1<<" and "<<num2<<" is : "<<result;
            break;

        default :
            break;
        }
    }
};


int main()
{
    calculate ob;

    ob.option();
    ob.input();
    ob.emran();

    return 0;
}
