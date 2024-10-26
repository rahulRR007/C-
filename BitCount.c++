#include<iostream>
using namespace std;
unsigned int bit_count( char *array, int len )
{
    unsigned int count =0;

    for(int i=0;i<len;i++)
    {
        if(array[i]=='1')
        {
            count++;
        }
    }

    return count;

}
int main()
{
    string s;
    cin>>s;
    int len = s.length();
  
    unsigned int total = bit_count(&s[0],len);

    cout<<total;
}