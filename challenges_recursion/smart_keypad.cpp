#include<iostream>
using namespace std;
char keypad[][10] = {"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};

//char keypad[][10]={" ", ".+@$", "abc", "def", "ghi","jkl" , "mno", "pqrs" , "tuv", "wxyz"};
void generate_names(char *in,char *out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit=in[i]-'0';
    for(int k=0;keypad[digit][k]!='\0';k++)
    {
        out[j]=keypad[digit][k];
        generate_names(in,out,i+1,j+1);

    }
    return;


    

}
int main()
{
    char in[100];
    cin>>in;
    char out[100];
    generate_names(in,out,0,0);
}