#include <iostream>
using namespace std;

// Greedy set cover: each time pick the set that covers the most
// elements that are still uncovered.

int main() {
  int U = 10; // elements are 1..10
  int s = 5;  // number of sets
  bool set[5][11] = {};
  int a0[] = {1, 2, 3, 8, 9, 10};
  int a1[] = {1, 2, 3, 4, 5};
  int a2[] = {4, 5, 7};
  int a3[] = {5, 6, 7};
  int a4[] = {6, 7, 8, 9, 10};
  for (int x : a0)
    set[0][x] = true;
  for (int x : a1)
    set[1][x] = true;
  for (int x : a2)
    set[2][x] = true;
  for (int x : a3)
    set[3][x] = true;
  for (int x : a4)
    set[4][x] = true;

  bool covered[11] = {false};
  int left = U;

  while (left > 0) {
    int best = -1, bestCount = 0;
    for (int i = 0; i < s; i++) {
      int c = 0;
      for (int x = 1; x <= U; x++)
        if (set[i][x] && !covered[x])
          c++;
      if (c > bestCount) {
        bestCount = c;
        best = i;
      }
    }
    if (best == -1)
      break;

    cout << "Choose set " << best << ": ";
    for (int x = 1; x <= U; x++)
      if (set[best][x]) {
        cout << x << " ";
        if (!covered[x]) {
          covered[x] = true;
          left--;
        }
      }
    cout << endl;
  }
}

/*
 * Output:
 *
 * Choose set 0: 1 2 3 8 9 10
 * Choose set 2: 4 5 7
 * Choose set 3: 5 6 7
 *
 */
