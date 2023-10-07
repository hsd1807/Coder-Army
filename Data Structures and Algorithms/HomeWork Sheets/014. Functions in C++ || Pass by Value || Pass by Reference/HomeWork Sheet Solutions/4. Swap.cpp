#include<bits/stdc++.h>
using namespace std;
int Swap (int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
