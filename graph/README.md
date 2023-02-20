## Graph is a non-linear data structure consisting of vertices and edges.

Real Life example of graph usage- 
1. Google Map
2. Delivery Route for Vans
3. Social Networking
4. Circuit Design
5. Routing Algorithm
6. Resolving Dependencies (Topological Sorting)
7. Graph in Deep Learning
8. Web Document (DOM tree)
9. Image Processing & Segmentation
10. Point Bucket Tool/ Connected Components

## Graph Representation
```
 1. 2 - D matrix
......................
    0   1    2    3
......................
0   0   1     1   0
......................
1   0   0     1   0            Adv. => m[2][1] == T {O(1)}
......................         DisAdv.=> Find(Neigh O(N*N)); 
2   0   0     1   0
......................
3   0   0     0   1
......................

2. mathematical Set 
 
 V = {0,1,2,3};
 E= [(0,1)(0,2)(1,2)(2,1)(2,3)(3,2)];
Adv . => Find Neigh-- O(N);

3. Adj. List  (HashMap)
............
key->List
...........
0--> 1,2       Adv :-   
1-->2           1. Find Neighbbour --> O(Neigh)
2-->1,3         2. Memory Efficient Worst Case O(E)
3-->2
...........

```
## Graph Traversal 
1. Breadth First Search (BFS)
```
--> level order traversal

--> Uses Queue Data Structure
```
2. Depth First Search
Starts with source and explores all the nodes which are neighbours before backtraking.
```
There are two commonly used procedure to implement DFS 
1. Recursive Call 
2. Iterative (Using Stack)
check it out explanation here : -
explanation link :-
```
https://jamboard.google.com/d/1kqMuSUcji_LqKSCbF7p3F0OUt3rlsFdZ20-4s54Uk4Q/edit?usp=sharing


Non recursive implementation O(E) 
```
procedure DFS_iterative(G, v) is
    let S be a stack
    S.push(v)
    while S is not empty do
        v = S.pop()
        if v is not labeled as discovered then
            label v as discovered
            for all edges from v to w in G.adjacentEdges(v) do 
                S.push(w)

```
```
procedure DFS_iterative(G, v) is
    let S be a stack
    label v as discovered
    S.push(iterator of G.adjacentEdges(v))
    while S is not empty do
        if S.peek().hasNext() then
            w = S.peek().next()
            if w is not labeled as discovered then
                label w as discovered
                S.push(iterator of G.adjacentEdges(w))
        else
            S.pop()
```
<video src="https://github.com/ashdude14/DSA-practice/blob/master/graph/dfsexplanation.webm" width="100%"> </video>

## Travelling Salesman Problem
Idea is to travel all the cities from source and has to back to the source with minimizing distance.
Result will be a Hamiltonion Cycle.

```
Hamiltonion Cycle :- set of edges such that all node visited once and back to starting node.
Naive - O(n!)
eg- A--B--C--D--A
Implemantaion Using 2 D array.
two methods - 1) Using recurssion.
              2)Top- Down Dynamic Programming
              (Recurssion with  Memoization).

We use bit masking to store visited cities.
eg - cities        A B C D
     starting bit  0 0 0 0
     Visited A     1 0 0 0
     Visited B     1 1 0 0
     Visited C     1 1 1 0
     Visied  D     1 1 1 1
     here, mask = (1<<n)-1, where n=4.

Implementation Program  File name- (tsp.cpp)
 ``` 

## Cycle Detection In Graph
## Dijkstra Algorithm
## Toplogical Sort
## Total No of Spanning Tree in a graph
## Kruksal Algorithm
## Prim Algorithm
## Bellman Ford Algorithm
## Floyd Warshall Algorithm
## Kosaraju Algo