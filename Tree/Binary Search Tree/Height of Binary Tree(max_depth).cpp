//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
//https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=7

// return the Height of the given Binary Tree
int height(Node* root)
{
    if(root == NULL)
    {
        return -1;//if count height as number of edge instead of number of node than we will return -1 else return 0;
    }
    int a = height(root->left);
    int b = height(root->right);
    if(a>b)
    {
       return a+1;
    }
    else
    {
       return b+1;
    }
}
