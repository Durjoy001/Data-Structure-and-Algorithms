//https://www.geeksforgeeks.org/program-to-reverse-a-linked-list-using-stack/
//Time Complexity : O(n)
//space complexity : O(n)  

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node;

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
Node* Reverse(Node *head)
{
    // Stack to store elements of list
    stack<Node*>s;
    Node* tmp = head;
    // Push the elements of list to stack
    while(tmp->next != NULL)
    {
        s.push(tmp);
        tmp = tmp->next;
    }
    head = tmp;
    // Pop from stack and replace
    // current nodes value'
    while(!s.empty())
    {
        tmp->next = s.top();
        tmp = tmp->next;
        s.pop();
    }
    tmp->next = NULL;
    return head;
}
void printList(Node* head)
{
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    stack<Node*>s;
    Node *head = NULL;
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    printList(head);
    cout<<endl;
    head = Reverse(head);
    printList(head);
}
