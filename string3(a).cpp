/*
Given a binary string str of length N, the task is to find the maximum count of
substrings str can be divided into such that all the substrings are balanced i.e. they have
equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then
print -1.
Input: str = “0100110101”
Output: 4
The required substrings are “01”, “0011”, “01” and “01”.
*/

#include <iostream>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int counter=0, res=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
            counter++;
        else
            counter--;
        if(counter==0)
            res++;
    }
    if(counter!=0)
        cout<<"-1";
    else
        cout<<res;
    return 0;
}
