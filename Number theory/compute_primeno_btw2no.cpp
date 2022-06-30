#include <iostream>
using namespace std;
#define ll long
void prime_seive(int *p) // Generate an array containing prime numbers
{
    // first mark all odd numbers prime
    for (int i = 3; i < 1000000; i+=2)
    {
        p[i] = 1;
    }
    // Seive
    for (ll i = 3; i <= 1000000; i += 2)
    {
        // for the current  umber if it is not marked(it is prime)
        if (p[i] == 1)
        {
            // mark all multiples of number aas prime
            for (ll j = 0; j <= 1000000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    p[2] = 1;
    p[1] = p[0] = 0;
}
int main()
{
    int p[100005]={0};
    prime_seive(p);

    int csum[100005]={0};
    for(int i=0;i<100005;i++)
    {
        csum[i]=csum[i-1]+p[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<csum[b]-csum[a]<<endl;
    
    }
    //precumpute cumulative sum upto an index n

}
