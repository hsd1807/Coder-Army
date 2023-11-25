class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lowercase(26,0);
        vector<int> uppercase(26,0);

        for(int i=0;i<s.size();i++){
            if(s[i]>='a')
            lowercase[s[i]-'a']++;
            else
            uppercase[s[i]-'A']++;
        }

        int count=0;
        bool odd=0;
        for(int i=0;i<26;i++){
            if(lowercase[i]%2==0)
            count+=lowercase[i];
            else{
                count+=lowercase[i]-1;
                odd=1;
            }
            
            if(uppercase[i]%2==0)
            count+=uppercase[i];
            else{
                count+=uppercase[i]-1;
                odd=1;
            }
        }
        return count+odd;
    }
};
