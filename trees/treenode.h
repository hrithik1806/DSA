#include<iostream>
using namespace std;
#include<vector>
template <typename T>
class Treenode
{
    public:
    T data;
    vector<Treenode<T>*> children;
    Treenode(T data)
    {
        this->data=data;
    }
    ~Treenode()
    {
        for(int i=0;i<children.size();i++)
        {
            delete children[i];
        }
    }

};