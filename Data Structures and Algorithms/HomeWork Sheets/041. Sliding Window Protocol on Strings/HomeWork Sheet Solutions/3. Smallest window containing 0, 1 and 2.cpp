// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        vector<int> count(256,0);
        int first=0,second=0,found=0,len=-1;
        while(second<S.size()){
            while(found<3 && second<S.size()){
                if(count[S[second]]==0)
                    found++;
                count[S[second]]++;
                second++;
            }
            while(found==3){
                if(len==-1) len=INT_MAX;
                len=min(len,second-first);
                if(count[S[first]]==1)
                    found--;
                count[S[first]]--;
                first++;
            }
        }
        return len;
    }
};
