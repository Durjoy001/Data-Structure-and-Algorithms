//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
//https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=7

// return the Height of the given Binary Tree
int height(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    int a = height(root->left);
    int b = height(root->right);
    return max(a,b)+1;
}
