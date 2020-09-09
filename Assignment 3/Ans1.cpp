#include <iostream>

using namespace std;

struct node
{
    node *prev;
    int val;
    node *next;
};

class doubly
{
    node *head = NULL;

    public:
    void insertMid(int e, int target)
    {
        if(head == NULL)
        {
            head = new node;
            head->prev = NULL;
            head->val = e;
            head->next = NULL;
            return;
        }

        node *temp = head;
        while(temp != NULL)
        {
            if(temp->val == target)
            {
                node *n = new node;
                n->val = e;
                n->next = temp->next;
                n->prev = temp;
                temp->next = n;
                if(n->next != NULL)
                {
                    n->next->prev = n;
                }
                return;
            }
            temp = temp->next;
        }
        cout<<"Error: Target element not found!\n\n";
    }
	
	void del(int target)
	{
		node *temp = head;
		while(temp)
		{
			if(temp->val == target)
			{
				if(temp->prev)
				{
					temp->prev->next = temp->next;
				}
				if(temp->next)
				{
					temp->next->prev = temp->prev;
				}
				
				if(temp == head)
				{
					head = temp->next;
				}
				delete temp;
				return;
			}
			temp = temp->next;
		}
		cout<<"Error: Target not found\n\n";
	}
	
	void search(int e)
	{
		node *temp = head;
		int i = 0;
		while(temp)
		{
			if(temp->val == e)
			{
				cout<<"Element "<<e<<" found at index "<<i + 1;
				return;
			}
			temp = temp->next;
			i++;
		}
		cout<<"Error: Element not present";
	}
	
    void display()
    {
        cout<<"The list: ";
        node *t, *temp = head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};

int main()
{
    int c;
    doubly d;
    do
    {
        cout<<"MENU\n1. Insert\n2. Delete\n3. Display\n4. Search\n5. Exit\nChoice: ";
        cin>>c;

        switch(c)
        {
            case 1:
            {
                int e, t;
                cout<<"Enter value of new node: ";
                cin>>e;
                cout<<"Enter value of target node: ";
                cin>>t;
                d.insertMid(e, t);
                break;
            }
            
            case 2:
            {
            	int t;
            	cout<<"Enter element to delete: ";
            	cin>>t;
            	d.del(t);
            	break;
			}

            case 3:
            {
                d.display();
                cout<<"\n\n";
                break;
            }
            
            case 4:
            {
            	int e;
            	cout<<"Enter element to search: ";
            	cin>>e;
            	d.search(e);
            	cout<<"\n\n";
            	break;
			}
            
            default:
            {
                c = 5;
            }
        }
    } while (c != 5);
    
    return 0;
}
