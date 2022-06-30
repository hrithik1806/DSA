#include <iostream>
#include "btrees.h"
using namespace std;
#include <queue>
BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of" << front->data << endl;
        int leftchilddata;
        cin >> leftchilddata;
        if (leftchilddata != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftchilddata);
            front->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter right child of" << front->data << endl;
        int rightchilddata;
        cin >> rightchilddata;
        if (rightchilddata != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightchilddata);
            front->left = child;
            pendingNodes.push(child);
        }
        return root;
    }
}

int numnodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + numnodes(root->left) + numnodes(root->right);
}
void inorder(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    printTree(root->left);
    printTree(root->right);
}
BinaryTreeNode<int> *takeInput()
{
    int rootdata;
    cout << "Enter data" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
}
BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int> *root , int k){
    if(root==NULL)
        return root;
    
    if(root->data== k)
        return root;

   
    if(root->data > k)
    return searchInBST(root->left , k);
        
    if( root->data < k )
    return searchInBST(root->right , k);
}
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
    
   if ( NULL == root )  
        return;  
      
  
    if ( k1 < root->data )  
        elementsInRangeK1K2(root->left, k1, k2);  
   
    if ( k1 <= root->data && k2 >= root->data )  
        cout<<root->data<<" ";  
      
  
    if ( k2 > root->data )  
        elementsInRangeK1K2(root->right, k1, k2);  

}

int maximum(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    return max(root->data,max(maximum(root->left),maximum(root->right)));

}
int minimum(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    return min(root->data,min(minimum(root->left),minimum(root->right)));
}
bool isBST(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return true;
    }
    int leftMax=maximum(root->left);
    int rightMin=minimum(root->right);
    bool output=(root->data>leftMax)&&(root->data<=rightMin)&&isBST(root->left)77 isBST(root->right);
    return output;
}
class IsBSTReturn
{
    public:
    bool isBST;
    int minimum;
    int maximum;
}
IsBSTReturn isBST2(BinaryTreeNode<int>* root)
{
if(root==NULL)
{
    IsBSTReturn output;
    output.isBST=true;
    output.minimum=INT_MAX;
    output.maximum=INT_MIN;
    return output;
}
IsBSTReturn leftOutput=isBST2(root->left);
IsBSTReturn rightOutput=isBST2(root->right);
int minimum=min(root->data,min(leftOutput.minimum,rightOutput.minimum));
int maximum=max(root->data,max(leftOutput.maximum,rightOutput.maximum));
bool isBSTFinal=(root->data>leftOutput.maximum)&&(root->data<=rightOutput.maximum)&&leftOutput.isBST&&rightOutput.isBST;
IsBSTRETURN output;
output.minimum=INT_MAX;
output.maximum=INT_MIN;
output.isBST=isBSTFinal;
return output;




}
}
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    cout<<isBST(root)<<endl;
    printTree(root);
    delete root;
    cout << numnodes(root);
    inorder(root);
    return 0;
}