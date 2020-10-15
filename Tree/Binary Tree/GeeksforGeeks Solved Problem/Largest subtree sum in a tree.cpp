//https://www.geeksforgeeks.org/find-largest-subtree-sum-tree/

#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int key;
	Node *left, *right;
};
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}
int findLargestSubtreeSum(Node* root,int& sum)
{
    if(root == NULL)
    {
        return 0;
    }
    int a = findLargestSubtreeSum(root->left,sum);
    int b = findLargestSubtreeSum(root->right,sum);
    int c = root->key + a+b;
    if(sum<c)
    {
        sum = c;
    }
    return c;
}
int findLargestSubtreeSum(Node* root)
{
	int sum = INT_MIN;
	findLargestSubtreeSum(root,sum);
	return sum;
}
int main()
{
	/*
			1
			/ \
			/	 \
		-2	 3
		/ \	 / \
		/ \ / \
		4	 5 -6	 2
	*/

	Node* root = newNode(1);
	root->left = newNode(-2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(-6);
	root->right->right = newNode(2);

	cout << findLargestSubtreeSum(root);
	return 0;
}

