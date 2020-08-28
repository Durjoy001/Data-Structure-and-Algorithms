//https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

/*Time Complexity: O(m+n) where m and n are number of nodes in first and second linked lists respectively.
Only one traversal of the lists are needed.
Auxiliary Space: O(max(m, n)).
The output list can store at most m+n nodes .*/


Node* findIntersection(Node* head1, Node* head2)
{
    Node *prev = NULL;
    Node *ret = NULL;
    while(head2 != NULL && head1 != NULL)
    {
      if(head1->data == head2->data)
      {
          Node *tmp = new Node(head1->data);
          if(ret == NULL)
          {
              ret = tmp;
              prev = tmp;
          }
          else if(prev != NULL)
          {
              prev->next = tmp;
              prev = tmp;
          }
          head1 = head1->next;
          head2 = head2->next;
      }
      else if(head1->data<head2->data)
      {
          head1 = head1->next;
      }
      else
      {
          head2 = head2->next;
      }
    }
    return ret;
}
