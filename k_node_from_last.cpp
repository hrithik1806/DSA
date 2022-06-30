#include<iostream>
using namespace std;
#include "takeinputclass.cpp"

void insertatHead(node* &head,int data)
{
    node *n=new node(data);
    if(head==NULL)
    {
        
        head= new node(data);
        return;
    }
    
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    
}
node* takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    while(data!=-1)
    {
        insertatHead(head,data);
        cin>>data;
    }
    return head;

}

void print(node* head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}

void reverse(node*&head)
{
node *c=head;
node *prev=NULL;
node *n;
while(c!=NULL)
{
    n=c->next;
    c->next=prev;
    prev=c;
    c=n;
    
}
head=prev;
}
node* recreverse(node*head){
    if(head->next==NULL or head==NULL){
        return head;
    }
    node*smhead=recreverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return smhead;
}
node* midpoint(node*&head)
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    node *slow=head;
    node *fast=head->next;
    while(fast!=NULL and fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* kfromlast(node*head,int k)
{
    //int k;
    //cin>>k;
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    node *slow=head;
    node *fast=head;
    for(int i=0;i<k;i++)
    {
    fast=head->next;
    }
    while(fast!=NULL and fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
ostream& operator<<(ostream &os,node*head)
{
    print(head);
    return os;
}
istream& operator>>(istream &is,node*&head)
{
    head=takeinput();
    return is;
}
int main()
{
       // node *head=takeinput();
       //  node *head2=takeinput();
       node*head;
      // node*head2;
      // cin>>head>>head2;
       cin>>head;
        cout<<head;
      //  print(head);
     //     reverse(head);
  //   cout<<head<<head2;
   //  recrecursive(head);
   //  cout<<head<<head2;
   int k;
   cin>>k;
  node *mid= kfromlast(head,k);
  cout<<mid->data;
  
   return 0;
  }
    

    

    