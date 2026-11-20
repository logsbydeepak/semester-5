#include <iostream>
#include <string>
using namespace std;

// Naive string matching: try the pattern at every position. O(n*m)

int main() {
  string text = "AABAACAADAABAABA";
  string pat = "AABA";
  int n = text.length(), m = pat.length();

  for (int i = 0; i <= n - m; i++) {
    int j = 0;
    while (j < m && text[i + j] == pat[j])
      j++;
    if (j == m)
      cout << "Pattern found at index " << i << endl;
  }
}

/*
 * Output:
 *
 * Pattern found at index 0
 * Pattern found at index 9
 * Pattern found at index 12
 *
 */
