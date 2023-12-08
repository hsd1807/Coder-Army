#include<bits/stdc++.h>
using namespace std;
void printodd(int n)
{
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printodd(n-2);
}

int main()
{
    int n; cin>>n; if(n%2==0) n--; /*If n is EVEN, make it ODD.*/
    printodd(n);
    return 0;
}
