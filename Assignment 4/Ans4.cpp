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
		
		if(!isFull())
		{
			node *temp = new node;
			temp->val = e;
			temp->next = top;
			top = temp;
		}
		else
		{
			return;
		}
	}
	
	node* pop()
	{
		if(!top)
		{
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
	
	char peek()
	{
		if(isEmpty())
		{
			return '$';
		}
		return top->val;
		
	}
};

int precedence(char o)
{
	switch(o)
	{
		case '+':
		case '-':
			return 1;
			
		case '*':
		case '/':
			return 2;
		
		case '^':
			return 3;
		default:
			return 0;
	}
}

int main()
{
	stack s;
	s.push('(');
	string exp;
	string post;
	cout<<"Enter an expression: ";
	cin>>exp;
	exp.push_back(')');
	
	for(int i = 0; i < exp.length(); i++)
	{
		if(exp[i] != ')' && !precedence(exp[i]))
		{
			post.push_back(exp[i]);
		}
		
		else if(exp[i] == ')')
		{
			while(s.peek() != '(')
			{
				post.push_back(s.pop()->val);
			}
			delete s.pop();
		}
		
		else if(precedence(exp[i]) > precedence(s.peek()))
		{
			s.push(exp[i]);
		}
		else
		{
			while(s.peek() != '(' && precedence(exp[i]) <= precedence(s.peek()))
			{
				post.push_back(s.pop()->val);

			}
			s.push(exp[i]);
		}
		s.display();
		cout<<"\n"<<post<<"\n";
	}
	
	if(s.peek() == '$')
	{
		cout<<"Success: ";
		cout<<post;
	}
	return 0;
}
