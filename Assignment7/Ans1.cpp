#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	unordered_map<int, int> hash;
	
	cout<<"Enter no. of elements: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter array: ";
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
		hash[arr[i]]++;
	}
	
	int max = 0, res = -1;
	for(auto i : hash)
	{
		if(max < i.second)
		{
			max = i.second;
			res = i.first;
		}
	}
	
	cout<<"Element "<<res<<" has max frequency\n";
	return 0;
}
