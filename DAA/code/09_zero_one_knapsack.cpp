#include <iostream>
using namespace std;

// Dynamic programming: dp[i][w] = best value using first i items
// with capacity w.

int main() {
  int n = 3, W = 50;
  int weight[] = {10, 20, 30};
  int value[] = {60, 100, 120};
  int dp[4][51];

  for (int i = 0; i <= n; i++)
    for (int w = 0; w <= W; w++) {
      if (i == 0 || w == 0)
        dp[i][w] = 0;
      else if (weight[i - 1] <= w) {
        int take = value[i - 1] + dp[i - 1][w - weight[i - 1]];
        int skip = dp[i - 1][w];
        dp[i][w] = take > skip ? take : skip;
      } else
        dp[i][w] = dp[i - 1][w];
    }

  cout << "Maximum value = " << dp[n][W] << endl;

  // find which items were taken
  int w = W;
  cout << "Items taken:" << endl;
  for (int i = n; i > 0; i--)
    if (dp[i][w] != dp[i - 1][w]) {
      cout << "Item " << i << " (weight " << weight[i - 1] << ", value "
           << value[i - 1] << ")" << endl;
      w -= weight[i - 1];
    }
}

/*
 * Output:
 *
 * Maximum value = 220
 * Items taken:
 * Item 3 (weight 30, value 120)
 * Item 2 (weight 20, value 100)
 *
 */
