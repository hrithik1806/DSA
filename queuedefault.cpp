#include <iostream>
using namespace std;
#include <queue>
int main()
{
    queue<int>q; 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.front();
    q.pop();
    return 0;
}
