/*
For a given string , find and return the highest occurring character .
Sample Input :
abdefgbabfba
Sample Output :
b

#include<iostream>
using namespace std;
char getMaxOccuringChar(string str)
    {
        int len=str.length();
        int freq[26]={0};
        
        for(int i=0;i<len;i++)
        {
            freq[str[i]-'a']++;
        }
        
        char highfreq= 'a';
        int max=freq[0];
        
        for(int i=1;i<26;i++)
        {
         if(max<freq[i])
         {
             max=freq[i];
             highfreq= (char)i+'a';
         }
        }
        
        return highfreq;
	 }
	 
	 int main()
	 {
	 	string str;
	    getline(cin,str);
	    cout<<getMaxOccuringChar(str);
	 }
	 
	 
	 */
	 
	 
	 
	 #include <iostream>
#include <unordered_map>
using namespace std;
    char getMaxOccuringChar(string str)
    {
        // Your code
        //freq=0,
        int index;
        unordered_map <char,int> m;
        for(int i=0;i<str.length();i++)
        {
            m[str[i]]++;
        }
        int maxi=0;
        for(int i=0;i<str.length();i++)
        {
            if(m[str[i]]>maxi)
            {
                index=i;
                maxi = m[str[i]];
            }
        }
        return str[index];
    }
    int main()
    {
        string s="xxy";
        cout<<getMaxOccuringChar(s);
        return 0;
    } 
    
