class Trienode

{
    public:
     char data;
     Trienode **children;
     bool isTerminal;
     Trienode(char data)
     {
         this->data=data;
         children =new Trienode *[26];
         for(int i=0;i<26;i++)
         {
             children[i]=NULL;
         }
         isTerminal=false;

     }

};