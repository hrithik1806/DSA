#include<iostream>
using namespace std;
#include<cstring>
int main()
{
 cout<<"enter no of strings";
 int n;
 cin>>n;   
    char a[1000];
    char largest[1000];
    int len=0;
    int largest_len=0;
    cin.get();
    for(int i=0;i<n;i++)
    {
        cin.getline(a,1000);
        len=strlen(a);
        if(len>largest_len)
        {
            largest_len=len;
            strcpy(largest,a);

        }
    }
    return 0;
}