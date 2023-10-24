#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    vector<int> v={7,1,7,7,2,3,7};
    cout<<count(v.begin(),v.end(),7);
    return 0;
}
