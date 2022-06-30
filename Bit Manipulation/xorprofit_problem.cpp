#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
        int maxi;
    for(int a=x;a<=y;a++)
    {
        for(int b=x;b<=y;b++)
        {
            maxi=max(maxi,a^b);
        }

    }
    cout<<maxi<<endl;
}