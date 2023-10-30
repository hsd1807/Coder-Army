#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n=3,sum=0,Sum=0;
    int matrix[n][n]={1,2,3,4,5,6,7,8,9};

    /*Method-1*/
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if((row==col) || (row+col==n-1)){
                sum+=matrix[row][col];
            }
        }
    }
    cout<<sum<<endl;

    /*Method-2*/
    for(int row=0;row<n;row++){
        Sum+=matrix[row][row];
        Sum+=matrix[row][n-row-1];
    }
    if(n&1)
    Sum-=matrix[n/2][n/2];
    cout<<Sum<<endl;

    return 0;
}
