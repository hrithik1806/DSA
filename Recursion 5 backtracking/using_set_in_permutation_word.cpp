// here we are using set because set has the unique property that it gives unique word that are not repeated an it gives in lexicographic order
// if user give abb so there will be repeater words so in order to avoid this we use sets
#include <iostream>
using namespace std;
#include <string>
#include <set>
void permute(char a[], int i, set<string> s)
{
    // base case
    if (a[i] == '\0')
    {
        string t(a);
        s.insert(t);
        return;
    }
    // recursive case
    for (int j = i; a[j] != '\0'; j++)
    {
        swap(a[i], a[j]);
        permute(a, i + 1,s);
        // Backtracking to restore the original array

        swap(a[i], a[j]); // this is the backtracking task
    }
    return;
}
int main()
{
    char a[100];
    cin >> a;
    set<string> s;
    permute(a, 0, s);
    // loop to print
    for (auto str : s)
    {
        cout << str << ",";
    }
    return 0;
}