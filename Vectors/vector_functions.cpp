#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> d{1,2,3,4,5};
    //push back O(1) for most of the time
    d.push_back(16);
    //Pop back /Removes the last element O(1)
    d.pop_back();

    //Insert some elements in he middle O(N)
    d.insert(d.begin()+3,4,100); //we inserted 4 elements of value 100 after the 3rd index
   
   //erase some elements
   d.erase(d.begin()+2);
   d.erase(d.begin()+2,d.begin()+5);

   //size
   cout<<d.size()<<endl;
   cout<<d.capacity()<<endl;
    
    //We avoid th shrink
   // d.resize(8);
   d.resize(18);//if the size is increasing then more memory will be allocated

    cout<<d.capacity()<<endl;

   //remove all the vector elements,doesn delete the memory of the vector
   d.clear();

   cout<<d.size()<<endl;
   for(int x:d)
   {
       cout<<x<<","; 
   }
   d.push_back(10);
   d.push_back(11);
   d.push_back(12);

  cout<<d.front()<<endl;
  cout<<d.back()<<endl;

  //Reserve
  int n;
  cin>>n;
  vector<int> v;
  v.reserve(1000);

  for(int i=0;i<n;i++)
  {
      int no;
      cin>>no;
      v.push_back(no); //this method will take more memory
      cout<<"cHANGING CAPACITY"<<v.capacity()<<endl;

    
  }
  cout<<"Capacity"<<v.capacity()<<endl;
  for(int x:v)
  {
      cout<<x<<",";

  }



    
    for(int x:d)
    {
        cout<<x<<",";
    }
}
