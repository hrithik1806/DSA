#include <iostream>
using namespace std;
// Problem
// number to spellings
// 2048--two zero four eight
char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight"};
void printSpellings(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // rec case first print the spellings of 204
    printSpellings(n / 10);
    int digit = n % 10;
    cout << words[digit] << " ";
    return;
    // if we do below things then words will print in reverse order

    /*int digit=n%10;
    cout<<words[digit]<<" ";
    printSpellings(n/10);
    */
}
int main()
{
    int n;
    cin >> n;
    printSpellings(n);
}