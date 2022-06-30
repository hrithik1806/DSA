#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void insert(node *head,int data)
{
    node *n=new node(data);
    node *temp=head;
    n->next=head;
    if(temp!=NULL)
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    else{
        n->next=n;
    }
    head=n;
}
void print(node *head)
{
    node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
    return;
}
    node *getnode(node *head,int data)
    {
        node *temp=head;
        while(temp->next!=head)
        {
            if(temp->data==data)
            {
                return temp;
            }
            temp=temp->next;
        }
        if(temp->data==data)
        {
            return temp;
        }
        return NULL;
    }
    void deletenode(node*&head,int data)
    {
        node *del=getnode(head,data);
        
        if(del==NULL)
        {
            return;
        }
        if(head==del)
        {
          head=head->next;
        }


        node *temp=head;
        while(temp->next!=del)
        {
            temp=temp->next;
        }
        temp->next=del->next;
    
     delete del;
    }
int main()
{
    node *head=NULL;
    insert(head,5);
    insert(head,4);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    print (head);
    deletenode(head,3);
    print(head);
    return 0;
}