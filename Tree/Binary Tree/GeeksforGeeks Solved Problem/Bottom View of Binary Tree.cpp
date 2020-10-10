//https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
    // for storing node address and it's horizontal distance
   queue<pair<Node*,int> > Q;
   int hd = 0;//for root hd = 0
   //storing all elements coresponding to it's hd,here key is hd
   map<int,vector<int> >m;
   Q.push(make_pair(root,hd));
   //we use level order traversal
   while(!Q.empty())
   {
       pair<Node*,int>tmp = Q.front();
       Q.pop();
       Node* node = tmp.first;//for node address
       hd = tmp.second;
       m[hd].push_back(node->data);
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
   for(auto it = m.begin(); it != m.end();it++)
   {
       int X = it->second.size();//in every hd , we only print 
       //last pushed element.
       ans.push_back(it->second[X-1]);
   }
   return ans;
}
