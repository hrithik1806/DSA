//you have to reach nth place and a person can jum from 1 upto k steps
#include<iostream>
using namespace std;
int f(int n,int k)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    int ans =0;
    for(int i=1;i<=k;i++)
    {
        ans+=f(n-i,k);
    }
    return ans;
    //if k==3 the we would have returned f(n-1)+f(n-2)+f(n-3)
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<f(n,k)<<endl;
}

