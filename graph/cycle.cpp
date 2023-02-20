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
    bool cycle_helper(int node, bool *vis,int parent)
    {
        vis[node]=true;
        for(auto nbr : l[node])
        {
            // if not visited
        if(!vis[nbr])
        {
            bool hasCyc=cycle_helper(nbr,vis,node);
            if(hasCyc)
            return true;
        }
        //nbr vis but not a parent
        else if(nbr!=parent)
        {
            return true;
        }

        }
        return false;
        
    }
    // using dfs
    bool cycle()
    {
        bool *vis=new bool[V];
        for(int i=0;i<V;i++){
        vis[i]=false;}
         return cycle_helper(0,vis,-1);
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(3,4);
    g.addEdge(2,3);
   g.addEdge(1,2);
   g.addEdge(4,0);
    if(g.cycle())
    cout<<"contains cycle!";
    else
    cout<<"does notcontain cycle!";
    
    return 0;
}