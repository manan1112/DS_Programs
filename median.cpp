/*
Given an array arr[] of N integers, calculate the median

Example 1:

Input: N = 5
arr[] = 90 100 78 89 67
Output: 89
Explanation: After sorting the array 
middle element is the median 

Example 2:
Input: N = 4
arr[] = 56 67 30 79​
Output: 61
Explanation: In case of even number of 
elements average of two middle elements 
is the median

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,median=0;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++)
	 cin>>arr[i];
	
	sort(arr,arr+m);
	n=m-1;
	if(m%2 !=0)
         median=arr[n/2];	 
	else
	  median=(arr[(n+1)/2] + arr[(n-1)/2])/2;
	cout<<median;
	
	return 0;
}
