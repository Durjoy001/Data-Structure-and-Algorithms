//https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

// root: root node of the tree
vector<int> verticalOrder(Node *root)
{
    vector<int>ans;
    map<int,vector<int> >m;
    //here int value will contain hd vale and
    //vector will be contain all the node value which will 
    //in same hd level
    int hd = 0;//initially horizontal distance hd is 0(for root)
    //if we go left than hd would be hd-1;
    //if we go right than hd would be hd+1;
    
    // Create queue to do level order traversal. 
    // Every item of queue contains node and 
    // horizontal distance. 
    queue<pair<Node*,int> > Q;
    Q.push(make_pair(root,hd));
    //using level order traversal we will do this vertical traversal
    while(!Q.empty())
    {
        // pop from queue front
        pair<Node*,int>tmp = Q.front();
        Q.pop();
        hd = tmp.second;
        Node* node = tmp.first;
        // insert this node's data in vector of hash 
        m[hd].push_back(node->data);
        if(node->left != NULL)
        {
            Q.push(make_pair(node->left,hd-1));
        }
        if(node->right != NULL)
        {
            Q.push(make_pair(node->right,hd+1));
        }
    }
     // Traverse the map and print nodes at 
    // every horigontal distance (hd) 
    map<int,vector<int> >:: iterator it;
    for(it = m.begin();it != m.end();it++)
    {
        for(int i = 0;i<it->second.size();i++)
        {
            ans.push_back(it->second[i]);
        }
    }
    return ans;
}
