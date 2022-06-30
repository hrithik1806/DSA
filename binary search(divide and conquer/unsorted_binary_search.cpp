#include <iostream>
using namespace std;

int find(int *arr, int n, int k)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] >= arr[s])
        {
            if (k >= arr[s] && k <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if(arr[mid]<=k && arr[e]>=k)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    return -1; 
}

int main()
{
    int arr[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<find(arr,n,k)<<endl;
    return 0;
}