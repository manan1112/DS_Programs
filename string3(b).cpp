/*
Given a sequence of strings, the task is to find out the second most repeated (or
frequent) string in the given sequence.
Input:
N = 6
arr[] = {aaa, bbb, ccc, bbb, aaa, aaa}
Output: bbb
*/

#include<bits/stdc++.h>
using namespace std;
string second_rep(string arr, int n)
{

unordered_map<string,int> m;
	for(int i=0;i<n;i++)
	m[arr[i]]++;
	
	int max1=INT_MIN;
	int max2=INT_MIN;
	for(auto x:m)
	{
		if(x.second>max1)
		{
		max2=max1;
		max1=x.second;
		}
		else if(x.second>max2 && x.second != max1)
		max2=x.second;
	}
	
	for(auto x:m)
	if(x.second==max2)
	return x.first;
}

int main()
{
    string arr[]={aaa,bbb,ccc,bbb,aaa,aaa};
    cout<<second_rep(arr,arr.size());
	return 0;
}
