//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1


//reverse every K group of element
struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    node *current = head;
    node *prev = NULL;
    node *next = head;
    int count=0;
    while(current != NULL && count<k)
    {
        count++;
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    if(current != NULL)
    {
       head->next =  reverse(current,k);
    }
    /* prev is new head of the input list */
    return prev;
}
