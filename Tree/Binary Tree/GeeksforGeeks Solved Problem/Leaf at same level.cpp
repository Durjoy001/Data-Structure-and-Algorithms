//https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1

/*You are required to complete this method*/
bool check(Node *root)
{
      int level = 1,ref = INT_MAX;
      queue<Node*>Q;
      Q.push(root);
      Q.push(NULL);
      while(!Q.empty())
      {
          Node* tmp = Q.front();
          Q.pop();
          if(tmp == NULL)
          {
              level++;
              if(Q.empty())
              {
                  return true;
              }
              Q.push(NULL);
          }
          else
          {
            if(tmp->left == NULL && tmp->right == NULL)
           {
              if(ref == INT_MAX)
              {
                  ref = level;
              }
              else if(level != ref)
              {
                  return false;
              }
           }
           if(tmp->left != NULL)
           {
              Q.push(tmp->left);
           }
           if(tmp->right != NULL)
           {
              Q.push(tmp->right);
           }
          }
      }
      return true;
}
