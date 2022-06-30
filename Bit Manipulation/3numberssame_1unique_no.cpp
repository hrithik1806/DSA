#include<iostream>
using namespace std;
int main()
{
    int cnt[64]={0};
    int n,no;
    cin>>n;
    //Update the cnt array by extracting bits
    int j=0;
    while(no>0)
    {
        int last_bits=(n&1);
        cnt[j]+=last_bits;
        j++;
        no=no>>1;

    }
    //iterate over the array
    int p=1;
    int ans=0;

    for(int i=0;i<64;i++)
    {
        cnt[i]%=3;
        ans+=(cnt[i]*p);
        p=p<<1;


    }
    //print the final answer
        cout<<ans<<endl;
        

    return 0;
}