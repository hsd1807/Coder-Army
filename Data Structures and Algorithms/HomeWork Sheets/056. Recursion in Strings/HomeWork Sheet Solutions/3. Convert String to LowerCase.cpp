// User function Template for C++

class Solution {
  public:
    string toLower(string &S,int index=-2) {
        if(index==-1) return S;
        if(index==-2) index=S.size()-1;
        if(S[index]<'a') S[index]+='a'-'A';
        return toLower(S,index-1);
    }
};
