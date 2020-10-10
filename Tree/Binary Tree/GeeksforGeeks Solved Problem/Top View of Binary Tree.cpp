//https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

////If don't understand than see vertical travesal code

// function should print the topView of the binary tree
void topView(struct Node *root)
{
    queue<pair<Node*,int> >Q;
    int hd = 0;//horizontal distance of root is 0
    Q.push(make_pair(root,hd));
    map<int,int>m;
    while(!Q.empty())
    {
        pair<Node*,int> tmp = Q.front();
        Q.pop();
        hd = tmp.second;
        Node* node = tmp.first;
        // count function returns 1 if the container  
        // contains an element whose key is equivalent  
        // to hd, or returns zero otherwise. 
        if(m.count(hd)==0)
        {
            m[hd] = node->data;
        }
        if(node->left != NULL)
        {
            Q.push(make_pair(node->left,hd-1));
        }
        if(node->right != NULL)
        {
            Q.push(make_pair(node->right,hd+1));
        }
    }
    for(auto i = m.begin();i != m.end();i++)
    {
        cout<<i->second<<" ";
    }
}
