#include<iostream>
using namespace std;
#include"node1.cpp"
node* takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    while(data!=-1)
    {
        node *newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
        }
        else{
            node *temp=head;
            while(temp->next!=NULL)
            {
             temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;

        

    }
    return head;
}
void print(node *head)
{
while(head!=NULL)
{
    cout<<head->data<<endl;
    head=head->next;
}
}
int main()
{
    node *head=takeinput();
    print(head);

}