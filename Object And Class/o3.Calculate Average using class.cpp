#include<bits/stdc++.h>
using namespace std;

class avg
{
public:
    int a,b;
};

int main()
{
    avg ob1;

    ob1.a=20;
    ob1.b=30;
    
    int avg=(ob1.a+ob1.b)/2;
    
    cout<<"The Avarage is:"<<avg;
    return 0;
}