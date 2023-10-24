#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    vector<int> v={13,8,7,9};
    int maximum = *max_element(v.begin(),v.end());
    cout << maximum;
    cout <<endl;
    int minimum = *min_element(v.begin(),v.end());
    cout << minimum;
    return 0;
}
