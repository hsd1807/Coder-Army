#include<bits/stdc++.h>
using namespace std;
int sumCubes(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n*n*n+sumCubes(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumCubes(n);
    return 0;
}
