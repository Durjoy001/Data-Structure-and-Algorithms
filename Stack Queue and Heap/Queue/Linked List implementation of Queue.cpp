//https://www.youtube.com/watch?v=A5_XdiK4J8A&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=24
//https://www.geeksforgeeks.org/queue-linked-list-implementation/

#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};
node* Front = NULL;
node* Rear = NULL;
class Queue
{
public:
    void Enqueue(int x)
    {
        node* tmp = new node();
        tmp->data = x;
        tmp->next = NULL;
        if(Front == NULL && Rear == NULL)
        {
            Front= Rear = tmp;
            return;
        }
        Rear->next = tmp;
        Rear = tmp;
    }
    void Dequeue()
    {
        node *tmp = Front;
        if(Front==NULL)
        {
            return ;
        }
        if(Front == Rear)
        {
            Front = Rear = NULL;
        }
        else
        {
            Front = Front->next;
        }
        delete tmp;
    }
    int FFront()
    {
        if(Front==NULL)
        {
            return -1;
        }
        return Front->data;
    }
    void Print()
    {
        node* tmp = Front;
        while(tmp != NULL)
        {
            cout<<tmp->data<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Queue Q;
    Q.Enqueue(2);
    Q.Print();
    Q.Enqueue(4);
    Q.Print();
    Q.Enqueue(6);
    Q.Print();
    Q.Dequeue();
    Q.Print();
    Q.Enqueue(8);
    Q.Print();
}
