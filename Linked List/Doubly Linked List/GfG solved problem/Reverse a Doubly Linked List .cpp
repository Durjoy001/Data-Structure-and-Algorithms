//https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

Node* reverseDLL(Node * head)
{
    Node *tmp= head;
    while(head != NULL)
    {
        tmp = head->next;
        head->next = head->prev;
        head->prev = tmp;
        if(tmp==NULL)
        {
            return head;
        }
        head = tmp;
    }
}
