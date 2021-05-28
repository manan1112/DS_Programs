/*  For a given singly linked list of integers and a position ‘i’, print the node data
on the ith position 
Sample Input
1
3 4 5 2 6 1 9 1
3
Sample output 1:
2

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

	 //finding element
	 int pos;
	 cin>>pos;
	 int c=1;
	  Node* current=head; 
      while (current != NULL)
     {
    	if(c!=pos)
    	{
        current = current->next;
        c++;
        }
        else if(c==pos)
        {
        cout<<current->data;
        return 0;
        }
     }
	 
}
