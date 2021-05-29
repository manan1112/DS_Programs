/* Given a non-empty, singly linked list with head node head, return a middle
node of linked list. If there are two middle nodes, return the second middle
node. */
/*
Given a non-empty, singly linked list with head node head, return a middle
node of linked list. If there are two middle nodes, return the second middle
node.
*/

#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};

int getMiddle(Node *head)
{
   // Your code here
   Node* fast=head;
   Node* slow=head;
   if(head != NULL)
   {
   while(fast !=NULL && fast->next !=NULL)
   {
       fast=fast->next->next;
       slow=slow->next;
   }
   }
   return slow->data;
   
}

int main()
{
	int n;
     cin>>n;
	 Node* head;
	 Node* p;
     head=(Node*)malloc(sizeof(Node));
     cin>>head->data;
     p=head;
   
     for(int i=1;i<n;i++)
     {
        p->next=(Node*)malloc(sizeof(Node));
        p=p->next;
        cin>>p->data;
        p->next=NULL;
	 }
	 
	 cout<<getMiddle(head);
	 return 0;
}
