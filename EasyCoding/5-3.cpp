#include <iostream>
using namespace std;

int main() {
    int n, buffer[210] = {0}, tmp = 0;
    cin >> n;
    while (n != 1) {
        buffer[tmp] = n;
        tmp++;
        if (n % 2 == 1) {
            n = n * 3 + 1;
        } else {
            n = n / 2;
        }
    }
    tmp--;
    cout << 1 << ' ';
    for (int i = tmp; i >= 0; i--) {
        cout << buffer[i] << ' ';
    }

    return 0;
}