#include<bits/stdc++.h>
using namespace std;

int main()
{
    int L,B,H;
    cin>>L>>B>>H;
    /* Create 3D Array */
    int ***ptr=new int **[B];
    for(int i=0;i<L;i++){
        ptr[i]=new int *[B];
        for(int j=0;j<B;j++){
            ptr[i][j]=new int [H];
        }
    }
    /* Deallocate 3D Array */
    for(int i=0;i<L;i++){
        for(int j=0; j<B;j++){
            delete [] ptr[i][j];
        }
        delete [] ptr[i];
    }
    delete [] ptr;
    return 0;
}
