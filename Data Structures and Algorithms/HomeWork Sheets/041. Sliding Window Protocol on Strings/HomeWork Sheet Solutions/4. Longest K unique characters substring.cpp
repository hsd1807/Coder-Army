class Solution{
  public:
    int longestKSubstr(string s, int k) {
        vector<int>count(256,0);
        int len=-1,unique=0,first=0,second=0;
        while(second<s.size()){
            while(unique<=k && second<s.size()){
                if(count[s[second]]==0)
                    unique++;
                count[s[second]]++;
                second++;
                if(unique==k)
                    len=max(len,second-first);
            }
          
            while(unique>k){
                if(count[s[first]]==1)
                    unique--;
                count[s[first]]--;
                first++;
            }
        }
        return len;
    }
};
