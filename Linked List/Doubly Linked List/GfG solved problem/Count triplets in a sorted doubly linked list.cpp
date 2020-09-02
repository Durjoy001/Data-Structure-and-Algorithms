https://www.geeksforgeeks.org/count-triplets-sorted-doubly-linked-list-whose-sum-equal-given-value-x/
Time Complexity: O(n2)
Auxiliary Space: O(1)

// function to count triplets in a sorted doubly linked list 
// whose sum is equal to a given value 'x' 
int countTriplets(struct Node* head, int x)
{
	if(head==NULL)
    {
        return 0;
    }
    int count =0;
    Node *current = head;
    Node *first = head;
    Node *last = head;
    Node *second = NULL;
	while(last->next != NULL)
    {
        last = last->next;
    }
    for(current = head;current != NULL;current = current->next)
    {
        first = current->next;
        second = last;
        while(first != second && second->next != first)
        {
            if((first->data+second->data) == (x- (current->data)))
            {
                count++;
                first = first->next;
                second = second->prev;
            }
            else if((first->data+second->data) < (x- (current->data)))
            {
                first = first->next;
            }
            else
            {
                second = second->prev;
            }
        }
    }
    return count;
}
