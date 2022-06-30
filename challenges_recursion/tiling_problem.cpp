#include<iostream>
using namespace std;

int noofways(int n,int m)
{
if(n==0)
return 1;
if(n<0)
return 0;

int way1=noofways(n-1,m);
int way2=noofways(n-m,m);
return (way1+way2);
}
