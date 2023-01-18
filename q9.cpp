#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ash(int *arr,int n,int k){
 sort(arr,arr+n);
        if(n==1) return 0;
        int maxi = arr[n-1];
        int mini = arr[0];
        int maxi_diff = maxi - mini;
        
        int tmax = 0, tmin = 0;
        
        for(int i = 1; i<n; i++){
            if(arr[i]-k<0) continue;
            
            tmin = min(arr[0]+k,arr[i]-k);
            tmax = max(arr[n-1]-k,arr[i-1]+k);
            maxi_diff = min(maxi_diff, tmax-tmin);
        }
        
        return maxi_diff;

}
int main()
{
    int arr[]={2,3,3,5,9,23,76,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    cout<<ash(arr,n,k)<<endl;
    return 0;
}