#include<iostream>

using namespace std;

class queue
{
	int head;
	int tail;
	int arr[10];
	
	public:
		
	queue()
	{
		head = -1;
		tail = -1;
	}
	
	void enqueue(int e)
	{
		if(head == -1)
		{
			head++;
			tail++;
			arr[head] = e;
			return;
		}
		
		if((tail + 1) % 10 != head)
		{
			tail = (tail + 1) % 10;
			arr[tail] = e;
		}
		else
		{
			cout<<"Error: Queue Full";
		}
	}
	
	void dequeue()
	{
		if(head == -1)
		{
			cout<<"Error: Queue Empty";
			return;
		}
		else if(head == tail)
		{
			head = -1;
			tail = -1;
			return;
		}
		else
		{
			head = (head + 1) % 10;
		}
	}
	
	int front()
	{
		if(head == -1)
		{
			cout<<"Error: Queue Empty";
		}
		
		return arr[head];
	}
	
	void display()
	{
		if(head == -1)
		{
			cout<<"Error: Queue Empty";
			return;
		}
		cout<<"The Queue is: ";
		for(int i = head; i != tail; i = (i + 1) % 10)
		{
			cout<<arr[i]<<" ";
		}
		cout<<arr[tail];
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
				q.dequeue();
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
