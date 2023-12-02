#include <iostream>
#include <deque>
using namespace std;

int max_mood(int n, int k, int mood[]) {
    for (int i = 0; i < n; i++) {
        if (mood[i] == k) mood[i] = 0;
    }
    deque<int> queue;
    int total = 0;
    int max_total = 0;
    for (int i = 0; i < n; i++) {
        queue.push_back(mood[i]);
        total += mood[i];
        while (total >= k) {
            total -= queue.front();
            queue.pop_front();
        }
        max_total = max(max_total, total);
    }
    return max_total;
}

int main() {
    int n, k;
    cin >> n >> k;
    int mood[n];
    for (int i = 0; i < n; i++) {
        cin >> mood[i];
    }
    cout << max_mood(n, k, mood) << endl;
    return 0;
}
