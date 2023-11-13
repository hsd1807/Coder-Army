class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<int> upper(26,0),lower(26,0);
        for(int i=0;i<n;i++){
            if(str[i]>='a')
            lower[str[i]-'a']++;
            else
            upper[str[i]-'A']++;
        }
        for(int i=0;i<n;i++){
            if(str[i]>='a'){
                for(int j=0;j<26;j++){
                    if(lower[j]){
                        str[i]='a'+j;
                        lower[j]--;
                        break;
                    }
                }
            }
            else{
                for(int j=0;j<26;j++){
                    if(upper[j]){
                        str[i]='A'+j;
                        upper[j]--;
                        break;
                    }
                }
            }
        }
        return str;
    }
};
