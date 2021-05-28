/*
You have been given an empty array and its size N.The only input taken from user will be N and you need not worry about array.
Your task is to populate the array using integer values in range 1 to N (both inclusive in order 1,3,...,4,2)
input:6
output: 135642
*/

#include<iostream>
using namespace std;
void inclusive_arr(int num)
{
	int start=0,end=num-1,val=1;    //2-pointer technique
	int a[num];
	while(start<end)
	{
	a[start]=val;
	start++;
	val++;
	a[end]=val;
	end--;
	val++;
    }
    if(start==end)
    {
    	a[start]=val;
	}
	for(int i=0;i<num;i++)
	cout<<a[i];
}
int main()
{
	int n;
	cin>>n;
    inclusive_arr(n);
	return 0;	
}



/* 
NOTE :
a[start]=val;
start++;val++;
can also be written as
a[start++]=val++;
 */
