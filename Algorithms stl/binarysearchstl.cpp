#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={20,30,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    bool present=binary_search(arr,arr+n,key);//using binary searcgh with stl
    if(present)
    {
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is absent"<<endl;
    }

    //Two more things
    //Get the index of the element
    //lower_bound(s,e,key)  upper_bound(s,e,key);

    auto lb=lower_bound(arr,arr+n,40);
    cout<<"lower bound of 40 is"<<lb-arr<<endl;//return index of element >=key(first occuring 40 is lower bound)
    if((lb-arr)==n)
    {
        cout<<"key is not present"<<endl;
    }

    auto ub=upper_bound(arr,arr+n,40);
    cout<<"upper bound of 40 is"<<ub-arr<<endl;//return index of element >key(first occuring element after 40 is upper bound)
   
    cout<<"Occurance of 40 is"<<ub-lb<<endl;

}