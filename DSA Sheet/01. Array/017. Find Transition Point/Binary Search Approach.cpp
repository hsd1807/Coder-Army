/*
*  Approach -> Use Binary Search to find the index of first 1 in the given array.
*  Time Complexity -> O(log(N)
*  Space Complexity -> O(1)
*/
class Solution
{
public:    
    int transitionPoint(int arr[], int n) {
        int start = 0, end = n - 1, index = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == 1){
                index = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return index;
    }
};
