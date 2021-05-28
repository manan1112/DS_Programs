/*
Aadil has been provided with a sentence in the form of a string as a function
parameter. The task is to implement a function so as to print the sentence such that
each word in the sentence is reversed.
Sample Input :
Welcome to Career Café
Sample Output:
emocleW ot reeraC efaC
*/
#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int start=0;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            int ending=i-1;
            while(start<ending)
            {
                swap(str[start],str[ending]);
                start++;
                ending--;
            }
            start=i+1;
        }

    }
    cout<<str;
    return 0;
}
