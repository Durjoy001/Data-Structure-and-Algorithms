//https://www.youtube.com/watch?v=COZK7NATh4k&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=4   

// program to create a BST of integers and search an element in it 
#include<bits/stdc++.h>
using namespace std;
//Definition of Node for Binary search tree
class Node{
public:
    int data;
    Node* left;
    Node* right;
};
// Function to create a new Node in heap
Node* GetNewNode(int data)
{
    Node* tmp = new Node();
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
// To insert data in BST, returns address of root node
Node* Insert(Node* root,int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
    }
    // if data to be inserted is lesser, insert in left subtree.
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }
    // else, insert in right subtree.
    else
    {
        root->right = Insert(root->right,data);
    }
    return root;
}
//To search an element in BST, returns true if element is found
bool Search(Node* root,int element)
{
    if(root == NULL)
    {
        return false;
    }
    if( root->data == element)
    {
        return true;
    }
    else if(element<=root->data)
    {
        Search(root->left,element);
    }
    else
    {
        Search(root->right,element);
    }
}
int main()
{
    Node* root = NULL; // Creating an empty tree

    root = Insert(root,15);
	  root = Insert(root,10);
	  root = Insert(root,20);
	  root = Insert(root,25);
	  root = Insert(root,8);
	  root = Insert(root,12);
    int element;
    cout<<"Enter number be searched\n";
    cin>>element;
    if(Search(root,element)==true)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}
