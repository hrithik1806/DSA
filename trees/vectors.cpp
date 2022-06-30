#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector <int> v;
    for (int i=0;i<100;i++)
    {
        cout<<"cap"<<v.capacity();
        cout<<"size"<<v.size()<<endl;

        v.push_back(i+1);

    }
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //dont use[ ]for inseritng
    v.push_back(23);
    v.push_back(234);
    v.pop_back();

    return 0;
}