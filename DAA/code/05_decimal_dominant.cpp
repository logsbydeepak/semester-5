#include <iostream>
using namespace std;

// Decimal dominant = element that occurs more than n/10 times.
// Keep at most 9 candidates with counters (one pass), then count
// the candidates again to confirm. Time is O(n).

int main() {
  int a[] = {1, 2, 3, 1, 4, 1, 5, 6, 1, 7, 2, 2, 8, 9, 1, 2, 3, 1, 2, 2};
  int n = 20;

  int cand[9], cnt[9];
  int k = 0; // number of candidates

  for (int i = 0; i < n; i++) {
    int pos = -1;
    for (int j = 0; j < k; j++)
      if (cand[j] == a[i])
        pos = j;

    if (pos != -1) {
      cnt[pos]++;
    } else if (k < 9) {
      cand[k] = a[i];
      cnt[k] = 1;
      k++;
    } else {
      // no room: reduce every counter, remove those that reach 0
      for (int j = 0; j < k; j++)
        cnt[j]--;
      int newK = 0;
      for (int j = 0; j < k; j++)
        if (cnt[j] > 0) {
          cand[newK] = cand[j];
          cnt[newK] = cnt[j];
          newK++;
        }
      k = newK;
    }
  }

  cout << "n = " << n << ", dominant needs more than " << n / 10
       << " occurrences" << endl;
  for (int j = 0; j < k; j++) {
    int total = 0;
    for (int i = 0; i < n; i++)
      if (a[i] == cand[j])
        total++;
    if (total > n / 10)
      cout << cand[j] << " is a decimal dominant (" << total << " times)"
           << endl;
  }
}

/*
 * Output:
 *
 * n = 20, dominant needs more than 2 occurrences
 * 1 is a decimal dominant (6 times)
 * 2 is a decimal dominant (6 times)
 *
 */
