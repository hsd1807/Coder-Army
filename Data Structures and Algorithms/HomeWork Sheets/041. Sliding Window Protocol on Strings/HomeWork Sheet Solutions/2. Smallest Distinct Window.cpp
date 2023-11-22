class Solution{
    public:
    int findSubString(string str)
    {
        vector<int> count(256,0);
        int first=0,second=0,len=str.size(),diff=0;
        while(first<str.size()){
            if(count[str[first]]==0)
                diff++;
            count[str[first]]++;
            first++;
        }
        
        while(first--)
            count[str[first]]=0;
            
        while(second<str.size()){
            while(diff && second<str.size()){
                if(count[str[second]]==0)
                    diff--;
                count[str[second]]++;
                second++;
            }
            len=min(len,second-first);
          
            while(!diff){
                len=min(len,second-first);
                if(count[str[first]]==1)
                    diff++;
                count[str[first]]--;
                first++;
            }
        }
        return len;
    }
};
