#include<iostream>
using namespace std;
//wall is 4xN and tiles are of 1x4 and 4x1
int wall(int n)
{
    if(n<=3)
    {
        return 1;
    }
    else
    {
        return wall(n-1)+wall(n-4);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<wall(n)<<endl;
}