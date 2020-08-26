//https://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/

/*You are required to complete this method */
/* Function to check if two input lists have same data*/
bool compare(Node *head,Node *second_half)
{
    Node *tmp1 = head;
    Node *tmp2 = second_half;
    while(tmp1 && tmp2)
    {
        if(tmp1->data == tmp2->data)
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        else
        {
            break;
        }
    }
    if(tmp1==NULL && tmp2==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/* Function to reverse the linked list  Note that this 
    function may change the head */
void reverse(Node **second_half)
{
    Node *current = *second_half;
    Node *prev_node = NULL;
    Node *next;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev_node;
        prev_node = current;
        current = next;
    }
    *second_half = prev_node;
}
bool isPalindrome(Node *head)
{
    Node *slow_ptr = head;
    Node *fast_ptr = head;
    Node *second_half;
    Node *prev_slow_ptr = head;
    Node *mid = NULL;//To handle odd size list 
    bool ans = true;//initialize result 
    if(head != NULL && head->next != NULL)
    {
        /* Get the middle of the list. Move slow_ptr by 1 
          and fast_ptrr by 2, slow_ptr will have the middle 
          node */
        while(fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
             /*We need previous of the slow_ptr for 
             linked lists  with odd elements */
            prev_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
         /* fast_ptr would become NULL when there are even elements in list.  
           And not NULL for odd elements. We need to skip the middle node  
           for odd case and store it somewhere so that we can restore the 
           original list*/
        if(fast_ptr != NULL)
        {
            mid = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
        // Now reverse the second half and compare it with first half 
        second_half = slow_ptr;
        prev_slow_ptr->next = NULL; // NULL terminate first half
        reverse(&second_half); // Reverse the second half
        ans = compare(head,second_half);// compare 
        /* Construct the original list back */
        reverse(&second_half);// Reverse the second half again
         // If there was a mid node (odd size case) which 
        // was not part of either first half or second half. 
        if(mid != NULL)
        {
            prev_slow_ptr->next = mid;
            mid->next = second_half;
        }
        else
        {
            prev_slow_ptr->next = second_half;
        }
    }
    return ans;
}
