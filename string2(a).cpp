/*
Find the n�th term in Look-and-say (Or Count and Say) Sequence. The lookand-say sequence is the sequence of below integers:
1, 11, 21, 1211, 111221, 312211, 13112221, 1113213211, �
*/
 #include<bits/stdc++.h>

 using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
	  int i=1;
    string a="1";
    while(i<n)
    {
        string temp="";
        int counter=1;
        for(int j=0;j<a.size()-1;j++)
        {
            if(a[j]==a[j+1])
                counter++;
            else
            {
                temp += to_string(counter)+ a[j];
                counter=1;
            }
        }
        temp+= to_string(counter) + a[a.size()-1];
        a=temp;
        i++;
    }
    cout<<a;
	return 0;
 }
