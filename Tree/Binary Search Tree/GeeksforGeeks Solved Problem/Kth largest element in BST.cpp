//https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1#

//Time Complexity: O(h + k).
//The code first traverses down to the rightmost node which takes O(h) time, then traverses k elements in O(k) time.
//Therefore overall time complexity is O(h + k).

// return the Kth largest element in the given BST rooted at 'root'
void kthLargestUtil(Node* root,int K,int* ans,int* count)
{
    // Base cases, the second condition is important to 
    // avoid unnecessary recursive calls 
    if(root == NULL || *count >= K)
    {
        return;
    }
    kthLargestUtil(root->right,K,ans,count);
    *count = *count + 1;
    if(K == *count)
    {
        *ans = root->data;
        return;
    }
    kthLargestUtil(root->left,K,ans,count);
}
int kthLargest(Node *root, int K)
{
    int ans,count = 0;
    kthLargestUtil(root,K,&ans,&count);
    return ans;
}
