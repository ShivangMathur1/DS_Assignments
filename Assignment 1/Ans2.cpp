#include <iostream>

using namespace std;

int main()
{
	int x = 0, n, arr[100], temp;
	
	cout<<"Enter size of array: ";
	cin>>n;
	
	cout<<"Enter an array: ";
	
	for(int i = 0; i < n; i++)
	{
		int flag = 1;
		cin>>temp;
		
		for(int j = 0; j < x; j++)
		{
			if(temp == arr[j])
			{
				flag = 0;
			}
		}
		
		if(flag)
		{
			arr[x] = temp;
			x++;
		}
	}
	cout<<"The changed array is: ";
	for(int i = 0; i < x; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
