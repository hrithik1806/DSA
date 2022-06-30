#include<iostream>
using namespace std;
void merge(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid and j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    //We need to copy all the elements to the original array
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }


}
void merge_sort(int a[],int s,int e)
{
    //BAse case
    if(s>=e)
    {
        return;
    }
    //Follow 3 steps
    //1,Divide
    //2.Sort
    //3.MErge
    int mid=(s+e)/2;
    //Recursivel the arrays s,mid,mid+1 and e
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    //now merge the arays
    merge(a,s,e);

}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";

    }
}