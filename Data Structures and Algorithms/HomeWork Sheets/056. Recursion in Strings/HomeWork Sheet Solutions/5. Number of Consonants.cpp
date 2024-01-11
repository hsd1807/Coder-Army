#include<bits/stdc++.h>
using namespace std;

int countConsonants(string s,int index)
{
    if(index==-1)
        return 0;
    if(s[index]!='a'&&s[index]!='e'&&s[index]!='i'&&s[index]!='o'&&s[index]!='u')
        return 1+countConsonants(s,index-1);
    else
        return countConsonants(s,index-1);
}
int main()
{
    string str="consonants";
    cout<<countConsonants(str,str.size()-1);
    return 0;
}
