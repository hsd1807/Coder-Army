/*
*  Approach -> Create two vectors, pushback positive elements to one, negative to other with recursion. Then copy values of these vectors to original array, recursively.
*  Time Complexity -> O(N)
*  Space Complexity -> O(N)
*/
class Solution{
    public:
    void posneg(int arr[], int index, int n, vector<int>& pos, vector<int>& neg)
    {
        if(index == n)
            return;
        if(arr[index] >= 0)
            pos.push_back(arr[index]);
        else
            neg.push_back(arr[index]);
        posneg(arr, index+1, n, pos, neg);
    }
    void putinarray(int arr[], int index, vector<int>& pos, vector<int>& neg)
    {
        if(index == -1)
            return;
        if(neg.size()){
            arr[index] = neg.back();
            neg.pop_back();
        }
        else{
            arr[index] = pos.back();
            pos.pop_back();
        }
        putinarray(arr, index-1, pos, neg);
    }
    void segregateElements(int arr[],int n)
    {
        int index = 0;
        vector<int> positive, negative;
        posneg(arr, 0, n, positive, negative);
        if (positive.size() == n || positive.size() == 0) return;
        putinarray(arr, n-1, positive, negative);
    }
};
