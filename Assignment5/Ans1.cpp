#include<iostream>

using namespace std;

struct node
{
	int val;
	node *next;
};

class queue
{
	node *head = NULL;
	node *tail = NULL;
	
	public:
	
	void enqueue(int e)
	{
		node *n = new node;
		n->next = NULL;
		n->val = e;
		
		if(head == NULL)
		{
			head = n;
			tail = n;
			return;
		}
		
		tail->next = n;
		tail = tail->next;
	}
	
	int dequeue()
	{
		if(head == NULL)
		{
			cout<<"Error: Queue empty";
		}
		else if(head == tail)
		{
			node *temp = head;
			head = NULL;
			tail = NULL;
			delete temp;
		}
		else
		{
			node *temp = head;
			head = head->next;
			temp->next = NULL;
			return temp->val;
		}
	}
	
	int front()
	{
		if(head)
		{
			return head->val;
		}
	}
	
	void display()
	{
		cout<<"The Queue is: ";
		node *temp = head;
		while(temp)
		{
			cout<<temp->val<<" ";
			temp = temp->next;
		}
	}
};

int main()
{
	
	queue q;
	int choice, e;
	do
	{
		cout<<"Menu-------------------------\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nChoice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				cout<<"Enter value to insert: ";
				cin>>e;
				q.enqueue(e);
				break;
			}
			
			case 2:
			{
				int a = q.dequeue();
				if(a)
				{
					cout<<"Element removed";
				}
				break;
			}
			
			case 3:
			{
				cout<<"Front value is: "<<q.front();
				break;
			}
			
			case 4:
			{
				q.display();
				break;
			}
			
			default:
			{
				choice = 5;
			}	
		}
		cout<<"\n\n";
	}
	while(choice != 5);
	return 0;
}
