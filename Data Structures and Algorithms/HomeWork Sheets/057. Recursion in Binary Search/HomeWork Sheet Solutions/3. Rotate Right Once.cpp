#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int index){
    if(index==0) return;
    arr[index]=arr[index-1];
    rotate(arr,index-1);
}

int main(){
    int n=6,arr[] = {10,8,7,7,4,3};
    int last=arr[n-1];
    rotate(arr,n-1);
    arr[0]=last;
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
