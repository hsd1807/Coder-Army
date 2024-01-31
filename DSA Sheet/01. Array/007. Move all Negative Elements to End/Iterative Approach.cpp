/*
*  Approach -> Create two vectors, pushback positive elements to one, negative to other. Then copy values of these vectors to original array.
*  Time Complexity -> O(N)
*  Space Complexity -> O(N)
*/
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int index = 0;
        vector<int> positive, negative;
        for (int i = 0; i < n; i++){
            if (arr[i] < 0)
                negative.push_back(arr[i]);
            else
                positive.push_back(arr[i]);
        }
        if (positive.size() == n || positive.size() == 0) return;
        for (int i = 0; i < positive.size(); i++){
            arr[index++] = positive[i];
        }
        for (int i = 0; i < negative.size(); i++){
            arr[index++] = negative[i];
        }
    }
};
