//there is a theif who have to stole things from the shop accoring to his bag capacity wth maximum profit
#include<iostream>
using namespace std;
int profit(int N,int C,int *wt,int *prices)
{
if(N==0 || C==0)
{
    return 0;
}
//rec case
    int ans=0;
    int inc,exc;    ///include exclude
     inc=exc=0;

     //inc
     if(wt[n-1]<=C)
     {
         inc=prices[n-1]+profit(N-1,C-wt[n-1],wt,prices);

     }
     exc=profit(N-1,C,wt,prices);

     ans=max(inc,exc);
     return ans;


}
int main()
{
    int weights[]={1,2,3,5};
    int prices[]={40,20,30,100};

    int N=4;
    int C=7;
    cout<<profit(N,C,weights,prices);


}