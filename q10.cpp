// Minimum number of jumps to reach an end of array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ashdp(int *arr,int n)
{
    if(arr[0]==0)
    return -1;
    vector<int> jumps(n,INT16_MAX);
     jumps[0]=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i<=(j+arr[j]))
            jumps[i]=min(jumps[i],jumps[j]+1);

        }
    }
    return jumps[n-1];
}
int ashgreedy(int arr[],int n)
{
    if(n==1)
    return 0;
    if(arr[0]==0)
    return -1;
    int range=arr[0];
    int step=arr[0];
    int jump=1;
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        return jump;
        range=max(range,i+arr[i]);
        step--;
        if(step==0)
        {
            jump++;
            if(range<=i)
            return -1;
            step=range-i;
        }

    }

return -1;
}
int main()
{
    int arr[]={1,3,5,8,9,2,6,7,6,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<ashdp(arr,n)<<endl;
    cout<<ashgreedy(arr,n)<<endl;
    return 0;
}