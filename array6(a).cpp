/*
 Write a program to do basic string compression for a character which is consecutively
repeated more than once, replace consecutive duplicate occurrences with the count of
repetitions.
e.g. If a string has x repeated 5 times , replace this xxxxx with “x5”
Sample Input:
aaabbccdsa
Sample Output:
a3b2c2dsa
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int counter=1;
    string str="";
    cin>>s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
            counter++;
        else
        {
            if(counter!=1)
                str+= s[i-1]+ to_string(counter);
            else
                str+= s[i-1];
            counter=1;
        }
    }
    if(counter!=1)
        str+=s[s.length()-1]+to_string(counter);
    else
        str+= s[s.length()-1];
    cout<<str;
    return 0;
}
