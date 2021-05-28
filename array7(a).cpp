/*
You are given S a sequence of N integers i.e. S= s1,s2 ….. sn. Compute if it is possible to
split S into two parts: s1,s2…sn and si +1 , si+2 ……. Sn (0 < = I < = n) in such a way that
the first part is strictly decreasing while the second one is strictly increasing one.
So, a strictly increasing sequence can be 1 4 8. However 1 4 4 is not a strictly increasing
sequence 
Input format :
Line 1: Integer ‘n’
Lin 2 and Onwards: ‘n’ integers on ‘n’ lines( single integer on each line)
Out put format :
“true” or “false” 
*/
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int n,shift=0;   //total sequence
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++)
 	cin>>arr[i];
 	
 	for(int i=0;i<n;i++)
 	{
 		if((arr[i+1]-arr[i])*(arr[i+2]-arr[i+1]<0))
 		shift++;
	 }
	 if(shift<=1)
	 cout<<"True";
	 else
	 cout<<"False";
	 
	 return 0;
 }
 
 
 
 /*int main()
 {
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 		if(a[
	 }
 	
 }*/
