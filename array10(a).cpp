/*
Kadane's Algorithm :
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
*/
#include<iostream>
using namespace std;

int maxsum(int arr[],int n)
{   int bigger = arr[0];
    int big = arr[0];
    for(int i=1;i<n;i++)
    {
        big = max(arr[i],big+arr[i]);
        bigger = max(big,bigger);
    }
    return bigger;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int ans=maxsum(arr,n);
	cout<<ans;
	return 0;	
}
