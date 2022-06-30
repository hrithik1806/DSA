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
vector<int> factorise(int m, vector<int> &primes)
{
    vector<int> factors;
    factors.clear();
    int i = 0;
    int p = primes[0];
    while (p * p <= m)
    {
        if (m % p == 0)
        {
            factors.push_back(p);
            while (m % p == 0)
            {
                m = m / p;
            }
        }
        // go to the next position
        i++;
        p = primes[i];
    }
    if (m != 1)
    {
        factors.push_back(m);
    }
    return factors;
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
        vector<int> factors = factorise(no, primes);
        for (auto f : factors)
        {
            cout << f << " " << endl;
        }
    }
    return 0;
}
