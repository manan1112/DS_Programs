/*
1.You have been given an array of size n. you need to swap every pair of alternate elements in array list.
input: 6
9 3 6 12 4 32
output:
3 9 12 6 32 4
*/
#include<iostream>
using namespace std;
void swap(int arr[],int num)
{
	int temp ,i;
	for(i=0;i<num-1;i=i+2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;	
	}
	for(i=0;i<num;i++)
	cout<<arr[i]<<"\t";
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	swap(a,n);
	return 0;
}
