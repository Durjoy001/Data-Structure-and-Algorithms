//https://www.youtube.com/watch?v=Ut90klNN264&list=PL-pUjcDnciX3Z5AEE8HHRrcfj-987Ia94&index=6
//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1

int minValue(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    else if(root->left == NULL)
    {
        return root->data;
    }
    else
    {
        minValue(root->left);
    }
}
int maxValue(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    else if(root->right == NULL)
    {
        return root->data;
    }
    else
    {
        maxValue(root->right);
    }
}
