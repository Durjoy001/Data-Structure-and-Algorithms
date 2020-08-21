https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
Node* head = NULL;//head node which point the first node,initially empty
// we make head node as global variable because if we not do this and make it
 // local variable than , this will not be access able in other function ,so we have to pass
 // address of the first node or head as function argument to both this function print ans insert.
 //make this global is easy to implement.
insertNode(int X)
{
    Node* temp = new Node();
    temp->data = X;
    temp->next = head;
    head = temp;//insert node in beginning that's why head address is changed
}
printList()
{
    Node* N = head;
    while(N != NULL)
    {
        cout<<N->data<<" ";
        N = N->next;
    }
    cout<<endl;
}
int main()
{
    cout<<"How many numbers you want to insert in the node"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number"<<endl;
        int X;
        cin>>X;
        insertNode(X);
        printList();
    }
}
