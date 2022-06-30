#include<iostream>
using namespace std;
template< typename T>
class QueueUsingArray
{
    T *data;
    int nextindex;
    int firstindex;
    int size;
    int capacity;
    public:
    QueueUsingArray(int s)
    {
        data=new T[s];
        nextindex=0;
        firstindex=-1;
         size=0;
         capacity=s;
    }
    int getsize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void enqueue(T element)
    {
        if(size==capacity)
        {
            cout<<"Queue is full!!"<<endl;
            return;
        }
    
     data[nextindex]=element;
     nextindex=(nextindex+1)%capacity;
     if(firstindex==-1)
     {
         firstindex=0;
     }
     size++;

    }
    T front()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty !"<<endl;
            return 0;
        }
        return data[firstindex];
    }
    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty!!"<<endl;
        }
        T ans=data[firstindex];
        firstindex=(firstindex+1)%capacity;
        size--;
        if(size==0)
        {
            firstindex=-1;
            nextindex=0;

        }
        return ans;

    }
};