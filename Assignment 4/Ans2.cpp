#include<iostream>

using namespace std;

struct node
{
	char val;
	node *next;
};

class stack
{
	node *top = NULL;
	
	public:
	
	void push(char e)
	{
		
		node *temp = new node;
		temp->val = e;
		temp->next = top;
		top = temp;
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
	
	void display()
	{
		node *temp = top;
		while(temp)
		{
			cout<<temp->val<<" ";
			temp= temp->next;	
		}
	}

};

int main()
{
	stack s;
	
	char str[50];
	
	cout<<"Enter a string: ";
	cin>>str;
	int i;
	
	for(i = 0; str[i] != '\0'; i++)
	{
		s.push(str[i]);
	}
	
	for(; i > 0; i--)
	{
		node *temp = s.pop();
		cout<<temp->val;
	}
	
	return 0;
}
