#include<iostream>
#include<bitset>
#include<vector>
#define ll long
using namespace std;
const int n=1000000;
bitset<100005> b;
vector<int> primes;
void seive()
{
    //set all bits
    b.set();
    b[0]=b[1]=0;
    for(long long int i=2;i<=n;i++)
    {
        if(b[i])
        {
            primes.push_back(i);
            for(long long int j=i*i;j<=n;j=j+i)
            {
                b[j]=0;

            }
        }
    }
}
bool isPrime(long long No)
{
    if(No<=n)
    {
        return b[No]==1? true:false;
        for(long long int i=0;primes[i]*(long long) primes[i]<=No;i++)
        {
            if(No%primes[i]==0)
            {
                return false;
            }
        
        }
        return true;
    }

}
int main()
{
    seive();
    if(isPrime(214783647))
    {
        cout<<"Yes it s prime"<<endl;
    }
    else{
        cout<<"No it is not a prime no"<<endl;
    }
    return 0;

}
