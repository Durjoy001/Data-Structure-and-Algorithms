//https://www.youtube.com/watch?v=86g8jAQug04&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=9
//https://www.geeksforgeeks.org/level-order-tree-traversal/

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
};
// Function to print Nodes in a binary tree in Level order
void LevelOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    queue<Node*> Q;//for storing all Node address
    Q.push(root);//push root node address
    //while there is at least one unvisited node
    while(!Q.empty())
    {
        Node* current = Q.front();
        Q.pop();//removing the element at front
        char x = current->data;
        cout<<x<<" ";
        if(current->left != NULL)
        {
            Q.push(current->left);
        }
        if(current->right != NULL)
        {
            Q.push(current->right);
        }
    }
}
Node* Insert(Node* root,char data)
{
    if(root==NULL)
    {
        root = new Node();
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }
    else
    {
        root->right = Insert(root->right,data);
    }
    return root;
}
int main()
{
    Node* root = NULL;
    root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');
	LevelOrder(root);
}

