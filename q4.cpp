/*
Given an array of size N containing only 0s, 1s,
and 2s; sort the array in ascending order

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2

*/
#include <iostream>
using namespace std;

int main()
{
    int a[]={0,0,1,1,1,1,1,2,0,0,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int x0=0,x1=0,x2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            x0++;
            if(a[i]==1)
            x1++;
            if(a[i]==2)
            x2++;
        }
        for(int i=0;i<x0;i++)
        a[i]=0;
         for(int i=x0;i<x0+x1;i++)
        a[i]=1;
         for(int i=x0+x1;i<x0+x2+x1;i++)
        a[i]=2;
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    return 0;
}