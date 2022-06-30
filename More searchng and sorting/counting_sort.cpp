#include<iostream>
using namespace std;
//Complexity--O(N-Range) it  will be O(N) if range is very small;
void countingSort(int *a,int n)
{
        int largest=-1;
        //largest in the array assuming no>0
        for(int i=0;i<n;i++)
        {
          largest=max(largest,a[i]);
        }
        //create a freq array8
        int *freq=new int[largest+1]{0};
        
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;

    }
    //put the elements back into the array a by reading frequency array
    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(freq[i]>0)
        {
            a[j]=i;
            freq[i]--;
            j++;
        }


    }

}
int main()
{
    int a[]={88,97,10,12,15,1,5,6,12,5,8};
    int n=sizeof(a)/sizeof(int);
    countingSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}