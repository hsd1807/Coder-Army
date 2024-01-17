#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
    if(start>=end) return;
    swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=6,arr[] = {10,8,7,7,4,3};
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}
