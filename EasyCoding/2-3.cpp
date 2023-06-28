#include <cmath>
#include <iostream>
using namespace std;
int main() {
  const double PI = 3.141593;
  int r1 = 4, r2 = 10;
  double V;
  int l;
  V = 4.0 / 3 * PI * pow(r1, 3) + 4.0 / 3 * PI * pow(r2, 3);
  l = pow(V, 1 / 3.0);
  cout << l << endl;
  return 0;
}