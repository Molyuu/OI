#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int t = a - b;
        a = a - t;
        b = b + t;
    } else {
        int t = b - a;
        a = a + t;
        b = b - t;
    }
    printf("%d %d", a, b);
    return 0;
}