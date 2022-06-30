#include<iostream>
using namespace std;
#include<string>
string duplicateChar(string s)
{
    if(s.size()<=1)
    {
        return s;
    }

    string nextchar=duplicateChar(s.substr(1));
    if(s[0]==nextchar[0])
    {
        return s[0]+ string("*")+nextchar;

    }
    return s[0]+nextchar;



}
int main()
{
    string s;
    cin>>s;
    cout<<duplicateChar(s);

}