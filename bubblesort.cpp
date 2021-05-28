/* BUBBLE SORT */

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];

//Naive Approach 
/*	for(i=0;i<n-1;i++)        //no. of passes
	{
		for(j=0;j<n-i;j++)   //comapring elements
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	} */
	
//Optimistic Approach
	for(i=0;i<n-1;i++)        
	{
		bool swapped=false;
		for(j=0;j<n-i;j++)   
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=true;
			}
		}
		if(swapped==false)
		break;
	}
	
	
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	return 0;
	
	
}
