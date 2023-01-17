/// rotate array by 1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ash(int arr[], int n)
{
    //a[]={ 9,8,7,6,4,2,1,3};
   
    if(n==1)
    return;
    if(n==2)
    {
        int temp=arr[0];
        arr[0]=arr[1];
        arr[1]=temp;
        return;
    }
     int temp=arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        arr[n-1-i]=arr[n-2-i];
    }
    arr[0]=temp;
}
int main()
{
    int arr[]={-1,2,2,3,3,-9,-10,1,-99};
    int n=sizeof(arr)/sizeof(arr[0]);
     
     ash(arr,n);

    for(auto e : arr)
    cout<<e<<" "; 
    cout<<endl;
    return 0;
}
