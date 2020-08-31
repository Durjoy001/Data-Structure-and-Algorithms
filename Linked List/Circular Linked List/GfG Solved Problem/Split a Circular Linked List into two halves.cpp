https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1

//Time Complexity: O(n)
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *tmp1=head;
    Node *tmp2=head;
    do{
       if(tmp2->next->next == head)    
       {
           tmp2 = tmp2->next;
       }
       else
       {
           tmp1 = tmp1->next;
           tmp2 = tmp2->next->next;
       }
    }while(tmp2->next != head);
    tmp2->next = tmp1->next;
    tmp1->next = head;
    *head1_ref = tmp1->next;
    *head2_ref = tmp2->next;
}
