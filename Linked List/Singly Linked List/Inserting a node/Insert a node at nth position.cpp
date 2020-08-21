https://www.youtube.com/watch?v=IbvsNF22Ud0&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=7

#include<bits/stdc++.h>
using namespace std;
//define node
class Node
{
public:
    int data;
    Node* next;
};
Node* head = NULL;//head node which point the first node,initially empty
// we make head node as global variable because if we not do this and make it
// local variable than , this will not be access able in other function ,so we have to pass
// address of the first node or head as function argument to both this function print ans insert.
//make this global is easy to implement.
void Insert(int X,int position)
{
     Node* temp = new Node();//create block of memory address in heap for insert data
     //temp contain address of created block
     temp->data = X;//insert data
     if(position==1)//insert data at beginning
     {
         temp->next = head;//point to previous first node
         head = temp;//change head address
         return;//not execute bellow code of this function
     }
     Node* temp2 = head;//assigning head address in temp2 pointer to node variable
     for(int i=1;i<position-1;i++)//go to the (position-1)th node,currently we have head value(1st node value) that's why we go
//position-2 th node and get position-1 address
     {
         temp2 = temp2->next;//got address of previous node from we insert the newly created node
     }
     temp->next = temp2->next;//set address,which is position-1 th node link(next pointer address)
     temp2->next = temp;//adjust position-1 th node link to newly created node address
}
void printList()
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
   Insert(2,1);//List 2,insert 2 in position 1 (1based position)
   Insert(3,2);//List 2,3
   Insert(4,1);//List 4,2,3
   Insert(5,2);//List 4,5,2,3
   Insert(7,5);
   Insert(10,6);
   Insert(100,7);
   printList();
}
