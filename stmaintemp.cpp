#include <iostream>
using namespace std;
#include "StackUsingLL.cpp"
int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.pop();
    cout<<s.top();
}
    


    
