//https://www.geeksforgeeks.org/deletion-circular-linked-list/

/* Function to delete a given node from the list */
void deleteNode(Node** head, int key)  
{ 
   if(*head == NULL)
   {
       return;
   }
   // If the list contains only a single node 
   if(*head->next == head && *head->data == key)
   {
       delete *head;
       *head = NULL;
       return;
   }
   Node *last = *head;
   Node *cur = *head;
   // If head is to be deleted 
   if(*head->data == key)
   {
       while(last->next != *head)
       {
           last = last->next;
       }
       last->next = *head->next;
       delete *head;
       *head = last->next;
   }
   while(last->next != *head && last->next->data != key)
   {
       last = last->next;
   }
   if(last->next->data == key)
   {
       cur = last->next;
       last->next = cur->next;
       delete cur;
   }
   else
   {
       cout<<"element not found"<<endl;
   }
}
