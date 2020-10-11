//https://www.geeksforgeeks.org/diagonal-traversal-of-binary-tree/

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
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
/* root - root of the binary tree 
   d -  distance of current line from rightmost 
        -topmost slope. 
   diagonalPrint - multi map to store Diagonal 
                   elements (Passed by Reference) */
void diagonalPrintUtil(Node* root,int d,map<int,vector<int> >&m)
{
    if(root == NULL)
    {
        return;
    }
    // Store all nodes of same line together as a vector 
    m[d].push_back(root->data);
    // Increase the vertical distance if left child 
    diagonalPrintUtil(root->left,d+1,m);
    // Vertical distance remains same for right child 
    diagonalPrintUtil(root->right,d,m);
}
void diagonalPrint(Node* root)
{
    //create a map of vectors to store Diagonal elements 
    map<int,vector<int> >m;
    int d = 0;
    diagonalPrintUtil(root,d,m);
    
    map<int,vector<int> > :: iterator it;
    cout<<"Diagonal Traversal: "<<endl;
    for(it=m.begin();it != m.end();it++)
    {
        for(int i=0;i<it->second.size();i++)
        {
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
    diagonalPrint(root);
}
