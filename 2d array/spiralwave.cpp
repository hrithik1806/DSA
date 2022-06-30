#include<iostream>
using namespace std;

void spiralprint(int a[][1000],int m,int n)
{
    int startrow=0;
    int startcol=0;
    int endrow=m-1;
    int endcol=n-1;
    while(startrow<=endrow &&startcol<=endcol)
    {
        for (int i=startcol;i<endcol;i++)
        {
            cout<<a[startrow][i]<<",";
        }
        startrow++;
        for(int i=startrow;i<endrow;i++)
        {
            cout<<a[i][endcol];

        }
        endcol--;
        for(int i=endcol;i>=startcol;i--)
        {
            cout<<a[endrow][i]<<",";

        }
        endrow--;
        for(int i=endrow;i>=startrow;i--)
        {
            cout<<a[i][startcol]<<",";

        }
        startcol++;

    }
}
int main()
{
 int m,n;
 cin>>m>>n;
 int a[m][n];
 for(int i=0;i<m;i++)
 {
     for (int j=0;i<n;j++)
     {
         cin>>a[i][j];
     }
 }   
 spiralprint(a,m,n);
    return 0;
}