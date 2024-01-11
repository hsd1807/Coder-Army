// User function Template for C++
class Solution {
  public:
    string revStr(string &S,int start=0,int end=-1) {
        if(end==-1) end=S.size()-1;
        if(start>=end) return S;
        swap(S[start],S[end]);
        return revStr(S,start+1,end-1);
    }
};
