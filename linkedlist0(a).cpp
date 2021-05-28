/*  For a given singly linked list of integers ,find and return its length. Do it using
an iterative method
*/

#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;	
};

void push(Node** head, int new_data)
{
    Node* new_node =new Node();
    new_node->data = new_data;
    new_node->next = (*head);
    *head= new_node;
}

int count_node(Node** head)
{
	int count=0; 
    Node* current=*head; 
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
	Node* head=NULL;
    push(&head,7);
    push(&head,9);
    push(&head,17);
    push(&head,20);
    cout<<count_node(&head);
    return 0;
}
