/*
*  Approach -> Using Recursion, check at each recursive call if arr[index] equals to X till index becomes equal to N.
*  Time Complexity -> O(N)
*  Space Complexity -> O(N)
*/
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X, int index = 0)
    {
        if(index == N)
            return -1;
        if(arr[index] == X)
            return index;
        return search(arr, N, X, index+1);
    }

};
