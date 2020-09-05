//https://www.geeksforgeeks.org/stack-data-structure-introduction-program/


#include<bits/stdc++.h>
using namespace std;
class StackNode{
public:
    int data;
    StackNode* next;
};
void push(StackNode** top,int data)
{
    StackNode* tmp = new StackNode();
    tmp->data = data;
    tmp->next = *top;
    *top = tmp;
    cout<<data<<" pushed into stack"<<endl;
}
int pop(StackNode** top)
{
    StackNode *tmp = *top;
    *top = (*top)->next;//must use bracket before and after *top.
    int poped = tmp->data;
    delete tmp;
    return poped;
}
int isEmpty(StackNode* top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int peek(StackNode *top)
{
    if(top==NULL)
    {
        return 0;
    }
    return top->data;
}
int main()
{
    StackNode *top = NULL;
    push(&top,10);
    push(&top,20);
    push(&top,30);
    cout<<pop(&top)<<"poped from stack"<<endl;
    cout<<"top element is"<<peek(top)<<endl;
    return 0;
}
