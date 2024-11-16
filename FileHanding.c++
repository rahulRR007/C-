#include<fstream>
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

vector<string> readfile1()
{
    cout<<endl;
    cout<<"File1"<<endl;
    ifstream f;
    f.open("file1.txt");
    string line;
    vector<string>str;
    while(getline(f,line))
    {
       stringstream s(line);
       string word;
       while(s>>word)
       {
        str.push_back(word);
       }
    }
    f.close();
    return str;
}
vector<string> readfile2()
{
    cout<<endl;
    cout<<"File2"<<endl;
    ifstream f;
    f.open("file2.txt");
    string line;
    vector<string> str;
    while(getline(f,line))
    {
       stringstream s(line);
       string word;
       while(s>>word)
       {
        str.push_back(word);

       } 
    }
    f.close();

    return str;
}

void diff_btw_file()
{
    cout<<"OUTPUT"<<endl;
    auto s1=readfile1();
    auto s2=readfile2();
    cout<<"Diiffernt btw the file1.txt and file2.txt"<<endl;
    int len1=s1.size();
    int len2=s2.size();

    cout<<len1<<" "<<len2<<endl;

    
    int i=0,j=0;
    while(i<len1&&j<len2)
    {
        if(s1[i]!=s2[j])
        {
        cout<<s1[i]<<"  "<<s2[j]<<endl;
        }
        i++;
        j++;
    }
    while(i<len1)
    {
        cout<<s1[i]<<" ";
        i++;
    }   
    while(j<len2)
    {
        cout<<s2[j]<<" ";
        j++;
    }
}
int main()
{
    cout<<"file1 is open"<<endl;
    fstream f1("file1.txt",ios::out | ios::in);
    string line;
    while(1)
    {
        getline(cin,line);
        if(line=="-1")
        {
            break;
        }
        f1<<line<<endl;
    }
    f1.close();

    cout<<"File 2 is open"<<endl;
    fstream f2("file2.txt",ios::out | ios::in);
    while(1)
    {
        getline(cin,line);

        if(line=="-1")
        {
            break;
        }  
        f2<<line<<endl;
    }
    f2.close();   
    diff_btw_file();

    return  0;
}