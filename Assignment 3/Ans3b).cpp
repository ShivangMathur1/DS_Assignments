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
	
	void count()
	{
		if(head == NULL)
		{
			cout<<"Size: 0";
			return;
		}
		node *temp = head;
		int i = 0;
		while(temp->next != head)
		{
			temp= temp->next;
			i++;
		}
		cout<<"Size: "<<i + 1;
	}
};

int main()
{
	circle c;
	int choice;
	
	do
    {
        cout<<"MENU\n1. Insert\n2. Size\n3. Exit\nChoice: ";
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
                c.count();
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
