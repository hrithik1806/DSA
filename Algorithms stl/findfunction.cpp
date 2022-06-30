#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(int);

    //Search--find
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);//it will return address of the key at array
    int index=it-arr;//it will return index
    if(index==n)
    {
        cout<<key<<" is not found"<<endl;

    }
    else{
        cout<<key<<"is found at index"<<index<<endl;
    }

    
}