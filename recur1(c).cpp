/*
Given an integer N we need to find the geometric sum of the following series using
recursion.
1 + 1/3 + 1/9 + 1/27 + … + 1/(3^n)
*/
#include<iostream>
#include<math.h>
using namespace std;
double gm_sum(int n)
{
	if(n==0)
	return 1;
	double sum=1/(double)pow(3,n) + gm_sum(n-1);
	return sum;
	
}
int main()
{
	int n;
	cin>>n;    //sum upto we have to find sum of gp
	cout<<gm_sum(n);
	return 0;
}
