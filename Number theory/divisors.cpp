#include <iostream>
using namespace std;
#include <vector>

vector<int> primeSieve(int *p, int n)
{
    p[0] = p[1] = 0;
    p[2] = 1;
    // Let us mark all odd numbers as prime numbers(initialisaton)
    for (int i = 3; i <= n; i += 2)
    {
        p[i] = 1;
    }
    // Seive login to make alll non prime nos 0
    // Optimisation:Iterate over only odd numbers
    for (int i = 3; i <= n; i += 2)
    {
        if (p[i])
        {
            // Mark all the ultiples of that number as not prime
            // 2.Optimisation:take a jumpof 2i sstarting from i*i
            for (int j = i * i; j <= n; j += 2 * i)
            {
                p[j] = 0;
            }
        }
    }
    vector<int> primes;
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (p[i == 1])
        {
            primes.push_back(i);
        }
    }
    return primes;
}
int no_of_divisors(int m,vector<int>&primes)

{
     int i=0;
    int p = primes[0];
    int ans=1;
    while (p * p <= m)
    {
        if (m % p == 0)
        {
            int cnt=0;
            while (m % p == 0)
            {
                cnt++;
                m = m / p;
            }
            ans=ans*(cnt+1);
        }
        // go to the next position
        i++;
        p = primes[i];
    }
    if (m != 1)
    {
        ans=ans*2;
    }
    return ans;
}
int main()
{
   const int N = 1000000;       
    int p[N];
    for(int i=0;i<N;i++)
    {
        p[i]=0;
    }
    vector<int> primes = primeSieve(p, 10000);
    int t;
    cin >> t;
    while (t--)
    {
        int no;
        cin >> no;
         int divisors = no_of_divisors(no, primes);
        
        
            cout << divisors << " " << endl;
    
    }
    return 0;
}
