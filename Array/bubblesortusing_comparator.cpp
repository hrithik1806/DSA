#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    cout << "Comparing" << a << "and" << b << endl;
    return a > b;
}
void bubblesort(int a[], int n, bool (&cmp)(int a, int b))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (cmp(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n]; 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubblesort(a, n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}