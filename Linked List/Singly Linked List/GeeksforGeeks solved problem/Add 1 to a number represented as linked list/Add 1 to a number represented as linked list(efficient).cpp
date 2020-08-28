//https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
//https://www.geeksforgeeks.org/add-one-to-a-number-represented-as-linked-list-set-2/?ref=rp

Node* addOne(Node *head) 
{
   Node *last = NULL;
   Node *cur = head;
   while(cur->next != NULL)
   {
       if(cur->data != 9)
       {
           last = cur;
       }
       cur = cur->next;
   }
   if(cur->data != 9)
   {
       cur->data++;
       return head;
   }
   if(last == NULL)
   {
       last = new Node(0);
       last->data = 0;
       last->next = head;
       head = last;
   }
   last->data++;
   last = last->next;
   while(last != NULL)
   {
       last->data = 0;
       last = last->next;
   }
   return head;
}
