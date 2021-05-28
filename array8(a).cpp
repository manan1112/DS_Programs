/*
An array contains both positive and negative numbers in random order. Rearrange the
array elements so that all negative numbers appear before all positive numbers.
Examples :
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Note: Order of elements is not important here
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int start=0;
	int end=n-1;
	
while(start<end)
{
	if(arr[start]>0 && arr[end]<0)
		{
			int temp=0;
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			
			start++;
			end--;
		}
	else if(arr[start]>0 && arr[end]>0)
	{
		end--;
	}
	else if(arr[start]<0 && arr[end]<0)
	{
		start++;
	}
	else
	{
		start++;
		end--;
	}	
	
}
		
    for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";				
				
	return 0;
}
