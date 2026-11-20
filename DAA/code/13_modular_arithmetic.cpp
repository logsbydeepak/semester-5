#include <iostream>
using namespace std;

// (a ^ b) mod m using repeated squaring
long long power(long long a, long long b, long long m) {
  long long result = 1;
  a = a % m;
  while (b > 0) {
    if (b % 2 == 1)
      result = (result * a) % m;
    a = (a * a) % m;
    b = b / 2;
  }
  return result;
}

// modular inverse by trial: x such that (a * x) % m == 1
int inverse(int a, int m) {
  for (int x = 1; x < m; x++)
    if ((a * x) % m == 1)
      return x;
  return -1;
}

int main() {
  int a = 17, b = 25, m = 7;
  cout << "a = " << a << ", b = " << b << ", m = " << m << endl;
  cout << "(a + b) mod m = " << (a + b) % m << endl;
  cout << "(a - b) mod m = " << ((a - b) % m + m) % m << endl;
  cout << "(a * b) mod m = " << (a * b) % m << endl;
  cout << "2^10 mod 1000 = " << power(2, 10, 1000) << endl;
  cout << "3^200 mod 13 = " << power(3, 200, 13) << endl;
  cout << "Inverse of 3 mod 11 = " << inverse(3, 11) << endl;
  cout << "Inverse of 4 mod 8 = " << inverse(4, 8) << " (does not exist)"
       << endl;
}

/*
 * Output:
 *
 * a = 17, b = 25, m = 7
 * (a + b) mod m = 0
 * (a - b) mod m = 6
 * (a * b) mod m = 5
 * 2^10 mod 1000 = 24
 * 3^200 mod 13 = 9
 * Inverse of 3 mod 11 = 4
 * Inverse of 4 mod 8 = -1 (does not exist)
 *
 */
