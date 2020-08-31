https://www.geeksforgeeks.org/count-nodes-circular-linked-list/

int countNodes(struct Node* head) 
{
    Node *tmp = head;
    int count = 0;
    do{
        count++;
        tmp= tmp->next;
    }while(tmp != head);
    return count;
}
