//https://www.geeksforgeeks.org/bottom-view-binary-tree/

// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
    // for storing node address and it's horizontal distance
   queue<pair<Node*,int> > Q;
   int hd = 0;//for root hd = 0
  // TreeMap which stores key value pair 
    // sorted on key value 
   map<int,int >m;
   Q.push(make_pair(root,hd));
   //we use level order traversal
   while(!Q.empty())
   {
       pair<Node*,int>tmp = Q.front();
       Q.pop();
       Node* node = tmp.first;//for node address
       hd = tmp.second;
        // Put the dequeued tree node to TreeMap 
        // having key as horizontal distance. Every 
        // time we find a node having same horizontal 
        // distance we need to replace the data in 
        // the map. 
       m[hd] = node->data;
       //when we go in left hd will be hd-1
       //in right it would be hd+1
       if(node->left != NULL)
       {
           Q.push(make_pair(node->left,hd-1));
       }
       if(node->right != NULL)
       {
           Q.push(make_pair(node->right,hd+1));
       }
   }
   vector<int>ans;
    // Traverse the map elements using the iterator. 
   for(auto it = m.begin(); it != m.end();it++)
   {
       ans.push_back(it->second);
   }
   return ans;
}
