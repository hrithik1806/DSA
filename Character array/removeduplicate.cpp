#include<iostream>
using namespace std;
#include<cstring>
void removeduplicate(char a[])
{
    int l=strlen(a);
    int prev=0;
    for(int current=0;current<l;current++)
    {
        if(a[current]!=a[prev])
        {
            prev++;
            a[prev]=a[current];
        }
    }
    a[prev+1]='\0';
}
int main()
{
 char a[1000];
 cin.get(a,1000);
 removeduplicate(a);
 cout<<a<<endl;   
    return 0;
}