//https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

// your task is to complete this function
void sumOfLongRootToLeafPathUtil(Node* root,int sum,int level,int& max_level,int& max_sum)
{
    if(root == NULL)
    {
         if(max_level < level)
         {
             max_level = level;
             max_sum = sum;
         }
         else if(max_level == level && sum>max_sum)
         {
             max_sum = sum;
         }
         return;
    }
    sumOfLongRootToLeafPathUtil(root->left,sum+(root->data),level+1,max_level,max_sum);
    sumOfLongRootToLeafPathUtil(root->right,sum+(root->data),level+1,max_level,max_sum);
}
int sumOfLongRootToLeafPath(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int max_level = 0,max_sum = INT_MIN;
	sumOfLongRootToLeafPathUtil(root,0,0,max_level,max_sum);
	return max_sum;
}
