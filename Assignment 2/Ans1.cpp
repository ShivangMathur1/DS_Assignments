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
			
	void insertBeg(int e)
	{
		node *n = new node;
		n->val = e;
		n->next = head;
		
		head = n;
		if(tail == NULL)
		{
			tail = head;
		}
	}
	
	void insertEnd(int e)
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
	
	void insertMid(int e, int d)
	{
		node *temp = head;
		int found = 0;
		
		while(temp != NULL)
		{		
			if(temp->val == d)
			{
				  node *n = new node;
				  n->val = e;
				  n->next = temp->next;
				  temp->next = n;
				  found = 1;
			}
			temp = temp->next;
		}
		
		if(!found)
		{
			cout<<"Error: Element "<<d<<" Not found\n\n";
		}
	}
	
	void deleteBeg()
	{
		if(head == NULL)
		{
			cout<<"Error: List empty\n\n";
			return;
		}
		
		node *temp = head;
		head = head->next;
		delete temp;
	}
	
	void deleteEnd()
	{
		if(tail == NULL)
		{
			cout<<"Error: List empty\n\n";
			return;
		}
		
		node *temp = head;
		while(temp != NULL)
		{
			if(temp->next == tail)
			{
				node *n = tail;
				tail = temp;
				delete n;
				temp->next = NULL;
			}
			
			if(head == tail)
			{
				deleteBeg();
			}
			
			temp = temp->next;
		}
		
	}
	
	void deleteMid(int e)
	{
		if(head == NULL)
		{
			cout<<"Error: list empty\n\n";
			return;		
		}
		node *temp = head, *pre = head;
		

		while(temp)
		{
			cout<<temp->val<<" - "<<pre->val<<"\n";
			if(temp->val == e)
			{
				if(pre == temp)
				{
					head = head->next;
					pre = head;
					temp->next = NULL;
					delete temp;
					temp = head;
					return;
				}
				pre->next = temp->next;
				cout<<"end:";
				temp->next = NULL;
				cout<<"end:";
				delete temp;
				cout<<"end:";
				temp = pre->next;
				cout<<"end:";
				return;
			}
			if(temp)
			{
				pre = temp;
				temp = temp->next;
			}
		}		
	}

	void search(int e)
	{
		node* temp = head;
		int i = 0;
		while(temp != NULL)
		{
			if(temp->val == e)
			{
				cout<<"Element "<<e<<" found at position "<<i + 1<"\n\n";
				return;
			}
			temp = temp->next;
			i++;
		}
		cout<<"Error: Element not on the list";
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
};

int main()
{
	int choice;
	list l;
	
	do
	{
		cout<<"Link List Menu----------------------\n1. Insert at beginning\n2. Insert at end\n3. Indert at middle\n4. Delete from beginning\n5. Delete from end\n6. Delete from middle\n7. Search for a node\n8. Display list\n9. Exit\nChoice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: 
			{
				int e;
				cout<<"Enter element to insert: ";
				cin>>e;
				l.insertBeg(e);
				
				break;
			}
			
			case 2:
			{
				int e;
				cout<<"Enter element to insert: ";
				cin>>e;
				l.insertEnd(e);
				
				break;
			}
			
			case 3:
			{
				int e, d;
				cout<<"Enter element to insert: ";
				cin>>e;
				cout<<"Enter value of destination: ";
				cin>>d;
				l.insertMid(e, d);
				
				break;
			}
			
			case 4:
			{
				l.deleteBeg();
				break;
			}
			
			case 5:
			{
				l.deleteEnd();
				break;
			}

			case 7:
			{
				int e;
				cout<<"Enter an element to search: ";
				cin>>e;
				l.search(e);

				break;
			}

			case 6:
			{
				int e;
				cout<<"Enter element to be deleted: ";
				cin>>e;
				l.deleteMid(e);
				
				break;			
			}

			case 8:
			{
				l.display();
				cout<<"\n\n";
				
				break;
			}
			
			default:
			{
				choice = 9;
			}
		}
	}
	while(choice != 9);
	
	return 0;
}
