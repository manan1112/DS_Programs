/*For a given two dimensional integer array/list of size (N*M), print the array/list in a
sine wave order ,i.e. print the first column top to bottom, next column bottom to top
and so on.
Sample input 1:
1
3 4
1 2 3 4
5 6 7 8
9 10 11 12
Sample output
1 5 9 10 6 2 3 7 11 12 8 4*/


#include<iostream>
using namespace std;
int main()
{
	
	int m,n;
	cin>>m;
	cin>>n;
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			if(j%2==0)
			cout<<arr[i][j]<<" ";
			else
			cout<<arr[m-i-1][j]<<" ";
		}
	}
	return 0;
}
