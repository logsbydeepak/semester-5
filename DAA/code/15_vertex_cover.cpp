#include <iostream>
using namespace std;

// Approximate vertex cover: take any edge that is not covered yet
// and put BOTH its end points in the cover. Result is at most
// twice the size of the best cover.

int main() {
  int n = 7, m = 7;
  int u[] = {0, 0, 1, 3, 4, 5, 2};
  int v[] = {1, 2, 3, 4, 5, 6, 5};
  bool inCover[7] = {false};

  for (int i = 0; i < m; i++)
    if (!inCover[u[i]] && !inCover[v[i]]) {
      inCover[u[i]] = true;
      inCover[v[i]] = true;
    }

  cout << "Vertices in the cover: ";
  for (int i = 0; i < n; i++)
    if (inCover[i])
      cout << i << " ";
  cout << endl;
}

/*
 * Output:
 *
 * Vertices in the cover: 0 1 3 4 5 6
 *
 */
