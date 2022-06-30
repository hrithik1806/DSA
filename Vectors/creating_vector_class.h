template<typename T>
class Vector
{
    T cs; //curent size 
    T ms; //maximum size
    T *arr;  

    public:
    Vector()
    {
        cs=0;
        ms=1;
        arr=new T[ms];


    }
    void push_back(T d)
    {
        if(cs==ms)
        {
            T *oldarr=arr;
            arr=new T[2*ms];
            ms=2*ms;
            for(int i=0;i<cs;i++)
            {
                arr[i]=oldarr[i];
            }
            delete [] oldarr;

        }
        arr[cs]=d;
        cs++;
    }
    void pop_back()
    {
        cs--;
    }
    int front() const
    {
        return arr[0];
    }
    int back() const
    {
        return arr[cs-1];
    }
    bool empty() const
    {
        return cs==0;
    }
    int capacity() const
    {
        return ms;
    }
    int size() const
    {
        return cs;

    }

    //operator overloading
    int operator[](const int i)
    {
        return arr[i];
    }


};