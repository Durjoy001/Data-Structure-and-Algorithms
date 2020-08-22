//https://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head;
void print()
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Insert(int X)
{
    Node* tmp = new Node();
    tmp->data = X;
    tmp->next = NULL;
    if(head==NULL)
    {
        head = tmp;
        return;
    }
    Node* tmp1 = head;
    while(tmp1->next != NULL)
    {
        tmp1 = tmp1->next;
    }
    tmp1->next = tmp;
}
void Delete()//delete Linked list
{
    Node* tmp1 = head;
    Node* tmp2;
    while(tmp1 != NULL)
    {
        tmp2 = tmp1->next;
        delete tmp1;//deallocate the memory ,allocated to each of the node
        tmp1 = tmp2;
    }
    head = NULL;//make head value NULL because we delete all the node,and if we not make this null
    // than head value have consists the first node address which address is already deleted.
    //without made this nuLL and call print function again may print the whole list ,which are deleted
}
int main()
{
    head = NULL;
    Insert(4);
    Insert(5);
    Insert(6);
    Insert(7);
    Insert(8);
    print();
    Delete();
    print();
}
