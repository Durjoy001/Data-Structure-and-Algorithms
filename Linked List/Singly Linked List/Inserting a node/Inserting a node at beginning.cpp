//https://www.youtube.com/watch?v=cAZ8CyDY56s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=6

#include<bits/stdc++.h>
using namespace std;
// define node
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
    Node* temp = new Node();//allocate memory in heap
    temp->data = X;//insert data
    temp->next = head;//pointer to nodes,which point to next node.
    head = temp;//insert node in beginning that's why head address is changed
}
printList()
{
    Node* N = head;//copy head node address in variable N,because we don't want to manupulate the head node address.
    while(N != NULL)
    {
        cout<<N->data<<" ";//print data
        N = N->next;//current node data already printed ,and this current node also contain next node address,so we jsut copy next node address in N. 
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
        printList();//print list every time after data insert
    }
}
