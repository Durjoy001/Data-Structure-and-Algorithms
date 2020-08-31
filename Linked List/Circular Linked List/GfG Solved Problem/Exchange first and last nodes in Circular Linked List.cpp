//https://www.geeksforgeeks.org/exchange-first-last-node-circular-linked-list/

/* Function to exchange first and last node*/
struct Node *exchangeNodes(struct Node *head)
{
    Node *prev = head;
    while(prev->next->next != head)
    {
        prev = prev->next;
    }
    prev->next->next = head->next;
    head->next = prev->next;
    prev->next = head;
    head = head->next;
    return head;
}    
    
