/*
Given a Integer array A[] of n elements. Your task is to complete the
function PalinArray. Which will return 1 if all the elements of the Array are
palindrome otherwise it will return 0.
Input:
2
5
111 222 333 444 555
3
121 131 20
Output:
1
0
*/

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
 while(t>0)
 {	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int flag=0;
	
	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		int rev=0,digit=0;
		 
		 while(temp !=0)
        {
         digit = temp % 10;
         rev = (rev * 10) + digit;
         temp = temp / 10;
        } 
		 if (rev != arr[i])
		 flag++;	
	}
	if(flag==0)
	cout<<"1";
	else
	cout<<"0";
		
 }
t--;
return 0;	
	
}


/*
sort(arr,arr+n);
	int median;
	if(n%2!=0)
	median=arr[(n-1)/2];
	else
	median=(arr[(n/2) -1] + arr[n/2])/2;
	
	*/
