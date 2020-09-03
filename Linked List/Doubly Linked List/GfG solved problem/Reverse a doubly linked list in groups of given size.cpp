//https://www.geeksforgeeks.org/reverse-doubly-linked-list-groups-given-size/

// C++ implementation to reverse a doubly linked list
// in groups of given size
#include <bits/stdc++.h>

using namespace std;

// a node of the doubly linked list
struct Node {
	int data;
	Node *next, *prev;
};
Node* getNode(int data)
{
	// allocate space
	Node* new_node = (Node*)malloc(sizeof(Node));

	// put in the data
	new_node->data = data;
	new_node->next = new_node->prev = NULL;
	return new_node;
}
void push(Node** head_ref, Node* new_node)
{
    // since we are adding at the beginning,
    // prev is always NULL
    new_node->prev = NULL;

    // link the old list off the new node
    new_node->next = (*head_ref);

    // change prev of head node to new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    // move the head to point to the new node
    (*head_ref) = new_node;
}
Node* revListInGroupOfGivenSize(Node* head, int k)
{
    Node *current = head;
    Node* next = NULL;
    Node* newHead = NULL;
    int count = 0;
    while (current != NULL && count < k)
    {
        next = current->next;
        push(&newHead, current);
        current = next;
        count++;
    }

    // if next group exists then making the desired
    // adjustments in the link
    if (next != NULL)
    {
        head->next = revListInGroupOfGivenSize(next, k);
        head->next->prev = head;
    }

    // pointer to the new head of the
    // reversed group
    return newHead;
}
void printList(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}
int main()
{
	Node* head = NULL;

	// Create doubly linked: 10<->8<->4<->2
	push(&head, getNode(2));
	push(&head, getNode(4));
	push(&head, getNode(8));
	push(&head, getNode(10));

	int k = 2;

	cout << "Original list: ";
	printList(head);

	head = revListInGroupOfGivenSize(head, k);

	cout << "\nModified list: ";
	printList(head);

	return 0;
}
