#include <iostream>
using namespace std;

// Graph problems: BFS, DFS and shortest path (Dijkstra)
// using an adjacency matrix. 0 means no edge.

const int N = 6;
int g[N][N] = {{0, 7, 9, 0, 0, 14},  {7, 0, 10, 15, 0, 0}, {9, 10, 0, 11, 0, 2},
               {0, 15, 11, 0, 6, 0}, {0, 0, 0, 6, 0, 9},   {14, 0, 2, 0, 9, 0}};
bool visited[N];

void bfs(int start) {
  int queue[N], front = 0, rear = 0;
  bool seen[N] = {false};
  queue[rear++] = start;
  seen[start] = true;
  while (front < rear) {
    int u = queue[front++];
    cout << u << " ";
    for (int v = 0; v < N; v++)
      if (g[u][v] && !seen[v]) {
        seen[v] = true;
        queue[rear++] = v;
      }
  }
  cout << endl;
}

void dfs(int u) {
  visited[u] = true;
  cout << u << " ";
  for (int v = 0; v < N; v++)
    if (g[u][v] && !visited[v])
      dfs(v);
}

void dijkstra(int start) {
  int dist[N];
  bool done[N] = {false};
  for (int i = 0; i < N; i++)
    dist[i] = 1000000;
  dist[start] = 0;

  for (int step = 0; step < N; step++) {
    int u = -1;
    for (int i = 0; i < N; i++)
      if (!done[i] && (u == -1 || dist[i] < dist[u]))
        u = i;
    done[u] = true;
    for (int v = 0; v < N; v++)
      if (g[u][v] && dist[u] + g[u][v] < dist[v])
        dist[v] = dist[u] + g[u][v];
  }

  for (int i = 0; i < N; i++)
    cout << start << " to " << i << " = " << dist[i] << endl;
}

int main() {
  cout << "BFS from 0: ";
  bfs(0);

  cout << "DFS from 0: ";
  dfs(0);
  cout << endl;

  cout << "Shortest distances from 0:" << endl;
  dijkstra(0);
}

/*
 * Output:
 *
 * BFS from 0: 0 1 2 5 3 4
 * DFS from 0: 0 1 2 3 4 5
 * Shortest distances from 0:
 * 0 to 0 = 0
 * 0 to 1 = 7
 * 0 to 2 = 9
 * 0 to 3 = 20
 * 0 to 4 = 20
 * 0 to 5 = 11
 *
 */
