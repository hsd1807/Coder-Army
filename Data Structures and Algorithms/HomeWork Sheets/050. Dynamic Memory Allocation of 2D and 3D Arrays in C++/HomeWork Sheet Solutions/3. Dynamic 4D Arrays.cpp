#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X,L,B,H;
    cin>>X>>L>>B>>H;
    /* Create 4D Array */
    int ****ptr=new int***[X];
    for(int i=0;i<X;i++){
        ptr[i]=new int**[L];
        for(int j=0;j<L;j++){
            ptr[i][j]=new int*[B];
            for(int k=0;k<B;k++)
                ptr[i][j][k]=new int[H];
        }
    }
    /* Deallocate 4D Array */
    for(int i=0;i<X;i++){
        for(int j=0;j<L;j++){
            for(int k=0;k<B;k++){
                delete [] ptr[i][j][k];
            }
            delete [] ptr[i][j];
        }
        delete [] ptr[i];
    }
    delete ptr;
    return 0;
}
