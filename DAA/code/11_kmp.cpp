#include <iostream>
#include <string>
using namespace std;

// KMP: lps[i] = length of the longest proper prefix of pat[0..i]
// that is also a suffix. It tells how far to go back on a mismatch.

int main() {
  string text = "ABABDABACDABABCABAB";
  string pat = "ABABCABAB";
  int n = text.length(), m = pat.length();
  int lps[20];

  // build the lps table
  lps[0] = 0;
  int len = 0, i = 1;
  while (i < m) {
    if (pat[i] == pat[len]) {
      len++;
      lps[i] = len;
      i++;
    } else if (len != 0) {
      len = lps[len - 1];
    } else {
      lps[i] = 0;
      i++;
    }
  }

  cout << "LPS table: ";
  for (int k = 0; k < m; k++)
    cout << lps[k] << " ";
  cout << endl;

  // search
  i = 0;
  int j = 0;
  while (i < n) {
    if (text[i] == pat[j]) {
      i++;
      j++;
    }
    if (j == m) {
      cout << "Pattern found at index " << i - j << endl;
      j = lps[j - 1];
    } else if (i < n && text[i] != pat[j]) {
      if (j != 0)
        j = lps[j - 1];
      else
        i++;
    }
  }
}

/*
 * Output:
 *
 * LPS table: 0 0 1 2 0 1 2 3 4
 * Pattern found at index 10
 *
 */
