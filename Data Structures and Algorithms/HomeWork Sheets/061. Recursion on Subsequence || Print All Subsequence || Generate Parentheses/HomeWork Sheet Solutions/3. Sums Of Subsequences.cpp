#include <bits/stdc++.h>

using namespace std;

void SumsOfSubsequence(int arr[], int index, int sum=0){
    if(index == -1){
        cout << sum << '\n';
        return;
    }
    SumsOfSubsequence(arr, index-1, sum);
    SumsOfSubsequence(arr, index-1, sum+arr[index]);
}

int main(){
    int n=3,arr[] = {1,2,3};
    SumsOfSubsequence(arr, n-1);
    return 0;
}
