//Kth smallest element
/*Expected Time Complexity: O(n)
Expected Auxiliary Space: O(log(n))

Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N */
/*
priority queue

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int arr[]={7 ,10 ,4 ,3 ,20, 15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    priority_queue <int, vector<int>, greater <int>> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    while(pq.size()!=n-k+1)
    {
        pq.pop();
    }
   cout<<pq.top()<<endl;
    return 0;
}