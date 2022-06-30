#include <iostream>
using namespace std;
#define ll long
// Naive approach O(sqrtn)
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; (i * i) = n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return false;
}
// complexity O(N LOGLOG N)
// Seive approach
void prime_seive(int *p) // Generate an array containing prime numbers
{
    // first mark all numbers prime
    for (int i = 3; i < 1000000; i++)
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
    int n;
    cin >> n;
    int p[100005] = {0};
    prime_seive(p);
    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}