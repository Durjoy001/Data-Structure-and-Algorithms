//https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1

vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    if(root == NULL)
    {
        return ans;
    }
    stack<Node*>S1; // For levels to be printed from right to left 
    stack<Node*>S2;//// For levels to be printed from left to right 
    S1.push(root);
    while(!S1.empty() || !S2.empty())
    {
        while(!S1.empty())
        {
            Node* tmp = S1.top();
            ans.push_back(tmp->data);
            S1.pop();
            //Node that is right is pushed before left 
            if(tmp->right != NULL)
            {
                S2.push(tmp->right);
            }
            if(tmp->left != NULL)
            {
                S2.push(tmp->left);
            }
        }
        while(!S2.empty())
        {
            Node* tmp = S2.top();
            ans.push_back(tmp->data);
            S2.pop();
             // Node that is left is pushed before right 
            if(tmp->left != NULL)
            {
                S1.push(tmp->left);
            }
            if(tmp->right != NULL)
            {
                S1.push(tmp->right);
            }
        }
    }
    return ans;
}
