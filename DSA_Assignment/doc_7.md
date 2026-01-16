# Dijkstra's Algorithm in C
---

## Features
- Uses adjacency matrix representation
- Computes shortest distance from source to all vertices
- Works for directed and undirected graphs

---
## Algorithm

Dijkstra’s Algorithm works by:
1. Initializing all distances as infinity.
2. Selecting the unvisited node with minimum distance.
3. Updating distances of its adjacent nodes.
4. Repeating until all nodes are visited.

---

## Input Format

- Number of vertices `n`
- Adjacency matrix `n x n`
  - `0` means no edge
  - Positive value means edge weight
- Source vertex

---

