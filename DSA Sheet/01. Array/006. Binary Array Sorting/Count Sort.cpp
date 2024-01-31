/*
*  Approach -> Count zeros or ones in the given array. Then assign values 0 and 1 to given array based on the found count of the zeros or ones.
*  Time Complexity -> O(N)
*  Space Complexity -> O(1)
*/
class Solution{
  public:
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int zeros = 0;
        for (int i = 0; i < N; i++){
            zeros += A[i]==0;
        }
        for (int i = 0; i < zeros; i++){
            A[i] = 0;
        }
        for (int i = zeros; i < N; i++){
            A[i] = 1;
        }
    }
};
