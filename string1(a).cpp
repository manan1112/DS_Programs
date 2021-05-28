/*
Given a string S, check if it is palindrome or not. Return 1 if pallindrome elsse return 0
Input: S = "abba"
Output: 1
Explanation: S is a palindrome
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int first=0;
	int end=n-1;
	while(first<=end)
	{
	if(s[first] != s[end])
	{
	   cout<<"0";
       return 0;
    }
	first++;
	end--;
	}
	cout<<"1";
	return 0;   	
}
