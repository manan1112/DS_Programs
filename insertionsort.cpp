/*Insertion Sort*/

#include<iostream>
using namespace std;
int main()
{
	int n,key=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
    for(int i=0;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
