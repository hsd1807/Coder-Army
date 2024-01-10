#include<bits/stdc++.h>
using namespace std;
int NoOfEven(int arr[],int index)
{
    if(index==-1)
        return 0;
    if(arr[index]%2)
        return NoOfEven(arr,index-1);
    else
        return 1+NoOfEven(arr,index-1);
}

int main()
{
    int n=5,arr[]={3,4,8,1,2};
    cout<<NoOfEven(arr,n-1);
    return 0;
}
