class Solution
{
    public:
    bool isClockwise(string str1, string str2){
        int n=str1.size();
        for(int i=0;i<n;i++){
            if(str1[i]!=str2[(i+2)%n]) return false;
        }
        return true;
    }
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size()) return false;
        return (isClockwise(str1,str2)||isClockwise(str2,str1));
    }
};
