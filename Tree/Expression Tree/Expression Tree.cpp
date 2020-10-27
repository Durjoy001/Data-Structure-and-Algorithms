//https://www.geeksforgeeks.org/expression-tree/

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    char data;
    Node* left;
    Node* right;
};
Node* newNode(char data)
{
    Node* root = new Node();
    root->data = data;
    root->left = root->right = NULL;
    return root;
}
void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool isOperator(char c)
{
    if(c=='+' || c== '-' || c== '*' || c== '/')
    {
        return true;
    }
    return false;
}
Node* constructTree(char postfix[])
{
    stack<Node*>s;
    Node *t,*t1,*t2;
    int l = strlen(postfix);
    for(int i=0;i<l;i++)
    {
        // If operand, simply push into stack
        if(!isOperator(postfix[i]))
        {
            t = newNode(postfix[i]);
            s.push(t);
        }
        else// operator
        {
            t = newNode(postfix[i]);
            t1 = s.top();
            s.pop();
            t2 = s.top();
            s.pop();
            t->right = t1;
            t->left = t2;
            s.push(t);
        }
    }
    t = s.top();
    s.pop();
    return t;
}
int main()
{
    char postfix[] = "ab+ef*g*-";
    Node* root = constructTree(postfix);
    printf("infix expression is \n");
    inorder(root);
    return 0;
}
