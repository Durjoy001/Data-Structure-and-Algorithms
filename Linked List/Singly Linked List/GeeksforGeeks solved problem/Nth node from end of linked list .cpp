https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1


/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n)
{
       Node *tmp1 = head;
       Node *tmp2 = head;
       n=n-1;
       while(n--)
       {
           tmp1 = tmp1->next;
           if(tmp1 == NULL)
           {
               return -1;
           }
       }
       while(tmp1->next != NULL)
       {
           tmp1 = tmp1->next;
           tmp2 = tmp2->next;
       }
       return tmp2->data;
} 
