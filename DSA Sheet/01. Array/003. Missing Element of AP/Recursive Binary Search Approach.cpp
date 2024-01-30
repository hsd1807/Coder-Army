/*
*  Approach -> First, find the common difference of AP. Then apply Binary Search recursively till the position of the missing element is obtained by checking the correctness of position of middle element, with respect to the required AP.
*  Time Complexity -> O(log N)
*  Space Complexity -> O(log N)
*/
class Solution{   
public:
    int BinarySearch(int arr[], int start, int end, int d){
        if(start > end){
            return start; /* or return end+1; */
        }
        int mid = start + (end - start) / 2;
        if(arr[mid] == arr[0] + mid*d)
            return BinarySearch(arr, start+1, end, d);
        else
            return BinarySearch(arr, start, end-1, d);
    }
    int findMissing(int arr[], int n) {
        int diff = (arr[n-1] - arr[0]) / n;
        return arr[0] + BinarySearch(arr,0,n-1,diff) * diff;
    }
};
