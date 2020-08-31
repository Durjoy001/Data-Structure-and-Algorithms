//https://practice.geeksforgeeks.org/problems/circular-linked-list/1

bool isCircular(Node *head)
{
   Node *tmp = head;
   // An empty linked list is circular
    if (head == NULL)
         return  1;
   while(tmp != NULL)
   {
       tmp = tmp->next;
       if(tmp == head)
       {
           return 1;
       }
   }
   return 0;
}
