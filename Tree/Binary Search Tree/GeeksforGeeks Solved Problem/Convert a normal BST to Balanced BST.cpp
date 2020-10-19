//https://www.geeksforgeeks.org/convert-normal-bst-balanced-bst/

//we store node address instead of node data,because adress is alreday created in memory
//we just have to change the left and right link of node
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
	int data;
	Node* left, *right;
};
void storeBSTNodes(Node* root, vector<Node*> &nodes)
{
    //we store node address in inorder fasion
	if (root==NULL)
		return;
	storeBSTNodes(root->left, nodes);
	nodes.push_back(root);
	storeBSTNodes(root->right, nodes);
}
/* Recursive function to construct binary tree */
Node* buildTreeUtil(vector<Node*> &nodes, int start,int end)
{
	if (start > end)
		return NULL;

	/* Get the middle element and make it root */
	int mid = (start + end)/2;
	Node *root = nodes[mid];
	root->left = buildTreeUtil(nodes, start, mid-1);
	root->right = buildTreeUtil(nodes, mid+1, end);
	return root;
}
Node* buildTree(Node* root)
{
	// Store nodes of given BST in sorted order ,we store their address
	vector<Node *> nodes;
	storeBSTNodes(root, nodes);

	// Constructs BST from nodes[]
	int n = nodes.size();
	return buildTreeUtil(nodes, 0, n-1);
}
Node* newNode(int data)
{
	Node* node = new Node();
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}
void preOrder(Node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	preOrder(node->left);
	preOrder(node->right);
}
int main()
{
	Node* root = newNode(10);
	root->left = newNode(8);
	root->left->left = newNode(7);
	root->left->left->left = newNode(6);
	root->left->left->left->left = newNode(5);

	root = buildTree(root);

	printf("Preorder traversal of balanced "
			"BST is : \n");
	preOrder(root);

	return 0;
}
