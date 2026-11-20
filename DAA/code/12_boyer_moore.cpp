#include <iostream>
#include <string>
using namespace std;

// Boyer-Moore (bad character rule): compare the pattern from the right.
// On a mismatch, shift so the bad text character lines up with its
// last occurrence in the pattern.

int main() {
  string text = "ABAAABCDABAAABCABAAAB";
  string pat = "ABAAAB";
  int n = text.length(), m = pat.length();

  // last[c] = last index of character c in the pattern (-1 if absent)
  int last[256];
  for (int i = 0; i < 256; i++)
    last[i] = -1;
  for (int i = 0; i < m; i++)
    last[(int)pat[i]] = i;

  int s = 0; // shift of the pattern over the text
  while (s <= n - m) {
    int j = m - 1;
    while (j >= 0 && pat[j] == text[s + j])
      j--;

    if (j < 0) {
      cout << "Pattern found at index " << s << endl;
      s++;
    } else {
      int shift = j - last[(int)text[s + j]];
      if (shift < 1)
        shift = 1;
      s += shift;
    }
  }
}

/*
 * Output:
 *
 * Pattern found at index 0
 * Pattern found at index 8
 * Pattern found at index 15
 *
 */
