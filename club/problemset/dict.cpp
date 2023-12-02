// 其实这个题没必要那么复杂（（
// 用一些字符串的函数就可以很方便的解决这个问题了

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minDistance(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();

    if (n * m == 0)
        return n + m;

    vector<vector<int>> D(n + 1, vector<int>(m + 1));

    for (int i = 0; i < n + 1; i++) {
        D[i][0] = i;
    }
    for (int j = 0; j < m + 1; j++) {
        D[0][j] = j;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            int left = D[i - 1][j] + 1;
            int down = D[i][j - 1] + 1;
            int left_down = D[i - 1][j - 1];
            if (word1[i - 1] != word2[j - 1])
                left_down += 1;
            D[i][j] = min(left, min(down, left_down));
        }
    }
    return D[n][m];
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<string> dict(n), word(q), results(q);
    for (int i = 0; i < n; i++)
        cin >> dict[i];
    for (int i = 0; i < q; i++)
        cin >> word[i];

    for (int i = 0; i < q; i++) {
        results[i] = "No";
        for (int j = 0; j < n; j++) {
            if (minDistance(word[i], dict[j]) <= 1) {
                results[i] = dict[j];
            }
        }
    }

    for (int i = 0; i < q; i++) {
        cout << results[i] << endl;
    }
    return 0;
}
