#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000];
    int maxSum = 0;
    int currentSum = 0;
    int left;
    int right;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            currentSum = 0;
            for (int k = i; k < j; k++)
            {
                currentSum += a[k];
            }
            cout << currentSum << endl;
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }

    for (int k = left; k < right; k++)
    {
        cout << "Maximum subarray is" << a[k];
    }
    return 0;
}