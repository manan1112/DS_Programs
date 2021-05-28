/*
You have been given a singly linked list of integers . Write a function that returns the
index /position of an integer denoted by N ( if it exists). Return -1 otherwise.
Sample Input
2
3 4 5 2 6 1 9 -1
Sample Output
2
-1
*/


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
     cin>>head->data;
     p=head;
   
     for(int i=1;i<n;i++)
     {
        p->next=(Node*)malloc(sizeof(Node));
        p=p->next;
        cin>>p->data;
        p->next=NULL;
	 }

	 //finding element index
	 int item;
	 cin>>item;
	 int c=1;
	  Node* current=head; 
    while (current != NULL)
    {
    	if(current->data==item)
    	{
        cout<<c;
        return 0;
        }
        current=current->next;
        c++;
        
    }
    cout<<"-1";
    return 0;
	 
}
