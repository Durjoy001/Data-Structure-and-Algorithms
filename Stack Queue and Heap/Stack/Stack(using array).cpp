//https://www.geeksforgeeks.org/stack-data-structure-introduction-program/


/* C++ program to implement basic stack 
   operations */
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
//data type stack
class Stack{
    int top;// variable to mark the top index of stack.
public:
    int A[MAX];// array to store the stack
    Stack()
    {
        top = -1;// for empty stack, set top = -1
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void print();
};
// Push operation to insert an element on top of stack.
bool Stack::push(int x)
{
    if(top>=MAX-1)
    {
        cout<<"Stack OverFlow"<<endl;
        return false;
    }
    else
    {
        top++;
        A[top] = x;
        cout<<x<<" pushed into stack"<<endl;
        return true;
    }
}
// Pop operation to remove an element from top of stack.
int Stack::pop()
{
    if(top<0) // If stack is empty, pop should throw error.
    {
        cout<<"stack Underflow"<<endl;
        return 0;
    }
    else
    {
        int x = A[top];
        top--;
        return x;//return the element which is removed from stack
    }
}
// Top operation to return element at top of stack.
int Stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is Empty"<<endl;
        return 0;
    }
    else
    {
        int x = A[top];
        return x;
    }
}
// This function will return 1 (true) if stack is empty, 0 (false) otherwise
bool Stack::isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Stack::print()
{
    for(int i=0;i<=top;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    class Stack s;
    s.push(10);s.print();
    s.push(20);s.print();
    s.push(30);s.print();
    cout << s.pop() << " Popped from stack\n";
    s.print();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}
