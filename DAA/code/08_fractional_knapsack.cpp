#include <iostream>
using namespace std;

// Greedy: take items with the best value/weight ratio first.
// The last item can be taken partly.

int main() {
  int n = 3;
  int weight[] = {10, 20, 30};
  int value[] = {60, 100, 120};
  double capacity = 50;

  // sort by value/weight, highest first (bubble sort)
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)
      if ((double)value[j] / weight[j] < (double)value[j + 1] / weight[j + 1]) {
        swap(weight[j], weight[j + 1]);
        swap(value[j], value[j + 1]);
      }

  double total = 0;
  for (int i = 0; i < n && capacity > 0; i++) {
    if (weight[i] <= capacity) {
      capacity -= weight[i];
      total += value[i];
      cout << "Full item: weight " << weight[i] << ", value " << value[i]
           << endl;
    } else {
      double fraction = capacity / weight[i];
      total += value[i] * fraction;
      cout << "Fraction " << fraction << " of item: weight " << weight[i]
           << ", value " << value[i] << endl;
      capacity = 0;
    }
  }
  cout << "Maximum value = " << total << endl;
}

/*
 * Output:
 *
 * Full item: weight 10, value 60
 * Full item: weight 20, value 100
 * Fraction 0.666667 of item: weight 30, value 120
 * Maximum value = 240
 *
 */
