/*
Given two unsorted arrays that represent two sets (elements in every array are
distinct), find union and intersection of two arrays.
For example, if the input arrays are:
arr1[] = {7, 1, 5, 2, 3, 6}
arr2[] = {3, 8, 6, 20, 7}

output:
Union ={1, 2, 3, 5, 6, 7, 8, 20} and
Intersection ={3, 6, 7}.
*/
 #include<bits/stdc++.h>
using namespace std;

int main()
{

	int i=0,j=0,k=0;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
    cin>>arr[i];
    int m;
    cin>>m;
    int uni[m+n];
    int inter[m+n];
    int brr[m];
    for(int i=0;i<m;i++)
    cin>>brr[i];   
    
    sort(arr,arr+m);
    sort(brr,brr+n);
    
    i=0;j=0;k=0;
    //union
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
            uni[k]=arr[i];
            i++;
            k++;
        }
        else if(brr[j]<arr[i])
        {
            uni[k]=brr[j];
            j++;
            k++;
        }
        else
        {
            uni[k]=arr[i];
            i++;
            j++;
            k++;
        }
    }
    while(i<n)
    {
        uni[k]=arr[i];
        k++;
        i++;
    }
    
    while(j<m)
    {
    uni[k]=brr[j];
	k++;
	j++;  
    }
    
    cout<<"Union :" ;
    for(i=0;i<k;i++)
    cout<<uni[i]<<" ";
    cout<<endl;
    
  
	//intersection	 
	 i=j=k=0;
	 while(i<n && j<m)
	 {
	 	if(arr[i]==brr[j])
	 	{
	 		inter[k]=arr[i];
	 		i++;
	 		k++;
	 		j++;
		 }
		 else if(arr[i]>brr[j])
		 j++;
		 else 
		 i++;
	 }
	 
	 cout<<"Intersection : ";
	 for(i=0;i<k;i++)
	 cout<<inter[i]<<" ";
	 
	return 0;
}	

