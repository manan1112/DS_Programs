/*
Given a binary string, that is it contains only 0s and 1s. We need to make this string a
sequence of alternate characters by flipping some of the bits, our goal is to minimize
the number of bits to be flipped.
*/
#include<bits/stdc++.h>
using namespace std;
int count_flip(string s)
{
/*	int r=0;
	for(int i=0;i<st.length();i++)
	{
		if(st[i] != first)
		{
			if(st[i+1]=='0')
			st[i+1]='1';
			else
			st[i+1]='0';
			
			r++;
		}
	}
	return r;*/
	 int c1=0, c2=0;
    for(int i=0;i<s.size();i++)
    {
        if(i%2 !=0 && s[i]=='0')
        c1++;
        if(i%2 ==0 && s[i]=='1')
        c1++;
        if(i%2 !=0 && s[i]=='1')
        c2++;
        if(i%2 ==0 && s[i]=='0')
        c2++;
    }
    return min(c1,c2);
}
int main()
{
	string s;
	cin>>s;
	cout<<count_flip(s);
	return 0;
}
