#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int arr[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=n-1;i>0;i--){
        bool swapped=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(!swapped) break;
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
