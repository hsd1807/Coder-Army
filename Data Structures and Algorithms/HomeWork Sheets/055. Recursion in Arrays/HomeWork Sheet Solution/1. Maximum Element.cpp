#include<bits/stdc++.h>
using namespace std;

int maxElement(int arr[],int index)
{
    if(index==0)
    {
        return arr[index];
    }
    return max(arr[index],maxElement(arr,index-1));
}

int main()
{
    int n=5,arr[]={3,4,8,1,2};
    cout<<maxElement(arr,n-1);
    return 0;
}
