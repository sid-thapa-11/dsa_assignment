# Program Documentation: Graph Traversal using BFS and DFS

**Program Name:** Undirected Graph using Adjacency Matrix with BFS and DFS  
**Language:** C  
**Author:** Siddharth Thapa 
**Course:** COMP202  

---

## (a) Explanation of Data Structures

The program represents an **undirected graph** using an **adjacency matrix**.

### Adjacency Matrix

```c
int adj[MAX][MAX];
A 2D array used to store connections between vertices.

If there is an edge between vertex i and j, then adj[i][j] = 1, otherwise 0.

Since the graph is undirected, the matrix is symmetric (adj[i][j] = adj[j][i]).

Visited Array
int visited[MAX];
Keeps track of visited vertices during traversal.

Prevents revisiting the same node.

Queue (for BFS)
int queue[MAX];
Used to store vertices during Breadth First Search.

Follows FIFO (First In First Out) principle.

(b) Description of Functions
1. DFS(int v)
Purpose: Performs Depth First Search traversal.

Working:

Prints current vertex.

Marks it as visited.

Recursively visits all adjacent unvisited vertices.

Uses recursion (implicit stack).

2. BFS(int start)
Purpose: Performs Breadth First Search traversal.

Working:

Initializes queue.

Marks starting vertex as visited.

Dequeues a vertex and prints it.

Enqueues all adjacent unvisited vertices.

Continues until queue becomes empty.

(c) Overview of main()
The main() function:

Takes number of vertices as input.

Reads adjacency matrix.

Takes starting vertex.

Initializes visited array.

Calls DFS() to perform depth-first traversal.

Calls BFS() to perform breadth-first traversal.

Displays traversal results.

(d) Sample Output
Example Graph
   0
  / \
 1   2
  \ /
   3
Input
Enter number of vertices: 4
Enter adjacency matrix:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Enter starting vertex: 0
Output
DFS Traversal: 0 1 3 2
BFS Traversal: 0 1 2 3
Conclusion
This program demonstrates:

Graph representation using adjacency matrix

Depth First Search (DFS) traversal

Breadth First Search (BFS) traversal

Use of recursion and queue

Time Complexity: O(V²) for adjacency matrix traversal
Space Complexity: O(V²) for storing the matrix