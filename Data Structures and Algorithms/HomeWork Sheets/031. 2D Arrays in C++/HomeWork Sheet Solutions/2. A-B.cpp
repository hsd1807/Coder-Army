#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int row=3,col=4;
    int A[3][4]={13,13,13,13,13,13,13,13,13,13,13,13};
    int B[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int ans[3][4];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            ans[i][j]=A[i][j]-B[i][j];
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}
