#include<iostream>
using namespace std
void tower(int n, chae source,char helper,char dest)
{
    if(n==0)
    {
        return ;
    }
    move(n-1,src,dest,helper);
    cout<<"Shifting"<<n<<"from"<<source<<"to"<<dest<<endl;
    move(n-1,helper,sourcerc,dest);

}
int main()
{
    int n;
    cin>>n;
    tower(n,'A','B','C');
    

}