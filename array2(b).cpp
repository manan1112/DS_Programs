/*
You have been given two integer arrays/list (ARR1 and ARR2) of size M and N, respectively .
You need to print their intersection : An intersection for this problem can be defined as when both the arrays/lists
 contain a particular value or to put it in other words,
 when there is a common value that exist in both the arrays/lists.
 */
 
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int n , m ,i,j;
 	cin>>n;  //first array
 	int a[n];
 	for(i=0;i<n;i++)
 	cin>>a[i];
 	
 	cin>>m;  //second array
 	int b[m];
 	for(i=0;i<m;i++)
 	cin>>b[i];
 	 
    sort(a,a+n);
 	sort(b,b+m);
 	 
	 i=j=0;
	 while(i<n && j<m)
	 {
	 	if(a[i]==b[i])
	 	{
	 		cout<<a[i]<<" ";
	 		i++;
	 		j++;
		 }
		 else if(a[i]>b[j])
		 j++;
		 else 
		 i++;
	 }
	 
	 return 0;
 	
 }
