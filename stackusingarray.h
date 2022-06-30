
#include <climits>
template<typename T>
class dynamicstackarray
{
    
    T *data;
    int nextIndex;
    int capacity;
    public:
    dynamicstackarray()
    {
        capacity=4;
        data=new T[capacity];
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
            T *newdata= new T[2*capacity];
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
    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return 0;
        }
        nextIndex--;
        return data[nextIndex];

    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty";
            return 0;
        }
        return data[nextIndex-1];
    }
};

