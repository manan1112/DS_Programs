/*
Given an array of integers, find sum of array elements using recursion.
Examples:
Input : A[] = {1, 2, 3}
Output : 6
1 + 2 + 3 = 6
*/


#include<iostream>
using namespace std;
int sum_arr( int arr[],int n)
{
    if(n<=0)
    return 0;
    
	return (sum_arr(arr,n-1)+arr[n-1]);
	
}
int main()
{
	int n,sum;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sum=sum_arr(arr,n);
	cout<<sum;
	return 0;	
}
