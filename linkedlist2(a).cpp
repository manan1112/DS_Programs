/* Given a linked list of N nodes. The task is to check if the linked list has a
loop. Linked list can contain self loop.
*/

#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};

bool detectLoop(Node* head)
    {
        // your code here
        Node* fast=head;
        Node* slow= head;
        while(fast != NULL && fast->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast == slow)
            return true;
        }
        return false;
        
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
        p->next=head; //loop
        //p->next=NULL; //not loop
	 } 
	 cout<<detectLoop(head);
	 return 0;
}
