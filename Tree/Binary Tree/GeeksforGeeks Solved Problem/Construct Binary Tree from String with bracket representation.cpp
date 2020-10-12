//https://www.geeksforgeeks.org/construct-binary-tree-string-bracket-representation/

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
    return root;
}
void preOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int findIndex (string str,int startIndex,int endIndex)
{
    stack<char>s;
    if(startIndex > endIndex)
    {
        return -1;
    }
    for(int i = startIndex;i<=endIndex;i++)
    {
        if(str[i]=='(')
        {
            s.push(str[i]);
        }
        else if(str[i] == ')')
        {
            s.pop();
            if(s.empty())
            {
                return i;
            }
        }
    }
    return -1;
}
Node* treeFromString(string str,int startIndex,int endIndex)
{
    if(startIndex > endIndex)
    {
        return NULL;
    }
    Node* tNode = newNode(str[startIndex]-'0');
    int index = -1;
    if(startIndex+1 <= endIndex && str[startIndex+1] == '(' )
    {
        index = findIndex(str,startIndex,endIndex);
    }
    if(index != -1)
    {
        tNode->left = treeFromString(str,startIndex+2,index-1);
        tNode->right = treeFromString(str,index+2,endIndex-1);
    }
    return tNode;
}
int main()
{
    string str = "4(2(3)(1))(6(5))";
    Node* root = treeFromString(str, 0, str.size() - 1);
    preOrder(root);
}
