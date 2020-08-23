//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1  
//https://www.geeksforgeeks.org/reverse-a-linked-list/  
//https://www.youtube.com/watch?v=sYcOK51hl-A&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=9

#include<bits/stdc++.h>
using namespace std;
class Node{//define node
public:
    int data;
    Node* next;
};
Node* head;
void Insert(int X,int position)//insert node in linked list
{
    Node* tmp1 = new Node();
    tmp1->data = X;
    if(position==1)
    {
        tmp1->next = head;
        head = tmp1;
        return;
    }
    Node* tmp2 = head;
    for(int i=1;i<=position-2;i++)
    {
        tmp2 = tmp2->next;
    }
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
}
void print()//print linked list
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Reverse()
{
    Node *current,*prev,*next;
    current = head;
    prev = NULL;//1st node points to null cz after reverse it will be last node
    while(current != NULL)
    {
        next = current->next;//contain the next node address for traverse to next
        current->next = prev;//current pointer points to previous node instead of next node
        prev = current;//contain current node address which will be previous node after this cycle,when current node points prev node
        current = next;//go to next node for change the link
    }
    head = prev;//head address changed
}
int main()
{
    head = NULL;
    Insert(5,1);
    Insert(6,2);
    Insert(7,3);
    Insert(9,4);
    Insert(8,4);
    Insert(10,3);//List 5,6,10,7,8,9
    print();
    Reverse();
    print();//List 9,8,7,10,6,5
}
