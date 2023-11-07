#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int age;
    cin>>age;

    if(age<12||age>65)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
