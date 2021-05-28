/*Given an array, update each element of the array by the value obtained by dividing the element by 4 (take only integer part). 
If the value obtained by dividing element by 4 comes out to be 0, then update the element with value -1.
Note: Do not return or print array and make changes in the same array.*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;   //total elements
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];  
	for(int i=0;i<n;i++)
	{
		a[i]=a[i]/4;    //update array by dividing it with 4
			if(a[i]==0)
		       a[i]=-1;    //replace 0 by -1  
    }

	for(int i=0;i<n;i++)
	  cout<<a[i]<<"\t";  //print updated array
	  
	return 0;
}
