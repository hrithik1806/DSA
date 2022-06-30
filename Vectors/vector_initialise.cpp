#include<iostream>
using namespace std;
#include<vector>

int main()
{
    //You can create and initialise a vector
    vector <int> a;
    vector<int> b(5,10); //five integers with value 10-initialise a vector of zeros (n,0)
    vector<int> c(b.begin(),b.end());
    vector <int> d{1,2,3,4,5,6};


    //look at over how we can iterate over the vector
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<",";
    }
    cout<<endl;
    for(auto it=b.begin();it!=b.end();it++)  //we can replace auto with vector<int>::iterator
    {
        cout<<(*it)<<",";

    }
    cout<<endl;
    //for each loop
    for(int x:d) //here we can use auto instead of int
    {
        cout<<x<<",";
    }
    cout<<endl;
    //Discuss more functions
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
    int no;
    cin>>no;
    v.push_back(no);
    }
    for(int x:v)
    {
        cout<<x<<",";

    }
    //Understanding at memory level what are the difference in two
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;//size of underlying array
    cout<<v.max_size()<<endl;//maximum no of elements a vector can hold in the worst case acc to aavailable memory in the system
}