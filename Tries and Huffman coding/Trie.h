#include "Trienode.h"
#include <string>


class Trie

{
     Trienode *root;


public:
Trie(){
root=new Trienode('\0');
}
void insertWord(Trienode *root,string word)
{
    //BaseCase
  if(word.size()==0)
  {
      root->isTerminal=true;
  }
  //Small Calculation
  int index=word[0]-'a';
  Trienode *child;
  if(root->children[index]!=NULL)
  {
      child=root->children[index];
  }
  else{
      child=new Trienode(word[0]);
      root->children[index]=child;
      

  }

  //Recursive call
  insertWord(child,word.substr(1));



}
//For user
void insertWord(string word)
{
    insertWord(root,word);
}
bool search(Trienode *root,string word) {
        // Write your code here

        if(root->children[word[0]-'a']==NULL)
            return false;

        if(word.size()==1)
        {
            return root->children[word[0]-'a']->isTerminal;
        }

        return search(root->children[word[0]-'a'],word.substr(1)); 
    }
    bool search(string word)
    {  return search(root,word);
    }
void removeWord(Trienode *root,string word)
{
    if(word.size()==0)
    {
        root->isTerminal=false;
        return;
    }
    Trienode *child;
    int index=word[0]-'a';
    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else{
        return;
    }
     removeWord(child,word.substr(1));

     //Remove child node if it is useless
     if(child->isTerminal==false)
     {
         for(int i=0;i<26;i++)
         {
              if(child->children[i]!= NULL)
              {
                  return;
              }

         }
         delete child;
         root->children[index]=NULL;

     }

}
void removeWord(string word)
{
    removeWord(root,word);
}
};
