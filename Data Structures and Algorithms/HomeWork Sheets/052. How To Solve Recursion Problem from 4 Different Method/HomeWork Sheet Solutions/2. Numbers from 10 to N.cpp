#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==10){
        cout<<10<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
