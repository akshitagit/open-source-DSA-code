//time complexity: O(logn)
//array should be sorted 

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r)
	{
        	int m = l + (r - l) / 2;
        	if (arr[m] == x)
        	{
            		cout<<"Element is present at index "<<m<<".";
            		return 0;
        	}
        	if (arr[m] < x)
            		l = m + 1;
        	else
            		r = m - 1;
    	}
     cout << "Element not found.";
     return 0;
}
int main(void)
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
	binarySearch(arr, 0, n - 1, x);
}
