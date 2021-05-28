/*You have been given a random integer array/list (ARR) of size N .You have been
required to push all the zeros that are present in the array/list to the end of it. Also
make sure to maintain the relative order of the non zero elements.
Sample Input :
7
2 0 0 1 3 0 0 
Output :
2 1 3 0 0 0 0
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int temp=0,count=0;
	for(int i=0;i<n;i++)
	    {
	        if(arr[i] != 0)
	        {
	            temp=arr[i];
	            arr[i]=arr[count];
	            arr[count]=temp;
	            count++;
	        }
	    }
    for(int i=0;i<n;i++)
     cout<<arr[i]<<"\t";
     
    return 0; 
}
