/*
Given an array of integers, print a sum triangle from it such that the first
level has all array elements. From then, at each level number of elements is
one less than the previous level and elements at the level is be the Sum of
consecutive two elements in the previous level.
Example :
Input : A = {1, 2, 3, 4, 5}
Output : [48]
 [20, 28]
 [8, 12, 16]
 [3, 5, 7, 9]
 [1, 2, 3, 4, 5] 
 */
 
 #include<iostream>
 using namespace std;
 void sum_triangle(int a[],int n)
 {
 	if(n<1)
 	return;
 	int temp[n-1];
    for (int i=0;i<n-1;i++)
       temp[i]=a[i]+a[i+1];
       
    sum_triangle(temp,n-1);   
	   
    for(int i=0;i<n-1;i++)
	cout<<temp[i]<<" ";   
	cout<<endl;
    
 }
 int main()
 {
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++)
 	cin>>arr[i];
 	sum_triangle(arr,n);
 	return 0;
 }
