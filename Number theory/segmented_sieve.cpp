#include <iostream>
#include <vector>
using namespace std;
const int N = 100000;
vector<int> primes;
int p[N] = {0};
void sieve()
{
    for (int i = 2; i <= N; i++)
    {
        if (p[i] == 0)
        {
            // store i the primes vector
            primes.push_back(i);
            // marks all the multiples of i as not prime
            for (int j = i; j <= N; j += i)
            {
                p[j] = 1; // not prime
            }
        }
    }
}
int main()
{
    sieve(); // build the sieve once for all
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        bool segment[n - m + 1];
        for (int i = 0; i < n - m + 1; i++)
        {
            segment[i] = 0;
        }
        // here segmented sieve logic
        for (auto x : primes)
        {
            // stop the loop if remaining prime nos are not needed
            if (x * x > n)
            {
                break;
            }
            int start = (m / x) * x;
            // prime no lies in the segment sieve rnge
            if (x >= m and x <= n)
            {
                start = x * 2;
            }
            // marks all multiples in the rage start to n
            for (int i = start; i <= n; i+=x)
            {
                segment[i - m] = 1;
            }
        }
        // loop over range m....n and print the primes
        for (int i = m; i <= n; i++)
        {
            if (segment[i - m] == 0 and i != 1)
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
}
