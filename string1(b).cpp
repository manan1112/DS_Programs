/*
Write an efficient program to print all the duplicates and their counts in the
input string.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<char,int> m;
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		m[s[i]]++;
	}
	for(auto x:m)
	{
		if(x.second > 1)
		cout<<x.first<<"->"<<x.second<<endl;
	}
	return 0;
}
