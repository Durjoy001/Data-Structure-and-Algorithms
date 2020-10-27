//https://practice.geeksforgeeks.org/problems/expression-tree/1#

int toInt(string s)
{
    int num = 0;
    //if number is negative
    if(s[0] == '-')
    {
        for(int i = 1;i<s.length();i++)
        {
            num = num*10 + (s[i]-'0');
        }
        num = num * (-1);
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            num = num*10 + (s[i]-'0');
        }
    }
    return num;
}
int evalTree(node* root) {
    if(!root)
    {
        return 0;
    }
    //leaf node,data
    if(!root->left && !root->right)
    {
        return toInt(root->data);
    }
    int l_val = evalTree(root->left);
    int r_val = evalTree(root->right);
    //operator are in string format so use " " this.
    if(root->data == "+")
    {
        return l_val+r_val;
    }
    if(root->data == "-")
    {
        return l_val-r_val;
    }
    if(root->data == "*")
    {
        return l_val*r_val;
    }
    else
    {
        return l_val/r_val;
    }
}
