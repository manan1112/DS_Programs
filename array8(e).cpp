/*
Program to cyclically rotate an array by one
Given an array, cyclically rotate the array clockwise by one.
Examples:
Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int temp;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	temp=arr[n-1];
	for(int i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}


