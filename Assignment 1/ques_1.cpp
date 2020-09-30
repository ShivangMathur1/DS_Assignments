#include<iostream>
using namespace std;
int a[30];
int c,n,i,pos,ival,dval,sval,flag;

void create()
{
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

void display()
{
	cout<<"Elements of this array are:"<<endl;
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

void insert()
{
	cout<<"Enter the position to insert"<<endl;
	cin>>pos;
	cout<<"Enter the element to insert"<<endl;
	cin>>ival;
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ival;
	n=n+1;
}

void del()
{
	cout<<"Enter the position to delete the element"<<endl;
	cin>>pos;
	dval=a[pos];
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	cout<<"The deleted element is "<<dval;
}

void search()
{
	cout<<"Enter the element to be searched"<<endl;
	cin>>sval;
	for(i=0;i<n;i++)
	{
		if(a[i]==sval)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"This element is present in the array"<<endl;
	}
	else
	{
		cout<<"This element is not present in the array"<<endl;
	}
}

int main()
{
	int choice;
	do{
		cout<<"\n--Menu--"<<endl;
		cout<<"1.CREATE"<<endl;
		cout<<"2.DISPLAY"<<endl;
		cout<<"3.INSERT"<<endl;
		cout<<"4.DELETE"<<endl;
		cout<<"5.SEARCH"<<endl;
		cout<<"6.EXIT"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>c;
		switch(c){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				insert();
				break;
			case 4:
				del();
				break;
			case 5:
				search();
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"Invalid choice"<<endl;
		}
	}while(c!=8);
	return 0;
}
