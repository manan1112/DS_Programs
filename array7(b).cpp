/*
You have been given two sorted arrays/lists ( ARR1 and ARR2) of size N and M
respectively , merge them into a third array/list such that third array is also sorted.
Sample input :
5
1 3 4 7 11
4
2 4 6 13
Sample output :
1 2 3 4 4 6 7 11 13
*/

#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	int m;
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	int c[m+n];
	
	i=j=k=0;
	while(i<n && j<m)
	{
		if(a[i]<=b[j])
		{
		   c[k]=a[i];
		   i++;
		   k++;
	    }
	    else 
	    {
	    	c[k]=b[j];
	    	j++;
	    	k++;
		}	
	}
	while(i<n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<m)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	
	for(i=0;i<n+m;i++)
	cout<<c[i]<<" ";
	return 0;
}
