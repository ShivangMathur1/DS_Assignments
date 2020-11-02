#include <iostream>

using namespace std;

struct node
{
	int val;
	node *next;
};

class circle
{
	node *head = NULL;
	
	public:
		
	void insert(int e)
	{
		if(head == NULL)
		{
			head = new node;
			head->val = e;
			head->next = head;
			return;
		}
		node *temp = head;		
		while(temp)
		{
			if(temp->next == head)
			{
				cout<<temp->val<<" ";
				node *n = new node;
				n->val = e;
				n->next = head;
				temp->next = n;
				return;
			}
			temp = temp->next;
		}
	}
	
	void check()
	{
		node *temp = head;
		
		while(temp)
		{
			if(temp->next == head)
			{
				cout<<"It is a circular linked list";
				return;
			}
			temp = temp->next;
		}
		
		cout<<"It is not a circular linked list";
	}
	
	void display()
	{
		node *temp = head;
		while(temp->next != head)
		{
			cout<<temp->val<<" ";
			temp= temp->next;
		}
		cout<<temp->val<<" "<<temp->next->val;
	}
};

int main()
{
	circle c;
	int choice;
	
	do
    {
        cout<<"MENU\n1. Insert\n2. Check if list is circular\n3. Display\n4. Exit\nChoice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                int e;
                cout<<"Enter value of new node: ";
                cin>>e;

                c.insert(e);
                break;
            }
            
            case 2:
            {
            	c.check();
            	cout<<"\n\n";
            	break;
			}
            
            case 3:
            {
                c.display();
                cout<<"\n\n";
                break;
            }
            
            default:
            {
                choice = 4;
            }
        }
    } while (choice != 4);
	
	return 0;
}
