#include<iostream>
using namespace std;
//We are finding no of words possile from a given string
void permute(char *in,int i)
{
    //base case
    if(in[i]=='\0')
    {
        cout<<in<<",";
        return;
    }
    //Recursion case
    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i],in[j]);
        permute(in,i+1);
        //Backtracking to restore the original array

        swap(in[i],in[j]);//this is the backtracking task

        

    }
}
int main()
{
    char in[100];
    cin>>in;
    permute(in,0);

}