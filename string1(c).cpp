/*
Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1?
(eg : a. given s1 = ABCD and s2 = CDAB, return true
 b .given s1 = ABCD, and s2 = ACBD ,return false)
*/


 #include<bits/stdc++.h>
 using namespace std;
 
 bool areRotation(string a , string b)
 {
 	string temp;
 	if(a.length() != b.length())
 	return false;
 	
 	temp=a+a;    //strcat(a,a)
 	if(temp.find(b) != string::npos)        //if the sub-string is not found it returns string::npos(static member with value as the highest possible).
	 return true;
	 
	 return false;
 }
 int main()
 {
 	string s1,s2;
 	cin>>s1;
 	cin>>s2;
 	cout<<areRotation(s1,s2);
 	return 0;
		  	  
 }         
