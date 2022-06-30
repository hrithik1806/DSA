#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool checkBalanced(char *exp) {
    stack <char> s;
    
    int len = strlen(exp);
    
    for(int i = 0; i < len; i++){
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' ){
            s.push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}' ){
            if(s.empty()){
                return false;
            }
            
            char ch = s.top();    // remove toppest bracket
            s.pop();    //delete toppest bracket
            if(exp[i] == ')' && ch == '('){
                continue;
            }
            else if( exp[i] == ']' && ch == '['){
                continue;
            }
            else if( exp[i] == '}' && ch == '{'){
                continue;
            }
            else{
                return false;
            }
        }
    }
    
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
  char exp[100];
  cin>>exp;
  cout<<checkBalanced(exp);
  return 0;
}