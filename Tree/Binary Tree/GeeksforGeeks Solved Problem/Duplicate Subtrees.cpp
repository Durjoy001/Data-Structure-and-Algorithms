//https://practice.geeksforgeeks.org/problems/duplicate-subtrees/1

string printAllDupsUtil(Node* root,map<string,int>&m,vector<int>&v)
{
    if(root == NULL)
    {
        return "";
    }
    string str;
    str = str + printAllDupsUtil(root->left,m,v);
    char x = (root->data)-'0';
    str = str + x;
    str = str + printAllDupsUtil(root->right,m,v);
    if(m[str] == 1)
    {
        v.push_back(root->data);
    }
    m[str]++;
    return str;
}
void printAllDups(Node* root)
{
     map<string,int>m;
     vector<int>v;
     printAllDupsUtil(root,m,v);
     if(v.size() == 0)
     {
         cout<<-1;
     }
     else
     {
         sort(v.begin(),v.end());
         for(int i=0;i<v.size();i++)
         {
             cout<<v[i]<<" ";
         }
     }
}
