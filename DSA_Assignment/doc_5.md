# doc_5 — Undirected Graph Using Adjacency Matrix (BFS + DFS in C)

## (a) Data structure definition
This program represents a graph using an **adjacency matrix**:

- `int adj[MAX][MAX]`
- `adj[i][j] = 1` means an edge exists between vertex `i` and `j`
- `adj[i][j] = 0` means no edge

For an **undirected graph**, the matrix is symmetric:
- If there is an edge `i — j`, then `adj[i][j] = adj[j][i] = 1`

**Visited array**
- `int visited[MAX]` (or similar) marks whether a vertex is already visited.

**Queue (for BFS)**
- Implemented using an array + `front`/`rear` indexes.

## (b) Functions implemented
### `void addEdge(int u, int v)`
- **Purpose:** Add an undirected edge by setting both `adj[u][v]` and `adj[v][u]`.

### `void bfs(int start)`
- **Purpose:** Traverse the graph level-by-level.
- **Uses:** Queue + visited array.

### `void dfs(int start)`
- **Purpose:** Traverse depth-wise.
- **Uses:** Recursion (or stack) + visited array.

### `void displayMatrix(int n)`
- **Purpose:** Print the adjacency matrix for verification.

## (c) `main()` organization overview
Typical `main()` flow:
1. Read number of vertices and edges.
2. Build the adjacency matrix (initialize with zeros, then add edges).
3. Print adjacency matrix (optional).
4. Read a starting vertex.
5. Run BFS from that start vertex.
6. Reset visited and run DFS from that start vertex.

## (d) Sample output (complete run)
```text
Enter number of vertices: 5
Enter number of edges: 4
Enter edges (u v):
0 1
0 2
1 3
2 4
Start vertex: 0

BFS Traversal: 0 1 2 3 4
DFS Traversal: 0 1 3 2 4
```
