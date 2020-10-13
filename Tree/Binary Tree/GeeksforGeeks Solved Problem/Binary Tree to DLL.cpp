//https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1
//https://www.geeksforgeeks.org/convert-given-binary-tree-doubly-linked-list-set-3/
//https://www.youtube.com/watch?v=FsxTX7-yhOw
//https://www.geeksforgeeks.org/convert-a-given-binary-tree-to-doubly-linked-list-set-4/

/*Note that use of static variables for prev Node  is not a recommended for GfG practice Problem. 
Imagine a situation where same function is called for two or more trees, the old value of prev would be used in next call for a different tree.
So,we declare prev as global variable and in every function call we make it NULL.*/

/*Intially it can look that in first node of DLL it's prev pointer not points to NULL and last node of DLL it's next pointer not points to NULL.
Because in code we didn't make this 2 thing NULL.But actually bydefault this 2 node points to NULL.cz in Binary tree left most node is our head node and it's
left child is NULL and we not change this so automatically left pointer which is prev in DLL is NULL.Same in last node of DLL it's right pointer in tree is NULL
that's why automatically it's next pointer would be NULL.*/

Node* Prev = NULL;
void bToDLLUtil(Node* root,Node** head)
{
    if(root == NULL)
    {
        return;
    }
    bToDLLUtil(root->left,head);
    if(Prev == NULL)
    {
        *head = root;
    }
    else
    {
        root->left = Prev;
        Prev->right = root;
    }
    Prev = root;
    bToDLLUtil(root->right,head);
}
Node * bToDLL(Node *root)
{
     Prev = NULL;
     Node* head = NULL;
     bToDLLUtil(root,&head);
     return head;
}
