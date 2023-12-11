#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num, int n=2)
{
    if(num<2) return 0;
    if(num==n) return 1; /* if(n*n>num) return 1; -> Optimizes the Time Complexity from O(num) to O(Sqrt(num)). */
    if(num%n==0) return 0;
    return isPrime(num,n+1);
}
int main()
{
    int n; cin>>n;
    if(isPrime(n))
      cout<<n<<" is a prime number.";
  else
      cout<<n<<" is not a prime number.";
    return 0;
}
