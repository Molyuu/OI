#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f, min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min = c * 60 + d - a * 60 - b;
    f = min % 60;
    e = (min - f) / 60;
    printf("%d %d", e, f);
    return 0;
}