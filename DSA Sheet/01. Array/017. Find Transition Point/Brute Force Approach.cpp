/*
*  Approach -> Iterate over the given array and when 1 is encountered return its index, if no 1 is found return -1.
*  Time Complexity -> O(N)
*  Space Complexity -> O(1)
*/
class Solution
{
public:    
    int transitionPoint(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1)
                return i;
        }
        return -1;
    }
};
