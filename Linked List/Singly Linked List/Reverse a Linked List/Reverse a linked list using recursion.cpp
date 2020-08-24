//https://www.youtube.com/watch?v=KYH83T4q6Vs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=11
//https://www.geeksforgeeks.org/reverse-a-linked-list/

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
void Reverse(Node *tmp)
{
    if(tmp->next == NULL)//exit condition
    {
        head = tmp;//set head address
        return;
    }
    Reverse(tmp->next);//recursive call
    //all of this bellow code execute when last recursive call will be end
    //than one by one from last to first all of this call execute 
    Node *tmp2 = tmp->next;
    tmp2->next = tmp;
    tmp->next = NULL;
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
    Node *tmp = head;
    Reverse(tmp);
    print();//List 9,8,7,10,6,5
}
