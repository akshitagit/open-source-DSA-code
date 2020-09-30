//Time complexity : O(loglogn) or O(n) best(uniformly distributed) and worst case
//Improvement over binary search

#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

int interpolationSearch(int arr[], int n, int x)
{
	int lo = 0, hi = (n - 1);
	while (lo <= hi && x >= arr[lo] && x <= arr[hi])
	{
		if (lo == hi)
		{
			if (arr[lo] == x) return lo;
			{
			   	cout << "Element not found.";
    				return 0;
			}
		}
		int pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));
		if (arr[pos] == x)
		{
            		cout<<"Element is present at index "<<pos<<".";
            		return 0;
        	}

		if (arr[pos] < x)
			lo = pos + 1;
		else
			hi = pos - 1;
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
	interpolationSearch(arr, n, x);
	return 0;
}
