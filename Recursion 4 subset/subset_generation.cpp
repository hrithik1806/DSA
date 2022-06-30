//Subset can be non continuous i>e we can choose anything in between
//but sub array is continuos 
//Given a string containing n characters find out all the subsets of that string
#include<iostream>
using namespace std;
void generate_subsequence(char *in,char *out,int i,int j)
{
    //base case
    if(in='\0')
    {
        out='\0';
        cout<<out;
        return;
    }
    //rec case
    //include the current character
        out[j]=in[j];
        generate_subsequence(in,out,i+1,j+1);
        //exclude the current character
        generate_subsequence(in,out,i+1,j);

}  
int main()
{
    char input[]="abc";
    char output[10];
    generate_subsequence(input,output,0,0);

}