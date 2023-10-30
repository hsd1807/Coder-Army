#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int row=3,col=4;
    int arr[3][4]={12,13,6,7,9,10,11,1,3,2,4,5};
    int maxi = INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    cout<<maxi;
    return 0;
}
