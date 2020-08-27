//https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
//Time Complexity: O(n) on average (assuming that hash table access time is O(1) on average). 

//another two way of remove duplicate element is 1)use two loop 2)1st sort linked list using marge sort than remove duplicate element by travarsing

// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *head) 
{
   Node *tmp = head;
   Node *prev = NULL;
   set<int>s;
   while(tmp != NULL)
   {
       if(s.find(tmp->data) != s.end())
       {
           prev->next = tmp->next;
           delete tmp;
           tmp = prev->next;
       }
       else
       {
           s.insert(tmp->data);
           prev = tmp;
           tmp = tmp->next;
       }
   }
   return head;
}
