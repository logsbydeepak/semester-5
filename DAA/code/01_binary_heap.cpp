#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
  vector<int> heap;

  int parent(int i) { return (i - 1) / 2; }
  int left(int i) { return 2 * i + 1; }
  int right(int i) { return 2 * i + 2; }

  void heapifyUp(int i) {
    while (i > 0 && heap[parent(i)] > heap[i]) {
      swap(heap[parent(i)], heap[i]);
      i = parent(i);
    }
  }

  void heapifyDown(int i) {
    int smallest = i, l = left(i), r = right(i);
    if (l < (int)heap.size() && heap[l] < heap[smallest])
      smallest = l;
    if (r < (int)heap.size() && heap[r] < heap[smallest])
      smallest = r;
    if (smallest != i) {
      swap(heap[i], heap[smallest]);
      heapifyDown(smallest);
    }
  }

public:
  void insert(int val) {
    heap.push_back(val);
    heapifyUp(heap.size() - 1);
  }

  void extractMin() {
    if (heap.empty()) {
      cout << "Heap is empty" << endl;
      return;
    }
    cout << "Extracted min: " << heap[0] << endl;
    heap[0] = heap.back();
    heap.pop_back();
    if (!heap.empty())
      heapifyDown(0);
  }

  void display() {
    cout << "Heap: ";
    for (int val : heap)
      cout << val << " ";
    cout << endl;
  }
};

int main() {
  MinHeap h;
  int n, val;

  cout << "Enter number of elements to insert: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> val;
    h.insert(val);
  }

  h.display();

  h.extractMin();
  h.display();

  h.insert(2);
  cout << "After inserting 2:" << endl;
  h.display();

  return 0;
}
