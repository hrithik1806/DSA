#include <climits>
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray(int totalsize)
    {
        data=new int[totalsize];
        nextIndex=0;
        capacity=totalsize;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex==0;
    }
    //insert element
    void push(int element)
    {
        if(nextIndex==capacity)
        {
            cout<<"Stack  Full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    //delete an element
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];

    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

