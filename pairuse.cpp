#include<iostream>
using namespace std;
#include "pair.cpp"
int main()
{
    Pair<Pair<int,int>,int>p2;
    p2.setY(10);
    Pair<int,int>p4;
    p4.setX(5);
    p4.setY(15);
    p2.setX(p4);
    //Pair<int> p1;
    //p1.setX(10);
    //p1.setY(20);
    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
    //Pair<> p2;
    //p2.setX(10.01);
    //p2.setY(100.22);
   // cout<<p2.getX()<<" "<<p2.getY()<<endl;

}