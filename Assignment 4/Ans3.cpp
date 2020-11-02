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
	int num = 0;
	char str[50];
	
	cout<<"ENter a string: ";
	cin>>str;
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			s.push(str[i]);
			num++;
		}
		else if(str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			node *temp = s.pop();
			if(temp)
			{
				if(temp->val - str[i] < 3)
				{
					num--;
				}
			}
			else
			{
				num--;
				break;
			}
		}
	}
	
	if(!num)
	{
		cout<<"Brackets are balanced";
	}	
	else
	{
		cout<<"Brackets are unbalanced";
	}
	return 0;
}
