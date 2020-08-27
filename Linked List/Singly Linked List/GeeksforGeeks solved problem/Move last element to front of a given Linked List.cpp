//https://www.geeksforgeeks.org/move-last-element-to-front-of-a-given-linked-list/

void moveToFront(Node **head_ref)  
{
   Node *head = *head_ref;
   Node *prev = NULL;
   if(head==NULL || head->next==NULL)//if linked list is empty or have contain only one node
   {
     return;
   }
   while(head->next != NULL)
   {
      prev = head;
      head = head->next;
   }
   prev->next = NULL;
   head->next = *head_ref;
   *head_ref = head;
}
