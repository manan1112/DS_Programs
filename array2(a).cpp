/*
You have been given an integer array/list (ARR) and a number X . 
Find and return the total number of pairs in the array/ list which sum to X. 
Note- Given array/list can contain duplicate elements
Input : arr [] = {1, 5, 7, -1}, 
Sum = 6 
Output : 2
Pairs with sum 6 are (1, 5) and (7, -1)
*/
#include<iostream>
using namespace std;
int main()
{
	int n,sum,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>sum;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			count++;			
		}
	}
	cout<<count;
	return 0;
}
