/*
You have been given an integer array/list (ARR) of size N that contains only integers, 0
and 1. Write a function to sort this array/list. Think of a solution which scans the
array/list only once and don’t require use of an extra array/list
Sample input 1
1
7
0 1 1 0 1 0 1
Output :
0 0 0 1 1 1 1
*/
 #include<iostream>
 using namespace std;
 int main()
 {
 	int t;
	 cin>>t;
 	while(t!=0)
 	{
 		int n;
 		cin>>n;
 		int arr[n];
 		for(int i=0;i<n;i++)
 		cin>>arr[i];
 		int count=0,temp=0;
 		for(int i=0;i<n;i++)
 		{
 			if(arr[i] == 0)  
 			{
 		     	temp=arr[i];
	            arr[i]=arr[count];
	            arr[count]=temp;
	            count++;		
			 }
		 }
		 for(int i=0;i<n;i++)
		  cout<<arr[i];
		t--;  
	}
 		
 		return 0;
 }
