https://www.geeksforgeeks.org/circular-singly-linked-list-insertion/

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
Node* addToEmpty(Node *last,int data)
{
    if(last != NULL)
    {
        return last;
    }
    Node *tmp = new Node();
    tmp->data = data;
    last = tmp;
    last->next = last;
    return last;
}
Node* addToBegin(Node *last,int data)
{
    if(last==NULL)
    {
        return addToEmpty(last,data);
    }
    Node *tmp = new Node();
    tmp->data = data;
    tmp->next = last->next;
    last->next = tmp;
    return last;
}
Node* addToEnd(Node *last,int data)
{
    if(last==NULL)
    {
        return addToEmpty(last,data);
    }
   Node *tmp = new Node();
   tmp->data = data;
   tmp->next = last->next;
   last->next = tmp;
   last = tmp;
   return last;
}
Node* addAfter(Node* last,int data,int item)
{
    Node *tmp = last;
    do{
        if(tmp->data == item)
        {
            Node* tmp1 = new Node();
            tmp1->data = data;
            tmp1->next = tmp->next;
            tmp->next = tmp1;
            if(tmp == last)
            {
                last = tmp1;
            }
            return last;
        }
      tmp = tmp->next;
    }while(tmp != last);
}
void print(Node *last)
{
    Node *tmp = last->next;
    do{
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }while(tmp != last->next);
}
int main()
{
    Node *last = NULL;
    last = addToEmpty(last,6);
    last = addToBegin(last,4);
    last = addToBegin(last,2);
    last = addToEnd(last,8);
    last = addToEnd(last,12);
    last = addAfter(last,10,8);
    print(last);
}
