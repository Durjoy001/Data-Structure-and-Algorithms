//https://practice.geeksforgeeks.org/problems/find-length-of-loop/1
/*Complexity Analysis:
    Time complexity:O(n).
    Only one traversal of the linked list is needed.
    Auxiliary Space:O(1).
    As no extra space is required.*/

int countNodesinLoop(struct Node *head)
{
    Node *slow_p = head;
    Node *fast_p = head;
    int ans = 0;
    while(slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p==fast_p)//if there is a loop
        {
            while(true)
            {
               ans++;//increment it until we meet in this common point again
               fast_p = fast_p->next;
               if(fast_p == slow_p)
               {
                   return ans;
               }
            }
        }
    }
    return 0;
}
