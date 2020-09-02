//https://www.geeksforgeeks.org/find-pairs-given-sum-doubly-linked-list/
//Time complexity : O(n)
//Auxiliary space : O(1)

// Function to find pair whose sum equal to given value x. 
//We have to do it without using extra space 
void pairSum(struct Node *head, int x) 
{ 
    Node *first = head;
    Node *second = head;
    while(second ->next != NULL)
    {
        second = second->next;
    }
    bool found = false;
    while(first != NULL && second != NULL && first!=second && second->next != first)
    {
        if((first->data + second->data)==x)
        {
            found = true;
            cout<<first->data<<" "<<second->data<<endl;
            first = first->next;
            second = second->prev;
        }
        else if((first->data + second->data)<x)
        {
            first = first->next;
        }
        else
        {
            second = second->prev;
        }    
    }
    if(found == false)
    {
        cout<<"No pair found"<<endl;
    }
}
