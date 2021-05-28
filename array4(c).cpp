/*
For a given two dimensional integer array/list of size (N*M) , print it in a spiral form . 
That is you need to print in the order followed for every iteration.
 a. First row (left to right) 
 b. Last column (top to bottom) 
 c. Last row (right to left) 
 d. First column(bottom to top)
 Input:
 1 2 3 4 
 14 15 16 5 
 13 20 17 6 
 12 19 18 7 
 11 10 9 8
 output:
 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
*/

#include <iostream>
using namespace std;
 int main()
{
    int row,col;
    cin>>row>>col;
    int matrix[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cin>>matrix[i][j];
    }
    int dir=0,left=0,right=col-1,top=0, bottom=row-1;
    while(left<=right && top<=bottom)
    {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                    cout<<matrix[top][i]<<" ";
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                    cout<<matrix[i][right]<<" ";
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                    cout<<matrix[bottom][i]<<" ";
                bottom--;
            }
            else
            {
                for(int i=bottom;i>=top;i--)
                    cout<<matrix[i][left]<<" ";
                left++;
            }
            dir = (dir+1)%4;
    }
    return 0;
}
