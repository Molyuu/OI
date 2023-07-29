#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int student[3][1010], n, ans = 0;
    int sum[1010] = {0};
    cin >> n;

    // 读取一大坨数据
    for (int i = 1; i <= n; i++) {
        cin >> student[0][i] >> student[1][i] >> student[2][i];
    }

    // 进行一个数据的比对(x
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            sum[i] = student[0][i] + student[1][i] + student[2][i];
            sum[j] = student[0][j] + student[1][j] + student[2][j];
            if (abs(student[0][i] - student[0][j]) <= 5 &&
                abs(student[1][i] - student[1][j]) <= 5 &&
                abs(student[2][i] - student[2][j]) <= 5 &&
                abs(sum[i] - sum[j]) <= 10) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}