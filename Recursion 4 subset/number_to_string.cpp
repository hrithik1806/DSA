#include<iostream>
using namespace std;
//Give a number and we have to make compbination of strings from that number 
void generate_strings(char *in,char *out,int i,int j)
{
    //base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //rec case
    //one digit at a time

    int digit=in[i]-'0';
    char ch=digit +'A'-1;
    out[j]=ch;
    generate_strings(in,out,i+1,j+1);

    //two digits ata time
    if(in[i+1]!='\0')
    {
        int seconddigit=in[i+1]-'0';
        int no=10*digit+seconddigit;
        if(no<=26)
        {
            ch=no+'A'-1;
            out[j]=ch;
            generate_strings(in,out,i+2,j+1);

        }
    }
    return;


}
int main()
{
    char a[100];//digits
    cin>>a;
    char out[100];
    generate_strings(a,out,0,0);

    return 0;

}
