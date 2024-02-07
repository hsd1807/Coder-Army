class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> ans;
        int first = 0, second = 0;
        while (first < n && second < m) {
            if (arr1[first] <= arr2[second]){
                ans.push_back(arr1[first++]);
            }
            else {
                ans.push_back(arr2[second++]);
            }
            while (first < n && ans.back() == arr1[first]) first++;
            while (second < m && ans.back() == arr2[second]) second++;
        }
        while (first < n) {
            ans.push_back(arr1[first++]);
            while (first < n && ans.back() == arr1[first]) first++;
        }
        while (second < m) {
            ans.push_back(arr2[second++]);
            while (second < m && ans.back() == arr2[second]) second++;
        }
        return ans;
    }
};
