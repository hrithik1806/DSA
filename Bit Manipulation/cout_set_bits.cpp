#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=a;i<=b;i++)
        {
            ans+=__builtin_popcount(i);

        }
        cout<<ans<<endl;
    }
}