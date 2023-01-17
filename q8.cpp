// find the largest contiguous subarray
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int ash(int *arr, int n)
{
    long long curr_sum=0;
    long long sum_till_now=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        sum_till_now=max(sum_till_now,curr_sum);
        if(curr_sum<0)
        curr_sum=0;
    }
    return sum_till_now;
}



int main()
{
    int arr[]={-1,2,2,3,3,-9,-10,1,-99};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ash(arr,n)<<endl;
    return 0;
}