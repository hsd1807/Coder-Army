/*
*  Approach -> Iterate over the given array and store postive and negative numbers into 2 separate arrays. Then fill the positive values at indexes divisible by 2 and odd values at indexes not divisible by 2 in the original array. Then fill remaining elements, if any.
*  Time Complexity -> O(N)
*  Space Complexity -> O(N)
*/
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> positive, negative;
	    for (int i = 0; i < n; i++){
	        if (arr[i] < 0)
	            negative.push_back(arr[i]);
	        else
	            positive.push_back(arr[i]);
	    }
	    int index = 0, pos = 0, neg = 0;
	    while (pos < positive.size() && neg < negative.size()){
	        if(index%2)
	            arr[index++] = negative[neg++];
	        else
	            arr[index++] = positive[pos++];
	    }
	    while (pos < positive.size()) arr[index++] = positive[pos++];
	    while (neg < negative.size()) arr[index++] = negative[neg++];
	}
};
