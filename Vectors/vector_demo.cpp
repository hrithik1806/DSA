#include<iostream>
using namespace std;
#include "creating_vector_class.h"

int main()
{
    Vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    v.push_back(5);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }


}