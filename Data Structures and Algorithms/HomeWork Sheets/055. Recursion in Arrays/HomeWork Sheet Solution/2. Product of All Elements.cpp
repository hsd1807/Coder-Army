#include<bits/stdc++.h>
using namespace std;

int product(int arr[],int index)
{
    if(index==0)
    {
        return arr[index];
    }
    return arr[index]*product(arr,index-1);
}

int main()
{
    int n=5,arr[]={3,4,8,1,2};
    cout<<product(arr,n-1);
    return 0;
}
