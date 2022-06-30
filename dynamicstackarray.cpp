
#include <climits>
class dynamicstackarray
{
    int *data;
    int nextIndex;
    int capacity;
    public:
    dynamicstackarray()
    {
        capacity=4;
        data=new int[capacity];
        nextIndex=0;
        
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
            int *newdata= new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            capacity*=2;
            delete [] data;
            data=newdata;
        }
        
        data[nextIndex]=element;
        nextIndex++;
    }
    //delete an element
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];

    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

