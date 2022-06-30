#include<iostream>
using namespace std;
int partition(int a[],int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(;j<=e-1;)
    {
        if(a[j]<=a[pivot])
        {
            i+=1;
            swap(a[i],a[j]);

        }
        j=j+1;
    }
    swap(a[i+1],a[e]);
    return i+1;

}
void quicksort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
    

}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    
}