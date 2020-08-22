https://www.youtube.com/watch?v=Y0n86K43GO4&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=9&t=0s

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head;
void print()//print the list
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Insert(int X)//insert node at the end of the list
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
    //and can't able to insert address of the newly created node,that's why we use tmp ->next and we get the last node address without make it NULL
    {
        tmp1 = tmp1->next;//get address of last element
    }
    tmp1->next = tmp;//points to newly created node address
}
void Delete(int n)//delete n th node
{
    Node* tmp = head;
    if(n==1)//if we want to delete 1st Node
    {
        head = tmp->next;//point to 2nd node
        delete tmp;//free space
        return;
    }
    for(int i=1;i<=n-2;i++)
    {
        tmp = tmp->next;//tmp point to (n-1)th node
    }
    Node* tmp2 = tmp->next;//address of n th node
    tmp->next = tmp2->next;//(n-1)th point to (n+1)th node
    delete tmp2;//free the space of n th node
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
    cout<<"the position of node you want to delete?"<<endl;
    int n;
    cin>>n;
    Delete(n);
    print();
}
