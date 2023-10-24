#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    vector<int> v={1,2,2,2,3,3};
    cout<<lower_bound(v.begin(),v.end(),2)-v.begin();
    cout<<endl;
    cout<<upper_bound(v.begin(),v.end(),2)-v.begin();
    return 0;
}
