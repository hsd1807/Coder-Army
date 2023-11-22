class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size(),h=haystack.size();
        needle+=haystack;
        vector<int> lps(n+h,0);
        int prefix=0,suffix=1;
        while(suffix<n){
            if(needle[prefix]==needle[suffix]){
                lps[suffix]=prefix+1;
                prefix++,suffix++;
            }
            else{
                if(prefix==0)
                suffix++;
                else
                prefix=lps[prefix-1];
            }
        }
        prefix=0,suffix=n;
        while(suffix<n+h){
            if(needle[prefix]==needle[suffix]){
                lps[suffix]=prefix+1;
                if(lps[suffix]==n) return suffix-n-n+1;
                prefix++,suffix++;
            }
            else{
                if(prefix==0)
                suffix++;
                else
                prefix=lps[prefix-1];
            }
        }
        return -1;
    }
};
