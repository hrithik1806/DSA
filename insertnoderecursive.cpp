#include<iostream>
using namespace std;
#include"node2.cpp"

node* takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL; 
    while(data!=-1)
    {
        node *newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    
        
    }
    return head;
}
node* insert(node *head,int i,int data)
{
    node *temp=head;
    if(head==NULL)
    {
        return head;
    }
    if(i==head->data)
    {
        node *newnode=new node(data);
        head = newnode;
        return head;
    }

         insert(head->next,i-1,data);
    

    
    return head;
   
    
} 
void print(node *head)
{
    
    while(head!=NULL){
             cout<<head->data;
                head=head->next;
    }

}
int main(){
    node *head=takeinput();
    print(head);
   int i,data;
   cin>>i>>data;
   insert(head,i,data);
   print(head);
}