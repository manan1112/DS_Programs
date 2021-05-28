/*Fibonacci numbers
Example 1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
*/


#include <iostream>

using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	cin>>n;
    cout<<fib(n);
    return 0;
}
