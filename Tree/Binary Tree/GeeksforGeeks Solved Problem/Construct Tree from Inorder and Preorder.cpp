//https://practice.geeksforgeeks.org/problems/construct-tree-1/1

int preIndex = 0;
Node* newNode(int data)
{
    Node* tmp = new Node(data);
    return (tmp);
}
Node* buildTreeWrapUtil(int in[],int pre[],int inStart,int inEnd,unordered_map<int,int>&m)
{
    //preIndex = 0;
    if(inStart > inEnd)
    {
        return NULL;
    }
    int current = pre[preIndex++];
    Node* tNode = newNode(current);
    /* If this node has no children then return */
    if(inStart == inEnd)
    {
        return tNode;
    }
     /* Else find the index of this node in Inorder traversal */
     int inIndex = m[current];
     /* Using index in Inorder traversal, construct left and  
    right subtress */
    tNode->left =  buildTreeWrapUtil(in,pre,inStart,inIndex-1,m);
    tNode->right = buildTreeWrapUtil(in,pre,inIndex+1,inEnd,m);
    return tNode;
}
Node* buildTreeWrap(int in[],int pre[],int n)
{
    unordered_map<int,int>m;
    // Store indexes of all items in inorder so that we 
    // we can quickly find
    for(int i=0;i<n;i++)
    {
        m[in[i]] = i;
    }
    return buildTreeWrapUtil(in,pre,0,n-1,m);
}
Node* buildTree(int in[],int pre[], int n)
{
    preIndex = 0;
    Node* root = buildTreeWrap(in,pre,n);
    return root;
}
