/*
Remove Character
For a given string (str) and a character X , write a function to remove all occurrences of
X from the given string.
The input string will remain unchanged if the given character (X) doesn’t exist in the
input string
Sample Input :
aabccbaa
a
Sample output:
bccb
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1, str2;
	cin>>str1;
	char x;
	cin>>x;
	int j=0;
    for (int i=0;i<str1.length();i++)
    {
        if (str1[i] != x)
        str2=str2+str1[i];
    }
	 str1=str2;
	 cout<<str2;
	 return 0;     
}
