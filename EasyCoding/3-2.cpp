#include <iostream>
using namespace std;
int main() {
    int x;
    bool p1, p2;
    cin >> x;
    p1 = x % 2 == 0;
    p2 = 4 < x && x <= 12;
    cout << (p1 && p2) << ' ';
    cout << (p1 || p2) << ' ';
    cout << (p1 ^ p2) << ' ';
    cout << (!p1 && !p2);
    return 0;
