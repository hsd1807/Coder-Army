class Solution {
public:
    int minChar(string str){
        int size=str.size();
        string rev=str;
        reverse(rev.begin(),rev.end());
        str+='$';
        str+=rev;
        int prefix=0,suffix=1,n=str.size();
        vector<int> lps(n,0);
        while(suffix<n){
            if(str[prefix]==str[suffix]){
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
        return size-lps[n-1];
    }
};
