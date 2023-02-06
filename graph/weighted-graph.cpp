//weighted graph representation
//unordered map
#include<iostream>
#include <bits/stdc++.h>

using namespace std;


class Graph{
    unordered_map<string,list<pair<string,int> >> l;

    public :
   
    void addEdge(string x,string y,int wt,bool bidir)
    {
        l[x].push_back(make_pair(y,wt));
        if(bidir)
         l[y].push_back(make_pair(x,wt));
       
    }
    void showGraph()
    {
        for(auto p: l)
        {
            string city=p.first;
            cout<<city<<"-->";
            list<pair<string,int>> nbrs=p.second;
            for(auto it : nbrs)
            {
                cout<<it.first<<" "<<it.second<<" ";
            }
            cout<<endl;
        }
    }

};
int main()
{
    Graph g;
    g.addEdge("A","B",20,true);
    g.addEdge("A","C",45,false);
    g.addEdge("B","C",50,false);
    g.addEdge("A","B",66,false);
    g.showGraph();
    return 0;
}