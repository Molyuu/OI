#include <iostream>
using namespace std;

int main() {
    int block[55][55], n = 0, m = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int a = x1; a < x2; a++) {
            for (int b = y1; b < y2; b++) {
                block[a][b]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << block[i][j];
            if (j == n) {
                cout << "\n";
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}