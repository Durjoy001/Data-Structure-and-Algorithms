https://www.geeksforgeeks.org/rotate-doubly-linked-list-n-nodes/
/* approach: go through the linked list until we get NULL pointer,store Nth node address and last Node address. After that change last node next address to 
head node address.change head node prev address to point to last node address.Now change head address which will be next node of Nth node .make  Nth node 
next address to NULL cz now it is our last node.make newly head node->prev = NULL.

#include <bits/stdc++.h>
using namespace std;
struct Node {
	char data;
	struct Node* prev;
	struct Node* next;
};
void rotate(struct Node** head_ref, int N)
{
	if(N==0)
    {
        return;
    }
    Node *last = *head_ref;
    Node *N_Node = NULL;
    while(last ->next != NULL)
    {
        N--;
        if(N==0)
        {
            N_Node = last;
        }
       last = last->next;
    }
    last->next = *head_ref;
    (*head_ref)->prev = last;//we have to use bracket () before and after *head_ref;
    *head_ref = N_Node->next;
    N_Node->next = NULL;
    (*head_ref)->prev = NULL;//If we don't use bracket it would be wrong
}

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->prev = NULL;
	new_node->next = (*head_ref);
	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;
*head_ref = new_node;
}
void printList(struct Node* node)
{
	while (node->next != NULL) {
		cout << node->data << " "
			<< "<=>"
			<< " ";
		node = node->next;
	}
	cout << node->data;
}
int main(void)
{
	struct Node* head = NULL;
	push(&head, 'e');
	push(&head, 'd');
	push(&head, 'c');
	push(&head, 'b');
	push(&head, 'a');
	
	int N = 2;

	cout << "Given linked list \n";
	printList(head);
	rotate(&head, N);

	cout << "\nRotated Linked list \n";
	printList(head);
	return 0;
}

