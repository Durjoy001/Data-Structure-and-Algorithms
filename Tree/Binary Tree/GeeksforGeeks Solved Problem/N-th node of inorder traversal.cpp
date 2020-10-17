//https://www.geeksforgeeks.org/find-n-th-node-inorder-traversal/

#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
/*void NthInorderUtil(Node* root,int n,int* count)
{
    if(root==NULL)
    {
        return;
    }
    NthInorderUtil(root->left,n,count);
    *count = *count + 1;
    //cout<<root->data<<endl;
    if(*count == n)
    {
        cout<<root->data<<endl;
    }
    NthInorderUtil(root->right,n,count);
}
void NthInorder(Node* root,int n)
{
    int count = 0;
    NthInorderUtil(root,n,&count);
}*/
//if we use static keyword for count than our function will be
void NthInorder(Node* root,int n)
{
    static int count = 0;
    if(root == NULL)
    {
        return;
    }
    if(count<=n)
    {
        NthInorder(root->left, n);
        count++;
        if(count==n)
        {
            cout<<root->data<<endl;
        }
        NthInorder(root->right, n);
    }
}
int main()
{
    Node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);

    int n = 4;
    NthInorder(root, n);
    return 0;
}
