#include<iostream>
using namespace std;
int storeOcc(int *a,int i,int n,int key,int *out,int j)  //function to store and return all occurance of key i an array
{
    if(i==n)
    {
        return j;
    }
    if(a[i]==key)
    { 
        out[j]==i;
        //increment j to accomodate current occ
        return storeOcc(a,i+1,n,key,out,j+1);

        
    }
    //j remains unchanged
    return storeOcc(a,i+1,n,key,out,j);


}
void allOcc(int *a,int i,int n,int key) //function to ive all occurane of key in an array
{
    if(i==n)
    {
        return;
    }
    if(i==n)
    {
        return;
    }
    if(a[i]==key)
    {
        cout<<i<<",";
    }
}
int firstOcc(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    //rec case
    if(a[0]==key)
    {
        return 0;
    }
    int i=firstOcc(a+1,n-1,key);
    if(i==-1)
    {
        return -1;
    }
    if(i==-1)
    {
        return -1;
    }
    return i+1;
}
int lastOcc(int *a,int n,int key)
{
    //base case
    if(n==0)
    {
        return -1;

    }
    //rec case
    int i=lastOcc(a+1,n-1,key);
    if(i==-1)
    {
        if(a[0]==key)
        {
            return 0;
        }
        else{
            return -1;
        }

    }
    return i+1;
}


//DIFERENT CASE OF WRITING SAMETHING
int linearSearch(int *a,int i,int n,int key)
{
    //base case
    if(i==n)
    {
        return -1;
    }
    //rec case
    if(a[i]==key)
    {
        return i;
    }
    return linearSearch(a,i+1,n,key);

}
int main()
{
    int arr[]={1,2,3,7,9};
    int key=7;
    int n=sizeof(arr)/sizeof(int);
    cout<<firstOcc(arr,n,key);
    cout<<lastOcc(arr,n,key);

    return 0;
}