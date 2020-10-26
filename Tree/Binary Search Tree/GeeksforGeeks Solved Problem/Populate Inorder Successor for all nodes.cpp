//https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1#

void populateNextUtil(node* p,node** succ)
{
    if(p == NULL)
    {
        return;
    }
    populateNextUtil(p->right,succ);
    p->next = *succ;
    *succ = p;
    populateNextUtil(p->left,succ);
}
void populateNext(struct node* p)
{
    node* succ = NULL;
    populateNextUtil(p,&succ);
}
