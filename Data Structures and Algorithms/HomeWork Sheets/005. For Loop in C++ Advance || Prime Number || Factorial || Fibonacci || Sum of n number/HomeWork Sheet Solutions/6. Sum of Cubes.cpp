#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,sum=0;
    cin>>n;

    for(int i=1;i<=n;i++)
        sum+=i*i*i;

    cout<<sum;
    return 0;
}
