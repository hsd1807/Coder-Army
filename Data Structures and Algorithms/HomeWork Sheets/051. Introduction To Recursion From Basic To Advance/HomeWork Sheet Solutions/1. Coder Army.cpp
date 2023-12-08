#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==1){ /*Base Case*/
        cout<<"Coder Army"<<endl;
        return;
    }
    cout<<"Coder Army"<<endl;
    print(n-1);
}

int main()
{
    print(10);
    return 0;
}
