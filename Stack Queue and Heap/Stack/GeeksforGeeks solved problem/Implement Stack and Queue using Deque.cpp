//https://www.geeksforgeeks.org/implement-stack-queue-using-deque/

#include<bits/stdc++.h>
using namespace std;
// structure for a node of deque
class DQueNode{
public:
    int value;
    DQueNode* next;
    DQueNode* prev;
};
// Implementation of deque class
class Deque{
public:
    DQueNode* head = NULL;
    DQueNode* tail = NULL;
    bool isEmpty()
    {
        if(head == NULL)
        {
            return true;
        }
        return false;
    }
    int size()
    {
        int len = 0;
        if(! isEmpty())
        {
            DQueNode* tmp = head;
            while(tmp != NULL)
            {
                len++;
                tmp = tmp->next;
            }
            return len;
        }
        return len;
    }
    void insert_first(int element)
    {
        DQueNode* tmp = new DQueNode();
        tmp->value = element;
        if(head == NULL)
        {
            head = tail = tmp;
            tmp->next = NULL;
            tmp->prev = NULL;
        }
        else
        {
            head->prev = tmp;
            tmp->next = head;
            tmp->prev = NULL;
            head = tmp;
        }
    }
    void insert_last(int element)
    {
        DQueNode* tmp = new DQueNode();
        tmp->value = element;
        if(head == NULL)
        {
            head = tail = tmp;
            head->next = NULL;
            head->prev = NULL;
        }
        else
        {
            tail->next = tmp;
            tmp->prev = tail;
            tmp->next= NULL;
            tail = tmp;
        }
    }
    void remove_first()
    {
        if(! isEmpty())
        {
            DQueNode *tmp = head;
            head = head->next;
            head->prev = NULL;
            delete tmp;
            return;
        }
    }
    void remove_last()
    {
        if(! isEmpty())
        {
            DQueNode *tmp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete tmp;
            return;
        }
    }
    void display()
    {
        if(! isEmpty())
        {
            DQueNode* tmp = head;
            while(tmp != NULL)
            {
                cout<<tmp->value<<" ";
                tmp = tmp->next;
            }
            cout<<endl;
            return;
        }
    }
};
// Class to implement stack using Deque
class Stack : public Deque{
public:
    void push(int element)
    {
        insert_last(element);
    }
    void pop()
    {
        remove_last();
    }
};
// class to implement queue using deque
class Queue : public Deque{
public:
    void enqueue(int element)
    {
        insert_last(element);
    }
    void dequeue()
    {
        remove_first();
    }
};
int main()
{
    // object of Stack
    Stack stk;

    stk.push(7);
    stk.push(8);
    cout << "Stack: ";
    stk.display();

    stk.pop();
    cout << "Stack: ";
    stk.display();

    // object of Queue
    Queue que;

    que.enqueue(12);
    que.enqueue(13);
    cout << "Queue: ";
    que.display();

    que.dequeue();
    cout << "Queue: ";
    que.display();

    cout << "Size of Stack is " << stk.size() << endl;
    cout << "Size of Queue is " << que.size() << endl;
    return 0;
}
