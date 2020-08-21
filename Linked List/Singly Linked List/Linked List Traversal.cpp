//https://www.geeksforgeeks.org/linked-list-set-1-introduction/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
// This function prints contents of linked list
// starting from the given node
void printList(Node* N)
{
    while(N != NULL)
    {
        cout<<N->data<<endl;
        N = N->next;
    }
}
int main()
{

    //allocate 3 nodes in the heap
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    /* Three blocks have been allocated dynamically.
    We have pointers to Node to these three blocks as head,
    second and third */
    head ->data = 1;// assign data in first node
    head ->next = second;// Link first node with the second node

    second->data = 2;//assign data to second node
    second->next = third;// Link second node with the third node

    third->data = 3;// assign data to third node
    third->next = NULL;// And next pointer of the third block is made NULL to indicate that the linked list is terminated here.

    printList(head);
    return 0;
}
