#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string,int> ourmap;
    pair<string,int> p("abc",1);
    //insert
    ourmap.insert(p);
    ourmap["def"]=2;

    //find or access
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap.at("abc")<<endl;

    //cout<<ourmap.at("ghi");
    cout<<"size:"<<ourmap.size()<<endl;
    cout<<ourmap["ghi"]<<endl;
    cout<<"size:"<<ourmap.size()<<endl;

    //check presence
    if(ourmap.count("ghi")>0)
    {
        cout<<"ghi is preent";
    }
    //erase
    ourmap.erase("ghi");
    cout<<"size:"<<ourmap.size();


}