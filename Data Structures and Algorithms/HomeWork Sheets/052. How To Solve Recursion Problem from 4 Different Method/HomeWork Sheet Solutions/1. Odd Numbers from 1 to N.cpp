#include<bits/stdc++.h>
using namespace std;
void printOdd(int n)
{
    if(n==1){
        cout<<1<<endl;
        return;
    }
    printOdd(n-2);
    cout<<n<<endl;
}
int main()
{
    int n; cin>>n;
    if(n%2==0) n--;
    printOdd(n);
    return 0;
}
