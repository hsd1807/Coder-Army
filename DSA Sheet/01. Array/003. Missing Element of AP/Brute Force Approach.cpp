/*
*  Approach -> First, find the common difference of AP, then find the index where common difference of 2 terms don't match the common difference of AP.
*  Time Complexity -> O(N)
*  Space Complexity -> O(1)
*/
class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d = (arr[n-1] - arr[0]) / n;
        for (int i = 0; i < n-1; i++){
            if(arr[i+1] - arr[i] != d)
                return arr[i] + d;
        }
    }
};
