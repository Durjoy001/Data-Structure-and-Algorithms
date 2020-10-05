https://www.youtube.com/watch?v=gm8DUJJhmY4&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=10
https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

#include<bits/stdc++.h>
using namespace std;
class Node {
public:
	char data;
    Node *left;
	Node *right;
};
void Preorder(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Postorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}
int main()
{
    Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');

	cout<<"Preorder: ";
	Preorder(root);
	cout<<endl;

	cout<<"Inorder: ";
	Inorder(root);
	cout<<endl;

	cout<<"Postorder: ";
	Postorder(root);
	cout<<endl;
}
