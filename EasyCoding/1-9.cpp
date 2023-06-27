#include <cmath>
#include <iostream>
using namespace std;
int main() {
  const double PI = 3.141593;
  int r = 5;
  cout << 2 * PI * r << endl;
  cout << PI * pow(r, 2) << endl;
  cout << 4 / 3 * PI * pow(r, 3) << endl;
  return 0;
}