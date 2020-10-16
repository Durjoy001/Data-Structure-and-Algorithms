//https://www.geeksforgeeks.org/print-k-sum-paths-binary-tree/

#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
	int data;
	Node *left,*right;
	Node(int x)
	{
		data = x;
		left = right = NULL;
	}
};
void printPath(int i,vector<int>&v)
{
    for(int j = i;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
}
void printKPathUtil(Node* root,int k,vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    printKPathUtil(root->left,k,v);
    printKPathUtil(root->right,k,v);
    int sum = 0;
    for(int i = v.size()-1;i>=0;i--)
    {
        sum = sum+v[i];
        if(sum == k)
        {
            printPath(i,v);
        }
    }
    v.pop_back();
}
void printKPath(Node *root, int k)
{
	vector<int>v;
	printKPathUtil(root,k,v);
}
int main()
{
	Node *root = new Node(1);
	root->left = new Node(3);
	root->left->left = new Node(2);
	root->left->right = new Node(1);
	root->left->right->left = new Node(1);
	root->right = new Node(-1);
	root->right->left = new Node(4);
	root->right->left->left = new Node(1);
	root->right->left->right = new Node(2);
	root->right->right = new Node(5);
	root->right->right->right = new Node(2);

	int k = 5;
	printKPath(root, k);

	return 0;
}

