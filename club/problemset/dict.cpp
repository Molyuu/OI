#include <bits/stdc++.h>
using namespace std;

const int N = 5e1 + 10;
int n, q;
string s[N];

int main(void) {
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    while (q--) {
        int flag = 0;
        string s1, s2;
        cin >> s2;
        for (int i = 1; i <= n; i++) {
            s1 = s[i];
            int l1 = s1.size(), l2 = s2.size();
            if (s1 == s2) {
                flag = 1;
                cout << s1 << '\n';
                break;
            }
            if (abs(l1 - l2) > 1)
                continue;
            int cnt = 0;
            for (int i = 0, j = 0;; i++, j++) {
                if (s1[i] ^ s2[j]) {
                    cnt++;
                    if (cnt > 1)
                        break;
                    if (l1 > l2)
                        i++;
                    else if (l1 < l2)
                        j++;
                    else
                        i++, j++;
                }
                if (i == l1 && j == l2) {
                    flag = 1;
                    cout << s1 << '\n';
                    break;
                }
                if (i == l1 - 1 && j == l2 - 1) {
                    if (s1[i] == s2[j]) {
                        flag = 1;
                        cout << s1 << '\n';
                    }
                    break;
                }
            }
        }
        if (!flag)
            puts("No");
    }
    return 0;
}