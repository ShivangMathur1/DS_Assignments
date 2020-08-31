#include<iostream>

using namespace std;

struct node
{
	int val;
	node *next;
};

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
		
		tail->next = n;
		tail = n;
		if(head == NULL)
		{
			head = tail;
		}
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
	
	void middle()
	{
		node *temp = 
	}
};
