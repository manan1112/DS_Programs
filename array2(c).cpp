/*
You have been given an integer array/list (ARR) of size N which contains numbers from 0 to (N-2). 
Each number is present at least once. That is if N=5, the array/list constitutes values ranging from 0 to 3 and among these ,
 there is a single integer value that is present twice .
You need to find and return that duplicate number present in the array.
Note : Duplicate number is always present in the given array/list.
Input: 9
0 7 2 5 4 7 1 3 6
output: 7
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			cout<<a[i];
		}
	}
	return 0;
}
