class Solution {
public:
    void lpsfind(string s, vector<int>& lps){
        int prefix=0,suffix=1;
        while(suffix<s.size()){
            if(s[prefix]==s[suffix]){
                lps[suffix]=prefix+1;
                prefix++,suffix++;
            }
            else{
                if(prefix==0) suffix++;
                else prefix=lps[prefix-1];
            }    
        }
    }

    bool KMP_MATCH(string haystack, string needle){
        vector<int> lps(needle.size(),0);
        lpsfind(needle,lps);
        int first=0,second=0;
        while(first<haystack.size()&&second<needle.size()){
            if(haystack[first]==needle[second])
                first++,second++;
            else{
                if(second==0) first++;
                else second=lps[second-1];
            }
        }

        if(second==needle.size()) return 1;
        return 0;
    }

    int repeatedStringMatch(string a, string b) {
        if(a==b) return 1;
        string temp=a;
        int repeat=1;
        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }

        if(KMP_MATCH(temp,b))
            return repeat;
        if(KMP_MATCH(temp+a,b))
            return repeat+1;
        return -1;
    }
};
