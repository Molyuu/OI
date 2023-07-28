#include <iostream>
using namespace std;

int main() {
    int tree[10010] = {0}, l, m, a = 0, b = 0, ans = 0;
    cin >> l >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            tree[j] = 1;
        }
    }

    for (int i = 0; i <= l; i++) {
        if (tree[i] == 0) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}