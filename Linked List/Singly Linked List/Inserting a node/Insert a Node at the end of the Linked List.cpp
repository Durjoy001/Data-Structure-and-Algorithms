#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head = NULL;
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
    Node* tmp = new Node();//create memory for inserting data
    tmp->data = X;//insert data
    tmp->next = NULL;//always insert node at the last of the list that's why it points to NULL
    if(head==NULL)//if the list is empty
    {
        head = tmp;//insert head address
        return;
    }
    Node* tmp1 = head;
    while(tmp1->next != NULL)//traverse list and go to the last element and we get the address of the last element
    //we use tmp1->next instead of tmp1 cz if we use just tmp != NULL than we make this tmp value NULL
    //and can't able to insert address of the newly created node in this position,that's why we use tmp ->next and we get the last node address without make it NULL
    {
        tmp1 = tmp1->next;//get address of last element
    }
    tmp1->next = tmp;//points to newly created node address
}
int main()
{
    Insert(4);
    Insert(5);
    Insert(6);
    Insert(7);
    print();
}
