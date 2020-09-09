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
        cout<<"MENU\n1. Insert\n2. Display\n3. Exit\nChoice: ";
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
                c.display();
                cout<<"\n\n";
                break;
            }
            
            default:
            {
                choice = 3;
            }
        }
    } while (choice != 3);
	
	return 0;
}
