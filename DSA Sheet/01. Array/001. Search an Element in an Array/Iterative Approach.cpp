/*
*  Approach -> Check for each element in array if it equals to X.
*  Time Complexity -> O(N)
*  Space Complexity -> O(1)
*/
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        for (int i = 0; i < N; i++){
            if(arr[i] == X){
                return i;
            }
        }
        return -1;
    }

};
