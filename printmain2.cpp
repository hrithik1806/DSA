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
void insert(node *head,int i,int data)
{
    node *newnode=new node(data);
int count=0;
node *temp=head;
while(count<i-1)
{ 
    temp=temp->next;
    count++;
}
newnode->next=temp->next;
    temp->next=newnode;

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