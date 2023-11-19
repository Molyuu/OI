#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

void write(int a) {
    if (a == 4) {
        printf("4=2+2\n");
        return;
    }

    for (int i = 3; i + 2 <= a; i += 2) {
        if (is_prime(i) && 2 + i == a) {
            printf("%d=2+%d\n", a, i);
            return;
        }
    }

    for (int i = 3; i + 3 <= a; i += 2) {
        if (is_prime(i) && is_prime(a - i)) {
            printf("%d=%d+%d\n", a, min(i, a - i), max(i, a - i));
            return;
        }
    }
}

unsigned long long n;

int main() {
    cin >> n;
    for (int i = 4; i <= n; i += 2)
        write(i);
    
    return 0;
}
