#include<bits/stdc++.h>
using namespace std;
int Swap3 (int &a, int &b, int &c)
{
    c=a+b+c;
    a=c-(a+b);
    b=c-(a+b);
    c=c-(a+b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    Swap3(a,b,c);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
