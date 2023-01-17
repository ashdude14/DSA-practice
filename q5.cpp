/*
Move all negative numbers to beginning and positive to end with constant extra space
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ash(int *a,int n)
{
    sort(a,a+n);
}
void ash1(int *a, int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(i!=j)
        {
            swap(a[i],a[j]);
            
        }
        j++;
        }
        
    }
}

void ash2(int *a, int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        if(a[low]<0)
        low++;
        else if(a[high]>=0)
        high--;
        else{
            swap(a[low],a[high]);
        }

    }
}
// two pointers approach
void ash3(int *a, int n)
{
    int p1=0,p2=n-1;
    while(p1<p2)
    {
        if(a[p1]<0&&a[p2]<0)
        p1++;
        else if(a[p1]>0&&a[p2]<0)
        {
            int temp=a[p1];
            a[p1]=a[p2];
            a[p2]=temp;
            p1++;
            p2--;

        }
        else if(a[p1]>0&&a[p2]>0)
        {
            p2--;
        }
        else
        {
            p1++;
            p2--;
        }
    }
}


/// @return 
int main()
{
    int arr[]={-1,2,2,3,3,-9,-10,1,-99};
    int n=sizeof(arr)/sizeof(arr[0]);
     
     ash3(arr,n);

    for(auto e : arr)
    cout<<e<<" "; 
    cout<<endl;
    return 0;
}

