#include<iostream>
using namespace std;
class parent
{ 
    public:
    virtual void fun()=0;
};
class child:public parent
{ 

  public:
   void fun() override
   {
    cout<<"Parent";
   }
};
int main()
{
    child c;
   parent *ptr = &c;
   ptr->fun();
}  