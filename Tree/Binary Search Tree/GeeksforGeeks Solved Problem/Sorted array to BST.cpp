//https://practice.geeksforgeeks.org/problems/array-to-bst/0

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
Node* cBST(vector<int>&v,int sIndex,int eIndex)
{
     if(sIndex>eIndex)
     {
         return NULL;
     }
     int mid = (sIndex+eIndex)/2;
     Node* tmp = newNode(v[mid]);
     tmp->left = cBST(v,sIndex,mid-1);
     tmp->right = cBST(v,mid+1,eIndex);
     return tmp;
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
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    int sIndex=0,eIndex = n-1;
	    Node* root = cBST(v,sIndex,eIndex);
	    preOrder(root);
	    cout<<endl;
	}
	return 0;
}
