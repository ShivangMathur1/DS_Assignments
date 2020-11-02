#include<iostream>

using namespace std;

struct node
{
	int val;
	node *next;
};

class stack
{
	node *top = NULL;
	
	public:
	
	void push(int e)
	{
		
		if(!isFull())
		{
			node *temp = new node;
			temp->val = e;
			temp->next = top;
			top = temp;
		}
		else
		{
			cout<<"Stack is full";
			return;
		}
	}
	
	node* pop()
	{
		if(!top)
		{
			cout<<"Error: Stack Empty";
			return top;
		}
		
		node *temp = top;
		top = top->next;
		return temp;
	}
	
	bool isEmpty()
	{
		if(top)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
	bool isFull()
	{
		node *temp = new node;
		if(temp)
		{
			return false;
		}
		else
		{
			return true;
		}
		delete temp;
	}
	
	void display()
	{
		node *temp = top;
		while(temp)
		{
			cout<<temp->val<<" ";
			temp= temp->next;	
		}
	}
	
	void peek()
	{
		if(isEmpty())
		{
			cout<<"Error: Stack Empty";
			return;
		}
		cout<<"Top element: "<<top->val;
		
	}
};

int main()
{
	stack s;
	int choice = 7;
	do
	{
		cout<<"Menu-------------------------\n1. Push\n2. Pop\n3. Check if Empty\n4. Check if Full\n5. Display\n6. Peek\n7. Exit\nChoice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				int e;
				cout<<"Enter a value to push: ";
				cin>>e;
				s.push(e);	
				break;
			}
			
			case 2:
			{
				node *temp = s.pop();
				if(temp)
				{
					cout<<"Value "<<temp->val<<" popped from top";
					delete temp;
				}
				cout<<"\n\n";
				break;
			}
			
			case 3:
			{
				if(s.isEmpty())
				{
					cout<<"Stack empty";
				}
				else
				{
					cout<<"Stack not empty";
				}
				cout<<"\n\n";
				break;
			}
			
			case 4:
			{
				if(s.isFull())
				{
					cout<<"Stack is full";
				}
				else
				{
					cout<<"Stack is not full";
				}
				cout<<"\n\n";
				break;
			}
			
			case 5:
			{
				s.display();
				cout<<"\n\n";
				break;
			}
			
			case 6:
			{
				s.peek();
				cout<<"\n\n";
				break;
			}
			
			default:
			{
				choice = 7;
			}
		}
	}
	while(choice != 7);
	return 0;
}
