#include <iostream>
using namespace std;

// Euclid's algorithm: gcd(a, b) = gcd(b, a % b)
int gcd(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  int a = 252, b = 105;
  int g = gcd(a, b);
  cout << "GCD of " << a << " and " << b << " = " << g << endl;
  cout << "LCM of " << a << " and " << b << " = " << a / g * b << endl;
}

/*
 * Output:
 *
 * GCD of 252 and 105 = 21
 * LCM of 252 and 105 = 1260
 *
 */
