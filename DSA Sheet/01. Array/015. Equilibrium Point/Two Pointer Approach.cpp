/*
*  Approach -> Take 2 pointers start and end and variables before and after to store sum from 0 to start in before and n-1 to end i after. Since array has only non-negative elements, the before and after will always increase. Keep adding values in the lesser sum and if start and end point to same index and before and after have equal valus, we have got our Equilibrium Point
*  Time Complexity -> O(N)
*  Space Complexity -> O(1)
*/
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if (n == 1) return 1;
        long long before = a[0], after = a[n-1];
        int start = 1, end = n - 2;
        while (start <= end) {
            if (before == after) {
                if (start == end){
                    return start + 1;
                }
                else{
                    before += a[start++];
                    after += a[end--];
                }
            }
            else if (before < after) {
                before += a[start++];
            }
            else {
                after += a[end--];
            }
        }
        return -1;
    }

};
