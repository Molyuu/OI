#include <iostream>
using namespace std;

int main() {
    int num, ans;
    cin >> num;
    int fish[num] = {0};
    for (int i = 0; i < num; i++) {
        cin >> fish[i];
    }
    for (int i = 0; i < num; i++) {
        ans = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (fish[j] < fish[i]) {
                ans++;
            }
        }
        cout << ans << ' ';
    }

    return 0;
}