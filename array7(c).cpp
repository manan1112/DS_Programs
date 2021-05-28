 /*
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase
contains two lines of input. First line contains N the size of the array A. The second line
contains the elements of the array. 
input : 
1 
4 
1 2 3 4
output:
4 3 2 1
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
 	    int start=0;
		int end=n-1;
 	    while(start<end)
 	    {
 	    	int temp=0;
 	    	temp=arr[start];
 	    	arr[start]=arr[end];
 	    	arr[end]=temp;	
 	    	start++;
 	    	end--;
		}
		for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
 		t--;
	 }
	 return 0;
 }
