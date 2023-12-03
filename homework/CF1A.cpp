#include <cstdio>
using namespace std;

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    if (n % a == 0) {
        n /= a;
    } else {
        n = n / a + 1;
    }

    if (m % a == 0) {
        m /= a;
    } else {
        m = m / a + 1;
    }

    printf("%d", n * m);
    return 0;
}