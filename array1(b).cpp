/*Given an array of length N, which contains single digit elements at every index.
 You need to find and return the sum of all elements of the array. But the final sum should also be a single digit.
In order to keep the output single digit - you need to keep adding the output number digits till single digit is left.*/

#include<iostream>
using namespace std;
int check_sum(int);
 int main()
 {
 	int n,sum=0,i;
 	cin>>n;
 	
	int a[n];
 	
 	for(i=0;i<n;i++)  
 	  cin>>a[i];

 	for(i=0;i<n;i++)
 		sum=sum+a[i];
	cout<<check_sum(sum);
    return 0;	   
 }
 //function to calculate sum
 int check_sum(int sum)
 {
    while((sum/10)!=0)    //till it become single digit   //o(n)
 	{   
 		int num=sum;
 		sum=0;
	  	while(num!=0)      //o(logn)
	  	{
	  		  sum=sum+num%10;
			  num=num/10;	
		}
     }
     return sum;
}

