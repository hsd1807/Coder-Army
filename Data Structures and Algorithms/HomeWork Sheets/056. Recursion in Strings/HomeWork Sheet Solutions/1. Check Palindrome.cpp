class Solution{
public:	
	
	
	int isPalindrome(string& S, int start = 0, int end = -1)
	{
	    if (end == -1) end = S.size() - 1;
	    
	    if(start >= end)
	        return 1;
	    
	    if (S[start] != S[end])
	        return 0;
	   
	    return isPalindrome(S, start+1, end-1);
	}

};
