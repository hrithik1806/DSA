#include<iostream>
using namespace std;

int first_occurance(int a[],int n,int key)
{
int start=0;
int end=n-1;
int ans=-1;
//update answer such that its gets lower aand lower

while(start<=end)
{
    int mid=(start+end)/2;
if(a[mid]==key)
{
    
    ans=mid;
    end=mid-1;
}
else if(a[mid]>key)
{
end=mid-1;
}
else{
    start=mid+1;
}
}
return ans;
}
int last_occurance(int a[],int n,int key)
{
    int start=0;
int end=n-1;
int ans=-1;
//update answer such that its gets lower aand lower

while(start<=end)
{
    int mid=(start+end)/2;
if(a[mid]==key)
{
    
    ans=mid;
    start=mid+1;
}
else if(a[mid]>key)
{
end=mid-1;
}
else{
    start=mid+1;
}
}
return ans;
}       


int main()
{
    int n;
    int a[10000];
    cin>>n;//size for array

    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<first_occurance(a,n,key)<<endl;
    cout<<last_occurance(a,n,key)<<endl;
}