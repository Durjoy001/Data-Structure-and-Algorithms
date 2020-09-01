//https://www.geeksforgeeks.org/delete-a-node-in-a-doubly-linked-list/
//https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

// Function to delete the node at position x
Node* deleteNode(Node **head_ref, int x)
{
    Node *tmp = *head_ref;
    x--;
   while(x--)
   {
       tmp= tmp->next;
       if(tmp == NULL)
       {
           return *head_ref;
       }
   }
   if(tmp == *head_ref)
   {
       *head_ref = tmp->next;
   }
   if(tmp->next != NULL)
   {
       tmp->next->prev = tmp->prev;
   }
   if(tmp->prev != NULL)
   {
       tmp->prev->next = tmp->next;
   }
   delete tmp;
   return *head_ref;
}
