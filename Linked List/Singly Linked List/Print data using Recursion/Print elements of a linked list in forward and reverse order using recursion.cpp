//https://www.youtube.com/watch?v=K7J3nCeRC80&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=10
//https://www.geeksforgeeks.org/print-reverse-of-a-linked-list-without-actually-reversing/

#include<bits/stdc++.h>
using namespace std;
//define node
class Node
{
public:
    int data;
    Node* next;
};
Node* Insert(Node *head,int X,int position)
{
     Node* temp = new Node();
     temp->data = X;//insert data
     if(position==1)//insert data at beginning
     {
         temp->next = head;//point to previous first node
         head = temp;//change head address
         return head;
     }
     Node* temp2 = head;
     for(int i=1;i<position-1;i++)//go to the (position-1)th node,currently we have head value(1st node address) that's why we go position-2 th node and get position-1 address
     {
         temp2 = temp2->next;//got address of previous node from we insert the newly created node
     }
     temp->next = temp2->next;
     temp2->next = temp;
     return head;
}
void printList(Node* head)
{
    if(head==NULL)//Exit condition
    {
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";//print data
    printList(head->next);//recursive call
}
void ReversePrintList(Node* head)
{
  if(head == NULL)//Exit condition
  {
      return;
  }
  ReversePrintList(head->next);//recursive call
  //Execution of this recursive call is not finished,it will finished when it print the data,
  //and will execute when the all of next recursive execution will be finished.
  cout<<head->data<<" ";
}
int main()
{
   Node *head = NULL;
   head = Insert(head,2,1);//List 2,insert 2 in position 1 (1based position)
   //pass argument as head node address
   head = Insert(head,3,2);//List 2,3
   head = Insert(head,4,1);//List 4,2,3
   head = Insert(head,5,2);//List 4,5,2,3
   head = Insert(head,7,5);
   head = Insert(head,10,6);
   head = Insert(head,100,7);//List 4,5,2,3,7,10,100
   cout<<"print Linked list in forward order"<<endl;
   printList(head);
   cout<<"print Linked list in reverse order"<<endl;
   ReversePrintList(head);
}
