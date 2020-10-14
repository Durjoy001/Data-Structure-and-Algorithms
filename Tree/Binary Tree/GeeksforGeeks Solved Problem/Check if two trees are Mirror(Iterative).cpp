//https://www.geeksforgeeks.org/iterative-method-check-two-trees-mirror/
//https://practice.geeksforgeeks.org/problems/two-mirror-trees/1

/* Given two trees, should return true if they are
   mirror of each other. */
int areMirror(Node* a, Node* b) {
     stack<Node*>s1,s2;
     while(1)
     {
         while(a && b)
         {
             if(a->data != b->data)
             {
                 return false;
             }
             s1.push(a);
             s2.push(b);
             a = a->left;
             b = b->right;
         }
         if((a==NULL && b != NULL) || (a != NULL && b==NULL))
         {
             return false;
         }
         if(!s1.empty() && !s2.empty())
         {
             a = s1.top();
             s1.pop();
             b = s2.top();
             s2.pop();
             a = a->right;
             b = b->left;
         }
         else
         {
             break;
         }
     }
     return true;
}
