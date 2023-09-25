#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int age;
    cin>>age;

    if(age>18)
        cout<<"Adult";
    else
        cout<<"Teenager";

    return 0;
}
