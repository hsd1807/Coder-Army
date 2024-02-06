/*
*  Approach -> First find the sum of array. Then iterate over the array calculating the beforeSum till the current index and decrementing arraySum by the current index. If arraySum equals to beforeSum, we have got the Equilibrium Point. Else return -1.
*  Time Complexity -> O(N)
*  Space Complexity -> O(1)
*/
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        long long arrSum = 0, beforeSum = 0;
        for (int i = 0; i < n; i++) {
            arrSum += arr[i];
        }
        for (int i = 0; i < n; i++) {
            arrSum -= arr[i];
            if (arrSum == beforeSum)
                return i+1;
            beforeSum += arr[i];
        }
        return -1;
    }

};
