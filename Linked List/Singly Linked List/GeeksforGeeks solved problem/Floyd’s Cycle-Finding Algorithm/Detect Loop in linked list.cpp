//https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

bool detectLoop(Node* head)
{
    Node *slow_ptr = head;
    Node *fast_ptr = head;
    while(slow_ptr && fast_ptr && fast_ptr->next)//increase fast_ptr by two node so we have to check that atlest one node have after fast_ptr.
    // If one of this pointer points to NULL that's mean there are NO LOOP.
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        if(slow_ptr==fast_ptr)
        {
            return 1;
        }
    }
    return 0;
}
