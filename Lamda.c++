#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;

    char arr[] = {'a','b','c'};

    auto  lamda  = [](const int n1,const int n2,const char arr[])->bool
    {
        return n1>n2;
    };
    bool result=lamda(n1,n2,arr);
   cout<<boolalpha<<result;

}