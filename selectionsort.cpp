/*Selection Sort*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , i , j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(int i = 0; i < n-1 ; i++)  
	{
        int min = i ;
        for(int j = i+1; j < n ; j++ ) 
		{
                if(arr[j]<arr[min])  
				{            
                min=j;
                }
       }
        swap(arr[min],arr[i]); 
    }
	
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
