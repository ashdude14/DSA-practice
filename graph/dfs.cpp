// Recursive approach, same as tree dfs but has a track of visited node 
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Graph{
private :
int V;
list<int> *l;
public :
Graph(int V)
{
    this->V=V;
    l=new list<int> [V];
 
}
   void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

 void dfs_helper(int src,map<int,bool> &m)
 {
    //recursive function that will travese that graph
  
    cout<<src <<" ";
    m[src]=true;
    //m.insert(make_pair(src,true));
    for(int p: l[src])
    {  
        //cout<<"p & m[p]"<<p<<" "<<m[p]<<"ho gya "<<endl;
        if(m[p]==0){

            dfs_helper(p,m);
        }
    }
 }

    void dfs(int src)
    {
        map<int,bool> m;
        //make unvisited 
        for(int i=0;i<V;i++)
        m[i]=false;

       
        m[src]=true;
        dfs_helper(src,m);

    }
     void showGraph()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<"-->";
            for(auto it : l[i])
            {
                cout<<it<<",";
            }
            cout<<endl;
        }
    }

};

int main()
{
    Graph g(6),g1(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(3,0);
    //0 -> 1, 0 -> 2, 1 -> 2, 2 -> 0, 2 -> 3, 3 -> 3 
    //g.showGraph();
    g.dfs(0);
    g1.addEdge(0,1);
    g1.addEdge(0,2);
    g1.addEdge(1,2);
    g1.addEdge(2,0);
    g1.addEdge(2,3);
    g1.addEdge(3,3);
    //g1.showGraph();
    //g1.dfs(0);
    
    return 0;
}