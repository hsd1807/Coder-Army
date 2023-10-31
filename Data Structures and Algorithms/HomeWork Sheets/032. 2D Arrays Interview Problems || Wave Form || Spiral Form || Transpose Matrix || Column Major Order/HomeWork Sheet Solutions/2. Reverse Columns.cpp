#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n=3,m=3;
    int matrix[n][m]={1,2,3,4,5,6,7,8,9};

    for(int col=0;col<m;col++){
        int start=0,end=m-1;
        while(start<end){
            swap(matrix[start][col],matrix[end][col]);
            start++,end--;
        }
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
