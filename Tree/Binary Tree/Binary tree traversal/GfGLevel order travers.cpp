//https://practice.geeksforgeeks.org/problems/level-order-traversal/1

vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int>ans;
  queue<Node*>Q;
  Q.push(node);
  while(!Q.empty())
  {
      Node* tmp = Q.front();
      Q.pop();
      ans.push_back(tmp->data);
      if(tmp->left != NULL)
      {
          Q.push(tmp->left);
      }
      if(tmp->right != NULL)
      {
          Q.push(tmp->right);
      }
  }
  return ans;
}