//Adj List Representation of a graph
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class Graph{
    private :
    int V;
    //pointer to an array to list
    list<int> *l=NULL;

    public :
    Graph(int V)
    {
     this->V=V;
     l=new list<int> [V];
    }
    void addEdge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void showGraph()
    {
        for(int i=0;i<V;i++)
        {
            cout<<V<<"-->";
            for(auto it : l[i])
            {
                cout<<it<<",";
            }
            cout<<endl;
        }
    }
    void bfs(int src)
    {
         map<int,bool> vis;
         queue<int> q;
         q.push(src);
         vis[src]=true;
         while(!q.empty())
         {
            int node = q.front();
             q.pop();
            cout<<node<<" ";
            for(int nbr: l[node])
            {
                if(!vis[nbr]){
                vis[nbr]=true;
                q.push(nbr);
                }

            }
         }
    }

};
int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);
    //g.showGraph();
    g.bfs(0);
    return 0;
}