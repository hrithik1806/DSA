#include <iostream>
using namespace std;
#define INT_MAX 1000000
int main()
{
    int n, k;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int ans = INT_MAX;
        // Factorizatio of k
        // p1,p2p3,p4,.....pl
        int occ = 0;
        for (int i = 2; i * i <= k; i++)
        {
            if (k % i == 0)
            {
                occ = 0;
                while (k % i == 0)
                {
                    occ++;
                    k = k / i;
                }
                // find the powers of i in n!
                int cnt = 0;
                int p = i;
                while (p <= n)
                {
                    cnt += n / p;
                    p = p * i;
                }
                ans = min(ans, cnt / occ);
            }
        }
        if (k > 1)
        {
            int p = k;
            int cnt = 0;
            while (p <= n)
            {
                cnt += n / p;
                p *= k;
            }
            ans = min(ans, cnt);
        }
        if (ans == INT_MAX)
        {
            ans = 0;
        }
        cout << ans << endl;
    }
}