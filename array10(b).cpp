/*
Given an array Arr that contains N integers (may be positive, negative or zero).Find the product of the maximum product subarray.
Input:
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 
180
*/
#include<iostream>
using namespace std;

int maxprod(int arr[],int n)
{   int maxi = arr[0];
    int mini = arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
    	if(arr[i]<0)
    	{
    	swap(maxi,mini);
        }
        maxi = max(arr[i],maxi*arr[i]);
        mini = min(arr[i],mini*arr[i]);
        res  = max(res,maxi);
    }  
    return res;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int ans=maxprod(arr,n);
	cout<<ans;
	return 0;	
}
