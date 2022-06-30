#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[100005];
    cin>>n;
    int no;
    int res=0;

    for(int i=0;i<n;i++)
    {
        cin>>no;
        a[i]=no;
        res=res^no;
    }
    int temp=res;
    int pos=0;
    while((temp&1)==0)
    {
        pos++;
        temp=temp>>1;

    }

    //the first bit in xor is at pos x
    int mask=(1<<pos);

    //find those numbers which contain set bit at position pos
    int x=0;
    int y=0;
    for(int i=0;i<n;i++)
    {
    if((a[i]&mask)>0){
        x=x^a[i];
    }
    }
    y=res^x;

    cout<<min(x,y)<<" "<<max(x,y)<<endl;
    return 0;
}

