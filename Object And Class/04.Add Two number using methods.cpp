#include<bits/stdc++.h>
using namespace std;
class myclass
{
    public:
        int x,y;

        void display()
        {
            int ans=x+y;
            cout<<"The Sum is:"<<ans;
        }
};


int main()
{

   myclass ob;
   ob.x=23;
   ob.y=49;
   ob.display();

   return 0;

}