//https://www.geeksforgeeks.org/find-median-bst-time-o1-space/

#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node* root = new Node();
    root->data = data;
    root->left = root->right = NULL;
}
Node* Insert(Node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->data)
        node->left  = Insert(node->left, key);
    else if (key > node->data)
        node->right = Insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}
int morisInorderTraversal(Node* root)
{
    Node* current = root;
    Node* predecessor;
    if(root = NULL)
    {
        return 0;
    }
    int count = 0;
    while(current != NULL)
    {
        if(current->left == NULL)
        {
            count++;
            current = current->right;
        }
        else
        {
            /* Find the inorder predecessor of current */
            predecessor = current->left;
            //To find predecessor keep going right till right node is not null or right node is not current.
            //right most node's right address became current when we create link.
            while(predecessor->right != NULL && predecessor->right != current)
            {
                predecessor = predecessor->right;
            }
            //if right node is null then go left after establishing link from predecessor to current.
            if(predecessor->right == NULL)
            {
                predecessor->right = current;
                current = current->left;
            }
            //left is already visit. Go rigth after visiting current.
            /* Revert the changes made in the 'if' part to restore
              the original tree i.e., fix the right child
              of predecessor */
            else
            {
                predecessor->right = NULL;
                count++;
                current = current->right;
            }
        }
    }
    return count;
}
int findMedian(Node* root)
{
    int count = morisInorderTraversal(root);
    int currentCount = 0;
    Node* current = root;
    Node* prev;
    Node* pre;
    while(current != NULL)
    {
        if(current->left == NULL)
        {
            currentCount++;
            //odd case
            if(count%2==1 && currentCount== (count+1)/2)
            {
                return current->data;
            }
            //even case
            else if(count % 2 == 0 && currentCount == (count/2)+1)
            {
                return (prev->data + current->data)/2;
            }
            prev = current;
            current = current->right;
        }
        else
        {
            pre = current->left;
            while (pre->right != NULL && pre->right != current)
            {
                pre = pre->right;
            }
            if (pre->right == NULL)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                pre->right = NULL;
                prev = pre;
                currentCount++;
                //odd case
                if(count%2==1 && currentCount== (count+1)/2)
                {
                    return current->data;
                }
                //even case
                else if(count % 2 == 0 && currentCount == (count/2)+1)
                {
                    return (prev->data + current->data)/2;
                }
                prev = current;
                current = current->right;
            }
        }
    }
}
int main()
{
    Node* root = NULL;
    root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 56);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);
    cout<<findMedian(root)<<endl;
}
