#include <iostream>
#include<list>
#include<string>

using namespace std;

int main()
{
    list<int> l;
    list<int> l1 = {1, 2, 3, 4, 5, 6};
    list<string> l2 = {"apple", "guava", "mango", "banana"};
    l2.push_back("pineapple");

    // sort
    l2.sort();

    // reverse
    l2.reverse();

    // pop_front
    cout << l2.front() << endl;
    l2.pop_front();

    // add to front of list

    l2.push_front("kiwi");
    cout << l2.back() << endl;
    l2.pop_back();

    // Iterate over the list and print the data
    for (auto s : l2)
    {
        cout << s << "-->";
    }

    cout << endl;

    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << (*it) << "->";
    }

    cout << endl;

    // Some more functions in the list
    l2.push_back("orange");
    l2.push_back("guava");

    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;

    string s;
    cin >> s;
    l2.remove(s);
    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;

    // erase one or more elements
    auto it = l2.begin();
    it++;
    l2.erase(it);
    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;

    // Insert elements in the list
    auto it1 = l2.begin();
    it1++;
    l2.insert(it1, "FruitJuice");

    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;
    return 0;
}