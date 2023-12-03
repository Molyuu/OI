#include <bits/stdc++.h>
using namespace std;

double a[11], maxx = -2e9;
int ans;

int main() {
    a[0] = 1;
    for (int i = 1; i <= 9; i++) {
        cin >> a[i];
    }
    a[10] = 10000;
    for (int i = 1; i <= 10; i++) {
        double x = a[i] / a[i - 1];
        if (x > maxx) {
            maxx = x;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}