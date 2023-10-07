#include<bits/stdc++.h>
using namespace std;
int Reverse (int n)
{
    int rem,ans=0;
    while(n) {
        rem=n%10;
        n/=10;
        ans=ans*10+rem;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    cout<<Reverse(n);
    return 0;
}
