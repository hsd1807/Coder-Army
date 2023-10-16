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

    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]>arr[j-1])
                swap(arr[j],arr[j-1]);
            else
                break;
        }
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
