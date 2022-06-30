#include<iostream>
using namespace std;
string removeduplicate(string s)
{
    if(s.size()<=1)
    {
        return s;
    }
    string next=removeduplicate(s.substr(1));
    if(s[0]==next[0])
    {
        return next;
    }
   return s[0]+next;
}
int main()
{
    string s;
    cin>>s;
   cout<< removeduplicate(s);

}
