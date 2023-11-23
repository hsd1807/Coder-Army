class Solution
{
    public:
        void lpsfind(vector<int>&lps,string s){
            int prefix=0,suffix=1;
            while(suffix<s.size()){
                if(s[prefix]==s[suffix]){
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
        }
        
        vector <int> search(string pattern, string txt)
        {
            vector<int> ans;
            vector<int> lps(pattern.size(),0);
            lpsfind(lps,pattern);
            int first=0,second=0;
            while(first<txt.size()){
                if(txt[first]==pattern[second])
                    first++,second++;
                else{
                    if(second==0)
                        first++;
                    else
                        second=lps[second-1];
                }
                if(second==pattern.size()){
                    ans.push_back(first-second+1);
                    second=lps[second-1];
                }
            }
            return ans;
        }
};
