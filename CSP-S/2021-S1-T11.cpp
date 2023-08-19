#include <iostream>

using namespace std;

int solve(int t, int n) {
    if (t == 1)
        return 1;
    else
        return (5 * solve(t - 1, n) % n);
}
int main() {
    cout << solve(23, 23) << endl;
    return 0;
}