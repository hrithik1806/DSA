#include<iostream>
using namespace std;
//given n friends who want to go to party on bikes.Each uy can go sinle or a s a couple .Find the number of ways in whih n frriends can go to the party
int factorial(int n)
{
    if(n==0)
    {
    return 1;
    }
    return n*factorial(n-1);

}

int friends(int n)
{
    //base case
    if(n==0 or n==1)

    {
        return 1;
    }
    return 1*friends(n-1)+(factorial(n-1)/factorial(n-2))*friends(n-2);  //(n-1)C(1)
}
int main()
{
    int n;
    cin>>n;
    cout<<friends(n)<<endl;

}