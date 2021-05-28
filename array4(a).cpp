/* 
You are given an integer array/list ( ARR) of size N. It contains only 0s, 1s and 2s. 
Write a solution to sort this array/list in a single scan. 
Single scan refers to iterating over the array/list just once or to put it in other words, 
you will be visiting each element in the array/list just once
Sample input : 7 
0 1 2 0 2 0 1
output :
0 0 0 1 1 2 2
*/
#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int countz=0,countone=0,counttwo=0 ;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                countz++;
            else if(a[i]==1)
                countone++;
            else
                counttwo++;
        }
        
        for(i=0;i<countz;i++)
            a[i]=0;
        for(i=countz;i<countz+countone;i++)
            a[i]=1;
        for(i=countz+countone;i<n;i++)
            a[i]=2;

	for(i=0;i<n;i++)
	cout<<a[i];
	
}
