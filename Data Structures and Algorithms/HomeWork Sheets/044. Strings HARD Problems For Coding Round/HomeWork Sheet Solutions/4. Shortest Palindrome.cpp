class Solution {
public:
    string shortestPalindrome(string s) {
        int size=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        s+='$';
        s+=rev;
        int prefix=0,suffix=1,n=s.size();
        vector<int> lps(n,0);
        while(suffix<n){
            if(s[prefix]==s[suffix]){
                lps[suffix]=prefix+1;
                prefix++,suffix++;
            }
            else{
                if(prefix==0) suffix++;
                else prefix=lps[prefix-1];
            }
        }
        for(int i=lps[n-1];i<size;i++)
            rev+=s[i];
        reverse(rev.begin(),rev.end());
        return rev;
    }
};
