//https://www.youtube.com/watch?v=wGXB9OWhPTg
//https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion-and-without-stack/

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node* root = new Node();
    root->data = data;
    root->left = root->right = NULL;
}
void morisInorderTraversal(Node* root)
{
    Node* current = root;
    Node* predecessor;
    if(root = NULL)
    {
        return;
    }
    while(current != NULL)
    {
        if(current->left == NULL)
        {
            cout<<current->data<<endl;
            current = current->right;
        }
        else
        {
            /* Find the inorder predecessor of current */
            predecessor = current->left;
            //To find predecessor keep going right till right node is not null or right node is not current.
            //right most node's right address became current when we create link.
            while(predecessor->right != NULL && predecessor->right != current)
            {
                predecessor = predecessor->right;
            }
            //if right node is null then go left after establishing link from predecessor to current.
            if(predecessor->right == NULL)
            {
                predecessor->right = current;
                current = current->left;
            }
            //left is already visit. Go rigth after visiting current.
             /* Revert the changes made in the 'if' part to restore  
               the original tree i.e., fix the right child 
               of predecessor */
            else
            {
                predecessor->right = NULL;
                cout<<current->data<<endl;
                current = current->right;
            }
        }
    }
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    morisInorderTraversal(root);
}
