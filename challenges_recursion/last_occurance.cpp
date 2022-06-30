#include<iostream>
using namespace std;
int lastindex(int arr[],int key,int i)
{
    if(i<0)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return lastindex(arr,key,i-1);
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    cout<<lastindex(arr,key,n-1);
}  