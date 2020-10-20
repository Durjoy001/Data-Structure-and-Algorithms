//https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1#

// 1. First, push all the elements from root to the left-most leaf node onto a stack. Do this for both trees 
// 2. Peek at the top element of each stack (if non-empty) and print the smaller one. 
// 3. Pop the element off the stack that contains the element we just print 
// 4. Add the right child of the element we just popped onto the stack, as well as all its left descendants
void insertNodes(Node* root,stack<Node*>&s)
{
    while(root != NULL)
    {
        s.push(root);
        root = root->left;
    }
}
void mergeUtil(Node* root1,Node* root2,vector<int>&ans)
{
    stack<Node*>s1;
    stack<Node*>s2;
    // 1.First, push all the elements from root to the left-most leaf node onto a stack. Do this for both trees 
    insertNodes(root1,s1);
    insertNodes(root2,s2);
    while(!s1.empty() || !s2.empty())
    {
        // 2. Peek at the top element of each stack (if non-empty) and print the smaller one. 
       // If one the stack empty assign INT_MAX to value coming from that stack
       int a = (!s1.empty() ? s1.top()->data : INT_MAX);
       int b = (!s2.empty() ? s2.top()->data : INT_MAX);
       if(a <= b)
       {
           //we can direct print the data and in this case space complexity would be O(h1+h2) for stack space
           //But in this GfG problem we have to return the sorted vector so push it to vector.
           //ignore the vector space which is return data,and our space complexity would be O(h1+h2)
           //which is main reason for doing this approach.
           ans.push_back(a);
           Node* tmp = s1.top();
           //3. Pop the element off the stack that contains the element we just printed
           s1.pop();
           //4. Add the right child of the element we just popped onto the stack, as well as all its left descendants
           insertNodes(tmp->right,s1);
       }
       else
       {
           ans.push_back(b);
           Node* tmp = s2.top();
           s2.pop();
           insertNodes(tmp->right,s2);
       }
    }
}
vector<int> merge(Node *root1, Node *root2)
{
    vector<int>ans;
    mergeUtil(root1,root2,ans);
    return ans;
}
