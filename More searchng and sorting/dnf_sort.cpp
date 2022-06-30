#include<iostream>
using namespace std;
void dnf_sort(int a[],int n)
{
    //sort arrays of 0's 1's and 2's
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        if(a[mid]==1)
        {
            mid++;
        }
        if(a[mid]==2)
        {
            swap(a[mid],a[high]);
            high--;

        }
    }
    return;
}
int main()
{
    int a[]={2,1,1,1,1,0,1,1,1,0,0,2,0};
    int n=sizeof(a)/sizeof(int);
    dnf_sort(a,n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }

}