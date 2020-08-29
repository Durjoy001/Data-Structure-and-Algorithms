//https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

int intersectPoint(Node* head1, Node* head2)
{
    while(head1 != NULL)
    {
        head1->data = -1*(head1->data)-1;
        head1 = head1->next;
    }
    while(head2 != NULL)
    {
        if(head2->data < 0)
        {
            return abs(head2->data)-1;
        }
        head2 = head2->next;
    }
    return -1;
}
