#include<iostream>
using namespace std;
float square_root(int n,int p)
{
    int s=0;
    int e=n;
    float ans=-1;

    while(s<=e)
    {
        int mid=(s+e)>>1;
        if(mid*mid==n)
        {
            return mid;
        }
        if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;

        }
        else{
            e=mid-1;
        }

    }

    //floating part
    //Brute force

    float inc=0.1;
     
    for(int times=1;times<=p;times++)
    {
        while(ans*ans<=n)
        {
            ans=ans+inc;
            
        } 
        //overshort the value
        ans=ans-inc;
        inc=inc/10;

    }

    return ans;
}
int main()
{
  int n;
  cin>>n;
  cout<<square_root(n,3)<<endl;

    

}