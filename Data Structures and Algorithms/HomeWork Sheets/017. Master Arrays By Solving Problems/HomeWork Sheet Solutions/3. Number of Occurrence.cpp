class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int occurs=0;
	    for(int i=0;i<n;i++){
	    if(arr[i]==x) occurs++;
	    else if(arr[i]>x) break;
	    }
	    return occurs;
	}
};
