#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int data;
  Node *left, *right;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node *insert(Node *root, int val) {
  if (!root)
    return new Node(val);
  if (val < root->data)
    root->left = insert(root->left, val);
  else
    root->right = insert(root->right, val);
  return root;
}

void inorder(Node *root, vector<int> &out) {
  if (!root)
    return;
  inorder(root->left, out);
  out.push_back(root->data);
  inorder(root->right, out);
}

vector<int> mergeSorted(vector<int> &a, vector<int> &b) {
  vector<int> merged;
  size_t i = 0, j = 0;
  while (i < a.size() && j < b.size()) {
    if (a[i] <= b[j])
      merged.push_back(a[i++]);
    else
      merged.push_back(b[j++]);
  }
  while (i < a.size())
    merged.push_back(a[i++]);
  while (j < b.size())
    merged.push_back(b[j++]);
  return merged;
}

Node *buildBalanced(vector<int> &sorted, int start, int end) {
  if (start > end)
    return nullptr;
  int mid = (start + end) / 2;
  Node *root = new Node(sorted[mid]);
  root->left = buildBalanced(sorted, start, mid - 1);
  root->right = buildBalanced(sorted, mid + 1, end);
  return root;
}

void printInorder(Node *root) {
  if (!root)
    return;
  printInorder(root->left);
  cout << root->data << " ";
  printInorder(root->right);
}

Node *readTree(int n) {
  Node *root = nullptr;
  int val;
  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> val;
    root = insert(root, val);
  }
  return root;
}

int main() {
  int n1, n2;

  cout << "Enter number of elements in first BST: ";
  cin >> n1;
  Node *tree1 = readTree(n1);

  cout << "Enter number of elements in second BST: ";
  cin >> n2;
  Node *tree2 = readTree(n2);

  vector<int> sorted1, sorted2;
  inorder(tree1, sorted1);
  inorder(tree2, sorted2);

  vector<int> merged = mergeSorted(sorted1, sorted2);

  Node *mergedTree = buildBalanced(merged, 0, merged.size() - 1);

  cout << "Inorder traversal of merged BST: ";
  printInorder(mergedTree);
  cout << endl;

  return 0;
}

/*
 * Output:
 *
 * Enter number of elements in first BST: 3
 * Enter element 1: 5
 * Enter element 2: 2
 * Enter element 3: 8
 * Enter number of elements in second BST: 3
 * Enter element 1: 6
 * Enter element 2: 1
 * Enter element 3: 9
 * Inorder traversal of merged BST: 1 2 5 6 8 9
 *
 */
