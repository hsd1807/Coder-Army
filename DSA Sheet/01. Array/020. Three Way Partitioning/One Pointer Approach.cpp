class Solution{   
public:
    //Function to partition the array around the range such that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int index = 0;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] < a) {
                swap(array[index++], array[i]);
            }
        }
        for (int i = index; i < array.size();i++) {
            if (array[i] <= b) {
                swap(array[index++], array[i]);
            }
        }
    }
};
