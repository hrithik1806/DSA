#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int i=0;
    int j=n-1;
    int currentsum=0;
    while(i<j)
    {
        currentsum=a[i]+a[j];
        if(currentsum>sum)
        {
            j--;
        }
        if(currentsum<sum)
        {
            i++;
        }
        if(currentsum==sum)
        {
            cout<<a[i]<<"and"<<a[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}