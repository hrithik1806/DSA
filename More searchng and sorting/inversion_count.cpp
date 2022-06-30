#include<iostream>
using namespace std;
int merge(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100000];
    int cnt=0;
    while (i<=mid and j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
            cnt+=mid-i+1;
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
    return cnt;


}
int inversion_count(int *a,int s,int e)
{
    //BAse case
    if(s>=e)
    {
        return 0;
    }
    
    int mid=(s+e)/2;
    //Recursivel the arrays s,mid,mid+1 and e
    int x=inversion_count(a,s,mid);
    int y=inversion_count(a,mid+1,e);
    int z=merge(a,s,e);
    return x+y+z;

}
int main()
{
    int a[]={1,5,2,6,3,0};

    int n=sizeof(a)/sizeof(int);

    
    
    cout<<inversion_count(a,0,n-1);
    
}