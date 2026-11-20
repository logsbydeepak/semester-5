#include <iostream>
using namespace std;

struct Node {
  char ch;
  int freq;
  int left, right; // indexes of children, -1 for a leaf
  bool used;
};

Node tree[50];
int total = 0;

// print code of every leaf by walking down the tree
void printCodes(int i, string code) {
  if (tree[i].left == -1) {
    cout << tree[i].ch << " : " << code << endl;
    return;
  }
  printCodes(tree[i].left, code + "0");
  printCodes(tree[i].right, code + "1");
}

// find the unused node with the smallest frequency
int findMin() {
  int min = -1;
  for (int i = 0; i < total; i++)
    if (!tree[i].used && (min == -1 || tree[i].freq < tree[min].freq))
      min = i;
  return min;
}

int main() {
  char chars[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  int freq[] = {45, 13, 12, 16, 9, 5};
  int n = 6;

  for (int i = 0; i < n; i++) {
    tree[total] = {chars[i], freq[i], -1, -1, false};
    total++;
  }

  // join the two smallest nodes until only one is left
  for (int step = 0; step < n - 1; step++) {
    int a = findMin();
    tree[a].used = true;
    int b = findMin();
    tree[b].used = true;
    tree[total] = {'#', tree[a].freq + tree[b].freq, a, b, false};
    total++;
  }

  cout << "Huffman codes:" << endl;
  printCodes(total - 1, "");
}

/*
 * Output:
 *
 * Huffman codes:
 * a : 0
 * c : 100
 * b : 101
 * f : 1100
 * e : 1101
 * d : 111
 *
 */
