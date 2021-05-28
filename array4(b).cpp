/*
For a given input string (str) . Write a function to print all the possible substrings.
Sample input : abc 
Sample output : a ab abc b bc c
*/

#include <bits/stdc++.h>
using namespace std;
void total_substr(string str)
{
    int n=str.length();
    for(int len=1;len<=n;len++)
    {
    	for(int i=0;i<=n-len;i++)
    	{
    		int j=i+len-1;
    		for(int k=i;k<=j;k++)
    		cout<<str[k];
    	cout<<endl;	
		}
	}
	
}

int main()
{
	string s;
	cin>>s;
	total_substr(s);
	return 0;
}
