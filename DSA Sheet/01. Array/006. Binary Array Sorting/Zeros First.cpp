/*
*  Approach -> Take a pointer index which points to the index till which given array has continuous zeroes. Then iterate over the array, and whenever a zero is found, swap it with value at pointer index and then, pointer index is incremented.
*  Time Complexity -> O(N)
*  Space Complexity -> O(1)
*/
class Solution{
  public:
    // A[]: input array // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int index = 0;
        for (int i = 0; i < N; i++){
            if(A[i] == 0)
                swap(A[i], A[index++]);
        }
    }
};
