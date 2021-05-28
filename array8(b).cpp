/*
Given an unsorted array of both negative and positive integer. The task is place all
negative element at the end of array without changing the order of positive element
and negative element.
Examples:
Input : arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 1 3 2 11 6 -1 -7 -5 
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
	
	int temp[n];
    int j=0;
    
    for(int i=0;i<n;i++)    //positive
    {
        if(arr[i]>0)
        {
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)     //negative
    {
        if(arr[i]<0)
        {
            temp[j]=arr[i];
            j++;
        }
    }
    
    for(int i=0;i<n;i++)     
    {
        arr[i]=temp[i];
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
     return 0;
}
