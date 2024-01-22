#include <bits/stdc++.h>

using namespace std;
void merge(int arr[], int start, int mid, int end){
    vector<int> temp(end-start+1);
    int left = start, right = mid + 1, index = 0;
    while (left<=mid && right<=end){
        if(arr[left] > arr[right])
            temp[index] = arr[left++];
        else
            temp[index] = arr[right++];
        index++;
    }
    while (left<=mid) temp[index++] = arr[left++];
    while (right<=end) temp[index++] = arr[right++];
    index = 0;
    while (start<=end) arr[start++] = temp[index++];
}

void mergeSort(int arr[], int start, int end){
    if (start==end)
        return;
    int mid = start + (end - start)/2; 
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main(){
    int n=7,arr[] = {1,2,3,4,5,6,7};
    mergeSort(arr,0,n-1);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
