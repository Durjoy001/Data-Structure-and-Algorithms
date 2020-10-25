//https://www.geeksforgeeks.org/replace-every-element-with-the-least-greater-element-on-its-right/

#include <bits/stdc++.h>
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
void Insert(int data,Node*& root,Node*& succ)
{
    if(root == NULL)
    {
        root = newNode(data);
    }
    if(data < root->data)
    {
        succ = root;
        Insert(data,root->left,succ);
    }
    else if(data > root->data)
    {
        Insert(data,root->right,succ);
    }
}
void Replace(int arr[],int n)
{
    Node* root = NULL;
    for(int i=n-1;i>=0;i--)
    {
        Node* succ = NULL;
        Insert(arr[i],root,succ);
        if(succ)
        {
            arr[i] = succ->data;
        }
        else
        {
            arr[i] = -1;
        }
    }
}
int main()
{
	int arr[] = { 8, 58, 71, 18, 31, 32, 63, 92,
				43, 3, 91, 93, 25, 80, 28 };
	int n = sizeof(arr)/ sizeof(arr[0]);

	Replace(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

