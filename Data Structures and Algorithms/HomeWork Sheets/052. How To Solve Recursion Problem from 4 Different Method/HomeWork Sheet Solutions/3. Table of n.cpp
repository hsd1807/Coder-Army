#include<bits/stdc++.h>
using namespace std;
void table(int n,int i=1)
{
    if(i==10){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        return;
    }
    cout<<n<<" * "<<i<<" = "<<n*i<<endl ;
    table(n,i+1);
}
int main()
{
    int n;
    cin>>n;
    table(n);
    return 0;
}
