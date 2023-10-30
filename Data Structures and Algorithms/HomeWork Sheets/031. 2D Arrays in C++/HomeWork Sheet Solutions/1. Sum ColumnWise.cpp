#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int row=3,col=4,arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int j=0;j<col;j++){
        int colsum=0;
        for(int i=0;i<row;i++){
            colsum+=arr[i][j];
        }
        cout<<"Sum of Column "<<j<<" = "<<colsum<<endl;
    }
    return 0;
}
