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

    int key,index=-1;
    cin>>key;

    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            index=mid;
            break;
        }
        else if(arr[mid]>key)
            start=mid+1;
        else
            end=mid-1;
    }
    cout<<index;
    return 0;
}
