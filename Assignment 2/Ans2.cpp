#include<iostream>

using namespace std;

struct node
{
	int val;
	node *next;
};

class list
{
	node *head = NULL;
	node *tail = NULL;
	
	public:
		
	void insert(int e)
	{
		node *n = new node;
		n->val = e;
		n->next = NULL;
		
		if(tail == NULL)
		{
			tail = n;
			head = n;
			return;
		}
		
		tail->next = n;
		tail = n;
	}
	
	
	void display()
	{
		node *temp = head;
		
		cout<<"\nThe list is: ";
		while(temp != NULL)
		{
			cout<<temp->val<<" ";
			temp = temp->next;
		}
	}
	
	int del(int e)
	{
		int count = 0;
		if(head == NULL)
		{
			cout<<"Error: list empty";
			return;		
		}
		node *temp = head;
		
		if(temp->val == e)
		{
			head = 
		}
		while(temp->next != NULL)
		{
			
		}		
	}
};

int main()
{
	int choice;
	list l;
	
	do
	{
		cout<<"Link List Menu----------------------\n1. Insert\n2. Find middle element\n3. Display list\n4. Exit\nChoice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: 
			{
				int e;
				cout<<"Enter element to insert: ";
				cin>>e;
				l.insert(e);
				
				break;
			}
			
			case 2:
			{
				l.reverse();
				cout<<"\n\n";
				
				break;
			}
			
			case 3:
			{
				l.display();
				cout<<"\n\n";
				
				break;
			}
			
			default:
			{
				choice = 4;
			}
		}
	}
	while(choice != 4);
	
	return 0;
}
