#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    //base case
    if(n==1)
    {
        return;
    }
    //rec case
    //after you have movd the element in the current part to the ed of the array by pairwise swappin
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);

        }
    }
    //sort the first n-1 elements
    bubble_sort(a,n-1);

}
void bubble_sort_recursive(int a[],int j,int n)
{
    //base case
    if(n==1)
    {
        return;
    }
    if(j==n-1)
    {
        //single passs of the current array has been done
        return bubble_sort_recursive(a,0 ,n-1);

    }
    //rec case
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);

        
    }
    bubble_sort_recursive(a,j+1,n);
    return;
}
int main()
{
    int j=0;
int a[]={5,4,3,1,2};
int n=5;
bubble_sort_recursive(a,j,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}


}
