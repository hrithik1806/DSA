#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char a[])
{
  int i=0;
  int j=strlen(a)-1;
  while(i<j)
  {
      if(a[i]==a[j])
      {
          i++;
          j--;
      }
      else{
          return false;
      }

  }
  return true;

}
int main()
{
    char a[1000];
    cin.get(a,1000);
    if(ispalindrome(a))
    {
        cout<<"Palindrome"<<endl;

    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}