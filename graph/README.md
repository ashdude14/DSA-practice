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

Non recursive implementation O(E) 

procedure DFS_iterative(G, v) is
    let S be a stack
    S.push(v)
    while S is not empty do
        v = S.pop()
        if v is not labeled as discovered then
            label v as discovered
            for all edges from v to w in G.adjacentEdges(v) do 
                S.push(w)



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

