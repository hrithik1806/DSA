#include<iostream>
using namespace std;

bool isodd(int n)
{
    return (n & 1);
}
int getbit(int i,int n)
{
    int mask=1<<i;
    int bit=n&mask>0? 1:0;
    return bit;
}
int setBit(int n,int i)
{
 int mask=(1<<i) ;
 int ans=n|mask;
 return ans;

}
void clearBit(int &n,int i)
{
    int mask=~(1<<i);
    n=n&mask;
}
void updateBit(int &n,int i,int v)
{
    int mask=~(1<<i);
    int cleared_n=n&mask;
    n=cleared_n|(v<<i);

}
int clearLastIBits(int n,int i)
{
    int mask=(-1<<i);
    return n&mask;
}
int clearRangeItoJ(int n,int i,int j)
{
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    int ans=n&mask;
    return ans;
    
}


int main()
{
    int n=5;
    int i;
    cin>>i;
    cout<<getbit(n,i)<<endl;
    n=setBit(n,i);
    cout<<"Answer"<<n<<endl;



}