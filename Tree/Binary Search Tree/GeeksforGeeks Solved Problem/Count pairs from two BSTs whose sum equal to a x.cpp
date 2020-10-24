//https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#

// You are required to complete this function
void insertMap(Node* root2,map<int,int>&m)
{
    if(root2 == NULL)
    {
        return;
    }
    m[root2->data]++;
    insertMap(root2->left,m);
    insertMap(root2->right,m);
}
void countPairsUtil(Node* root1,map<int,int>&m,int* ans,int x)
{
    if(root1 == NULL)
    {
        return;
    }
    int ref = x - (root1->data);
    if(m[ref] == 1)
    {
        *ans = *ans + 1;
    }
    countPairsUtil(root1->left,m,ans,x);
    countPairsUtil(root1->right,m,ans,x);
}
int countPairs(Node* root1, Node* root2, int x)
{
     map<int,int>m;
     insertMap(root2,m);
     int ans = 0;
     countPairsUtil(root1,m,&ans,x);
     return ans;
}
