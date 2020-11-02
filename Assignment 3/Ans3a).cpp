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
	
    void count()
    {
        cout<<"Size: ";
        node *temp = head;
        int i = 0;
        while(temp)
        {
	        temp = temp->next;
        	i++;
		}
		cout<<i;
    }
};

int main()
{
    int c;
    doubly d;
    do
    {
        cout<<"MENU\n1. Insert\n2. Size\n3. Exit\nChoice: ";
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
            	d.count();
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
