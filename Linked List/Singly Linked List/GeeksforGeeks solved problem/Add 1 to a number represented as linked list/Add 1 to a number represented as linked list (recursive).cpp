//https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
//https://www.geeksforgeeks.org/add-1-number-represented-linked-list/

int addWithCarry(Node *head)
{
    if(head == NULL)
    {
        return 1;
    }
    int res = head->data + addWithCarry(head->next);
    head->data = (res)%10;
    return (res)/10;
}
Node* addOne(Node *head) 
{
    int carry = addWithCarry(head);
    if(carry)
    {
        Node *tmp = new Node(carry);
        tmp->data = carry;
        tmp->next = head;
        head = tmp;
    }
    return head;
}
