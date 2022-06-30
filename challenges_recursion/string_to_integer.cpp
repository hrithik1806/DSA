#include<iostream>
using namespace std;
int convert(string s,int i)
{
    if(i==s.size())
    {
      return 0;

    }
    int number=s[i]-'0';
    int ans=ans*10+number;
    return convert(s,i+1);
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<convert(s,0);
}