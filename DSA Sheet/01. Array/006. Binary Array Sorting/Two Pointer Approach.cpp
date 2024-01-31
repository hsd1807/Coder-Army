/*
*  Approach -> Take a pointer zeros pointing to 0th index, and another pointer ones which points to the last index. If zeros point to 1 and ones point to 0 swap values at both indexes and keep incrementing zeros or decrementing ones till zeros < ones.
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
      int zeros = 0, ones = N-1;
      while(zeros < ones){
            if(A[zeros] == 0)
                zeros++;
            else if(A[ones] == 1)
                ones--;
            else
                swap(A[zeros++],A[ones--]);
      }
    }
};
