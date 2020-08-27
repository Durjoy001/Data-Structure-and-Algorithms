//https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

// root: head node
Node *removeDuplicates(Node *root)
{
    Node *head = root;
    Node *retu = root;
    int dat = head->data;
    Node *nex = head;
    head = head->next;
    while(head != NULL)
    {
       if(dat == head->data)
       {
           nex->next = head->next;//points to next->next node address
           delete head;//delete memory of duplicate node
           head = nex->next;//go to next node from deleted node
       }
       else
       {
           dat = head->data;//change data to compare
           nex = head;//point to current node address
           head = head->next;//go to next node
       }
    }
    return retu;
}
