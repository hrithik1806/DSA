#include<iostream>
#include<algorithm>
using namespace std;
//Comparing the sort function in increasing ordeer or decreasing order
bool compare(int a,int b)
{
    cout<<"Comparing"<<a<<"and"<<b<<endl;
    return a<b;
}
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //Sort an array using sort function
    sort(a,a+n,compare);
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
}