#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int i, ii, iii, a, b, c;
    string order;
    scanf("%d %d %d", &i, &ii, &iii);
    if (i >= ii && ii >= iii){ a = iii; b = ii; c = i; }
    if (i >= iii && iii >= ii) { a = ii; b = iii; c = i; }
    if (ii >= i && i >= iii) { a = iii; b = i; c = ii; }
    if (ii >= iii && iii >= i) { a = i; b = iii; c = ii; }
    if (iii >= ii && ii >= i) { a = i; b = ii; c = iii; }
    if (iii >= i && i >= ii) { a = ii; b = i; c = iii; }

    cin >> order;

    if (order == "ABC") { printf("%d %d %d", a, b, c); }
    if (order == "ACB") { printf("%d %d %d", a, c, b); }
    if (order == "BAC") { printf("%d %d %d", b, a, c); }
    if (order == "BCA") { printf("%d %d %d", b, c, a); }
    if (order == "CAB") { printf("%d %d %d", c, a, b); }
    if (order == "CBA") { printf("%d %d %d", c, b, a); }
    return 0;
}