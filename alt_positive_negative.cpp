/*Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number 
is followed by negative and vice-versa maintaining the order of appearance.
 Number of positive and negative numbers need not be equal. 
If there are more positive numbers they appear at the end of the array. 
If there are more negative numbers, they too appear in the end of the array.
Examples : 
Input: arr[] = {1, 2, 3, -4, -1, 4} 
Output: arr[] = {-4, 1, -1, 2, 3, 4} */

#include <iostream>
using namespace std;

int main() 
{ 
   int n, j=0,k=0 ,i=0,neg_size=0,pos_size=0;
   cout<<"Enter number of array elements : ";
   cin>>n;
   int arr[n],neg[n],pos[n];
   //input array
   cout<<"Enter array elements : \n";
   for(i=0;i<n;i++)
   cin>>arr[i];
   
   //traversing arrays
   for(i=0;i<n;i++)
   {
   	if(arr[i]<0)
   	{
   		neg[j]=arr[i];   //negative array list
   		j++;
	}
    else if(arr[i]>0)
	{
		pos[k]=arr[i];  //positive array list
		k++;
	}
  }
   neg_size=j;
   pos_size=k;
   
   //merging positive and negative array list
   i=j=k=0;
   while(i<pos_size && j<neg_size)
    {
    	arr[k]=neg[j];
        k++;
        j++;
        arr[k]=pos[i];
        k++;
        i++;
	}
	
   while(i<pos_size)
   {
   arr[k]=pos[i];
   i++;
   k++;
   }
   
   while(j<neg_size)
   {
   arr[k]=neg[j];
   j++;
   k++;
   }   
   
   //printing final array
   cout<<"Array elements are : \n";
   for(int i=0;i<n;i++)
   	cout<<arr[i]<<"\t";
	

return 0;
}
