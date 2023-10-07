#include<bits/stdc++.h>
using namespace std;
int Cube (int n)
{
    return (n*n*n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int num;
    cin>>num;

    int ans=Cube(num);
    cout<<ans;
    return 0;
}
