#include<iostream>
using namespace std;
//nlogn avg case complexity
//n^2 worst case
int partition(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(; j<=e-1;){
        if(a[j]<=pivot)
        {
            //merge the smaller element in te region 1

            i=i+1;
            swap(a[i],a[j]);
            
        }
        //exapand the larger region
        j=j+1;

    }
    //place the pivot element in the correct position
    swap(a[i+1],a[e]);
    return i+1;


}
void quick_sort(int *arr,int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    //recursive case
    int p=partition(arr,s,e);
     //left part
     quick_sort(arr,s,p-1);
     //right
     quick_sort(arr,p+1,e);
}





int main()
{
    //Quick sort
    int arr[]={2,7,8,6,1,5,4};
    int n=sizeof(arr)/sizeof(int);
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}

