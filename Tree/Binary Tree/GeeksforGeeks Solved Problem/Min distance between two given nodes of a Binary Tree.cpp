//https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1

/* Should return minimum distance between a and b
   in a tree with given root*/

/* Dist(n1, n2) = Dist(root, n1) + Dist(root, n2) - 2*Dist(root, lowest common ancestor)*/ 
Node* findAncestor(Node* root,int a,int b)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root ->data == a || root->data == b)
    {
        return root;
    }
    Node* l = findAncestor(root->left,a,b);
    Node* r = findAncestor(root->right,a,b);
    if(l && r)
    {
        return root;
    }
    if(l == NULL && r == NULL)
    {
        return NULL;
    }
    return (l != NULL) ? l : r;
}
void findDistant(Node* root,int a,int level,int* Dis_a)
{
    if(root == NULL)
    {
        return;
    }
    if(root->data == a)
    {
        *Dis_a = level;
    }
    findDistant(root->left,a,level+1,Dis_a);
    findDistant(root->right,a,level+1,Dis_a);
}
int findDist(Node* root, int a, int b) {
    Node* anc;
    anc = findAncestor(root,a,b);
    int Dis_a,Dis_b,Dis_anc;
    findDistant(root,a,0,&Dis_a);
    findDistant(root,b,0,&Dis_b);
    findDistant(root,anc->data,0,&Dis_anc);
    //cout<<Dis_anc<<endl;
    return (Dis_a+Dis_b - (2*Dis_anc));
}
