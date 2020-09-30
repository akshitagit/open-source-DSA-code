//Time Complexity : O(√n)

#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

int jumpSearch(int arr[], int x, int n)
{
	int step = sqrt(n);
	int prev = 0;
	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
		{
			cout << "Element not found.";
    			return 0;
		}
	}
	while (arr[prev] < x)
	{
		prev++;
		if (prev == min(step, n))
		{
			cout << "Element not found.";
    			return 0;
		}
	}
	if (arr[prev] == x)
	{
		cout<<"Element is present at index "<<prev<<".";
		return 0;
	}
	cout << "Element not found.";
    	return 0;
}
int main()
{
	int n,num,x;
	int arr[MAX];
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(int i=0;i<n;i++)
    	{
        	cin>>num;
        	arr[i]=num;
    	}
    	cout<<"Enter the element to be searched : ";
    	cin>>x;
	jumpSearch(arr, x, n);
	return 0;
}
