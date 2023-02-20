#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n=4;
// graph structure using 2d array
int graph[4][4]={
{0,20,42,25},
{20,0,30,34},
{42,30,0,10},
{25,34,10,0}
};
// All cities visited
int All =(1<<n)-1;

int tsp(int mask,int pos)
{
    if(mask==All)
    {
        return graph[pos][0];
    }

    int ans=99999;
    // traveling unvisited cities
    for(int city=0;city<n;city++){
    if((mask&(1<<city))==0){

        int newAns=graph[pos][city]+tsp(mask|(1<<city),city);
        // mask|(1<<city)
        //              /A\ 001
        //             /   \
//    (001)|(010)=011 B     C  (001) | (100) = 101
        //
        ans=min(ans,newAns);
    }

    }

    return ans;

}


int main ()
{


    cout<<tsp(1,0)<<endl;
    cout<<All;
    //              /A\ 001 = 1 (visited A at starting)
        //         /   \
//                B     C 

// 0=> Starting from 0 cities.

    return 0;
}