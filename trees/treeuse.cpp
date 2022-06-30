#include <iostream>
#include "treenode.h"
#include <queue>
using namespace std;

Treenode<int> *takeinputlevelwise()
{
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
    Treenode<int>* root=new Treenode<int>(rootdata);
    queue<Treenode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() !=0)
    {
        Treenode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter no of children of"<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++)
        {
            int childData;
            cout<<"Enter"<<i+1<<"th child of"<<front->data<<endl;
            cin>>childData;
            Treenode<int>* child=new Treenode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}


        
    

Treenode<int> *takeinput()
{
    int rootdata;
    cout << "Enter root data";
    cin >> rootdata;
    Treenode<int> *root = new Treenode<int> (rootdata);
    int n;
    cout << "Enter no of children of" << rootdata << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Treenode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}
void printatlevelk(Treenode<int>* root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        printatlevelk(root->children[i],k-1);

    }
}
void printTree(Treenode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout<< root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
void preorder(Treenode<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
        preorder(root->children[i]);
    }
}
void postOrder(Treenode<int>* root) {
    if(root==NULL)
          return;
        for(int i=0;i<root->children.size();i++)
        {
          postOrder(root->children[i]);
        }
        cout<<root->data<<" ";
}
int count = 0;
int numLeafNodes(Treenode<int>* root) {
        
     if(root == NULL)
         return 0;
    
    if(root -> children.size() == 0){
        count++;
    }
    
    for(int i = 0; i < root -> children.size(); i++){
        numLeafNodes(root -> children[i]);
    }
    return count;

}
int numNodes(Treenode<int>* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=numNodes(root->children[i]);

    }
    return ans;
}
void deletetree(Treenode<int>* root)
{
    for(int i=0;i<root->children.size();i++)
    {
        deletetree(root->children[i]);
    }
    delete root;
}
int main()
{
    //   Treenode<int>* root=new Treenode<int>(1);
    // Treenode<int>* node1=new Treenode<int>(2);
    //Treenode<int>* node2=new Treenode<int>(3);
    //root->children.push_back(node1);
    //root->children.push_back(node2);
    Treenode<int>* root = takeinputlevelwise();
    printTree(root);
    cout<<"No of nodes are:"<<numNodes(root);
    return 0;
    cout<<"Enter depth";
    int k;
    cin>>k;
    printatlevelk(root,k);
    cout<<numLeafNodes(root);
    preorder(root);
    postOrder(root);
    delete root;
}