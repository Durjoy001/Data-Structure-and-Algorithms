//https://www.geeksforgeeks.org/iterative-diagonal-traversal-binary-tree/

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
void diagonalPrint(Node* root)
{
   if(root == NULL)
   {
       return;
   }
   queue<Node*>Q;
   Q.push(root);
   Q.push(NULL);//we use NULL for printing end line after we print one diagonal
   while(!Q.empty())
   {
       Node* tmp = Q.front();
       Q.pop();
       /* if current is NULL then insert another 
       for next diagonal and cout nextline*/ 
       if(tmp == NULL)
       {
           cout<<endl;
           if(Q.empty())
           {
               return;
           }
           Q.push(NULL);
       }
       while(tmp)
       {
           cout<<tmp->data<<" ";
           // if left child is present  
           // push into queu
           if(tmp->left != NULL)
           {
               Q.push(tmp->left);
           }
           // current equals to right child 
           tmp = tmp->right;
       }
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
