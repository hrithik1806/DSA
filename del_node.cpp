#include<iostream>
using namespace std;
#include"del.cpp"
node* takeinput(){
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while (data!=-1)
    {
        node *newnode=new node(data);
        if(head==NULL){
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
}node* deleteAthead(node* head)
{
    node* deletehead=head;
    head=head->next;
delete deletehead;
return head;
}


node* deletion(node* head,int j){
    node* temp=head;
    if(head->data==j)
    {
        head=temp->next;
        delete temp;
        return head;
    }
    while (temp->next->data!=j)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    return head;
}
node* alldel(node*head,int j)
{
if(head==NULL)
{
    return head;
}
 if(head->next==NULL)
{
    
   return deleteAthead(head);
    
}
else{
   return deletion(head,j);
    

}
}

void print(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }

}
int main()
{
   node *head=takeinput();
  print(head);   
  int j;
  cin>>j;
 print( alldel(head,j));
  
  return 0; 
  
  


}