/*  Reversing A LinkedList without Recursion */

#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
	Node(int d)
	{
		data=d;
		next=nullptr;
	}	
		
};

int main()
{
     int n;
     cin>>n;
     
	 Node* head;
	 Node* p;
     head=(Node*)malloc(sizeof(Node));
     cin>>head->data;    //first element
     p=head;
   
     for(int i=1;i<n;i++)
     {
        p->next=(Node*)malloc(sizeof(Node));
        p=p->next;
        cin>>p->data;
        p->next=NULL;
	 }
	 
	 Node* prev=NULL;
	 Node* curr=head;
	 Node* next=NULL;
	 while(curr !=NULL)
	 {
	 	next=curr->next;
	 	curr->next=prev;
	 	prev=curr;
	 	curr=next;	
	 }
	 head=prev;
	 cout<<"Reverse : ";
	 Node* k=head;
     while(k !=NULL)
	 {
		cout<<k->data<<" ";
		k=k->next;
	 }
	   	
}
