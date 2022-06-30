#include<iostream>
using namespace std;
void readline(int a[],int maxlength)
{
    int i=0;
    char ch=cin.get();
    while(ch!='\n')
    {
        a[i]=ch;
        i++;
        if(i==(maxlength-1)){
        
          break;
        }
    }
        
        ch=cin.get();
        //once out of the loop
        a[i]='\0';
        return;
    
}
int main()
{
    char a[1000];
    //readline(a,100);
    cin.getline(a,1000,'$');//direct function to get character
    cout<<a<<endl;

    return 0;
}