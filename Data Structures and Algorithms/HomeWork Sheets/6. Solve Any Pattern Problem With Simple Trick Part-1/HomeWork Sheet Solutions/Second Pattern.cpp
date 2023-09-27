#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    for(int row=1;row<=6;row++)
    {
        for(int col=1;col<=5;col++)
            cout<<col*col<<" ";
        cout<<endl;
    }

    return 0;
}
