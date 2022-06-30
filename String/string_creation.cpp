#include<iostream>
#include<string>
using namespace std;

int main()
{
    //String init
    string s0;
    string s1("hello");

    string s2="Hello World";
    string s3(s2);
    
    string s4=s3;

    char a[]={'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;


    if(s0.empty())
    {
        cout<<"S0 is an empty string    ";
    }


//Append
s0.append("I love c++");
cout<<s0<<endl;
s0+="and python";
cout<<s0<<endl;

//REmove
cout<<s0.length();
s0.clear();
cout<<s0.length();

//Compare two string
s0="Apple";
s1="Mango";
cout<<s0.compare(s1)<<endl;//Return ==0 or >0,<0

//Overloaded operators
if(s1>s0)
{
    cout<<"MAngo is lexi greater than apple "<<endl;

}
cout<<s1[0]<<endl;

    //Find substring
     string s="I want to have a apple juice ";
    int idx=s.find("Apple");
    cout<<idx<<endl;

    //Remove a word fromn a string 
    string word="Apple";
    int len=word.length();
    cout<<s<<endl;
    s.erase(idx,len+1);
    cout<<s<<endl;

    //Iterate all over the characters in the string 
    for(int i=0;i<s1.length();i++)
    {
        cout<<s1[i]<<":";


    }
//Iterartors

for(auto it=s1.begin();it<s1.end();it++)
{
    cout<<(*it)<<",";

}

//For each loop

for(char c:s1)
{
    cout<<c<<".";
}



    return 0;
}