#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> &v)
{
    v.push_back(7);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    vector<int> vect;
    vect.push_back(13);
    fun(vect);
    for(int i: vect)
        cout<<i<<" ";
    return 0;
}
