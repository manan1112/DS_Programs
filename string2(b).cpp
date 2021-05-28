/*
Given a string, we have to find out all subsequences of it. A String is a
subsequence of a given String, that is generated by deleting some character
of a given string without changing its order.
Examples:
Input : abc
Output : a, b, c, ab, bc, ac, abc
*/
#include<bits/stdc++.h>
using namespace std;
void print_subseq(string s,string o)
{
	if(s.length()==0)
	{
	cout<<o<<endl;
	return;
    }
    print_subseq(s.substr(1),o);
    print_subseq(s.substr(1),o+s[0]);
}
int main()
{
	string st;
	cin>>st;
	string output="";
	print_subseq(st,output);
	return 0;
}
