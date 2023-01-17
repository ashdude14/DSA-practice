// find the Union and intersection of two sorted array
/*
      a[]={1,1,3,6,8,0100,88}; i
      b[]={2,2,3,6,8}; j



*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ashU(int *a,int *b,int n, int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        cout<<a[i++]<<" ";
        else if(a[i]>b[j])
        cout<<b[j++]<<" ";
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }

    }
    while(i<n)
    cout<<a[i++]<<" ";
    while(j<m)
    cout<<b[j++]<<" ";

}
//
void ashI(int *a,int *b,int n, int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
         i++;
        else if(a[i]>b[j])
         j++;
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }

    }

}

int main()
{
    int a[]={1,1,2,3,6,8,100000,9999999};
    int b[]={2,2,3,6,8};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    ashU(a,b,n,m);
    cout<<endl;
    ashI(a,b,n,m);
    cout<<endl;
    return 0;
}