/* 
You have been given a random integer array/list(ARR) of size N and an integer X. You need to search for the integer X is present in array
list. If x has multiple occurances in the array list, then you need to return theb index at which first occurence of x would be encountered 
in case X is not present in the array then return -1
*/

#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
		cout<<i;
		return 0;
	    }
	}
	cout<<"-1";
	return 0;
}
