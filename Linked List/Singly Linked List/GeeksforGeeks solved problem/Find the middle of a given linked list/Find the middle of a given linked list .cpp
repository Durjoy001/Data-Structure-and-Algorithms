//https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
     Node *mid = head;
     Node *end = head;
     if(head==NULL)
     {
         return -1;
     }
     while(end != NULL && end->next != NULL)
     {
         end = end->next->next;//move it by two
         mid = mid->next;//move it by one
     }
     return mid->data;  
}
