#include<iostream>


using namespace std;
int main()
{
	int c = 6, n = 0, max = 20;
	int * arr;
	do
	{
		cout<<"--MENU--\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.SEARCH\n6.EXIT\n";
		cin>>c;
		
		switch(c)
		{
			case 1: 
			{
				cout<<"Enter size of array: ";
				cin>>n;
				cout<<"Enter array: ";
				arr = new int[n];
				for(int i = 0; i < n; i++)
				{
					cin>>arr[i];
				}
				cout<<"\n";
				break;
			}
			case 2:
			{
				for(int i = 0; i < n; i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<"\n\n";
				break;
			}
			case 3:
			{
				
		
				int index, e, temp, x = 0;
				cout<<"Enter index to insert element at: ";
				cin>>index;
				cout<<"Enter element to add: ";
				cin>>e;
				if(n == max)
				{
					cout<<"Error: max size reached\n\n";
					break;
				}
				
				temp = arr[index - 1];
				arr[index - 1] = e;
				
				for(int i = index; i < n; i++)
				{
					temp += arr[i];
					arr[i] = temp - arr[i];
					temp = temp - arr[i];
				}
				arr[n] = temp;
				n++;
				cout<<"\n\n";
				break;
			}
		
			case 4:
			{
				int index, temp;
				cout<<"Enter index to delete: ";
				cin>>index;
				
				temp = arr[n-1];
				for(int i = n - 2; i >= index; i--)
				{
					temp += arr[i];
					arr[i] = temp - arr[i];
					temp = temp - arr[i];
				}
				arr[index - 1] = temp;
				n--;
				cout<<"\n\n";
				
				break;
			}
			
			case 5:
			{
				int e;
				cout<<"Enter element to search: ";
				cin>>e;
				
				for(int i = 0; i < n; i++)
				{
					if(arr[i] == e)
					{
						cout<<"Element "<<e<<" found at index "<<i + 1<<"\n";
					}
				}
				cout<<"\n";
				break;
			}
			
			default: 
				c = 6;
		}
		
	}while(c != 6);
	
	return 0;
}
