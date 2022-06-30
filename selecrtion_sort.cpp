#include<iostream>
using namespace std;

void Selection_sort(int a[],int n)
{
for(int i=0;i<n;i++)
{
   int min_index=i;
   for(int j=i;j<n;j++)
   {
     if(a[j]<a[min_index])
     {
         min_index=j;
     }

   }

   swap(a[i],a[min_index]);
}
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
    Selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<endl;
    }
    return 0;
}