//time complexity: O(n)

#include <iostream>
using namespace std;
#define MAX 10000

int linearSearch(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
        	{
            		cout<<"Element is present at index "<<i<<".";
            		return 0;
        	}
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
    	linearSearch(arr, n, x);
    	return 0;
}
