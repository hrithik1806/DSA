#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    return b==0? a: gcd(b,a%b);  //we are dividin here where b is dividend and a is divideer

}
int lcm(int a,int b)
{
    //formulaa gc*lcm=a*b;
    int hcf=gcd(a,b);

    int lcm=hcf/(a*a);
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2)<<endl;
    cout<<lcm(n1,n2)<<endl;
    
    return 0;


}
