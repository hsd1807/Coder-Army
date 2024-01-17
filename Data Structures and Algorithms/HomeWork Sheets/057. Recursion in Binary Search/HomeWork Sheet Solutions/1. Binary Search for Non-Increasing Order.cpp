#include <bits/stdc++.h>
using namespace std;
bool BinarySearch(int arr[], int start, int end, int X){
    if(start>end)
        return 0;
    int mid=start+(end-start)/2;
    if(arr[mid]==X) return 1;
    else if(arr[mid]<X) BinarySearch(arr,start,mid-1,X);
    else BinarySearch(arr,mid+1,end,X);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[] = {10,8,7,7,4,3};
    cout<<BinarySearch(arr,0,5,10);
    return 0;
}
