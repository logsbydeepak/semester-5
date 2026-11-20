#include <iostream>
using namespace std;

// Kruskal's algorithm: a minimum spanning tree also has the
// smallest possible value of its largest edge.

int parent[10];

int find(int x) {
  while (parent[x] != x)
    x = parent[x];
  return x;
}

int main() {
  int n = 5, m = 7;
  int u[] = {0, 0, 1, 1, 2, 2, 3};
  int v[] = {1, 2, 2, 3, 3, 4, 4};
  int w[] = {4, 8, 2, 6, 3, 9, 5};

  // sort the edges by weight (bubble sort)
  for (int i = 0; i < m - 1; i++)
    for (int j = 0; j < m - i - 1; j++)
      if (w[j] > w[j + 1]) {
        swap(w[j], w[j + 1]);
        swap(u[j], u[j + 1]);
        swap(v[j], v[j + 1]);
      }

  for (int i = 0; i < n; i++)
    parent[i] = i;

  int largest = 0;
  cout << "Edges in the spanning tree:" << endl;
  for (int i = 0; i < m; i++) {
    int a = find(u[i]), b = find(v[i]);
    if (a != b) { // edge does not make a cycle
      parent[a] = b;
      cout << u[i] << " - " << v[i] << " (weight " << w[i] << ")" << endl;
      largest = w[i];
    }
  }
  cout << "Largest edge = " << largest << endl;
}

/*
 * Output:
 *
 * Edges in the spanning tree:
 * 1 - 2 (weight 2)
 * 2 - 3 (weight 3)
 * 0 - 1 (weight 4)
 * 3 - 4 (weight 5)
 * Largest edge = 5
 *
 */
