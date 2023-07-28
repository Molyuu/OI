#include <iostream>
using namespace std;

int main() {
    int n = 0, num[110] = {0}, ans[110] = {0}, tmp;

    while (tmp != 0) {
        cin >> tmp;
        num[n] = tmp;
        n++;
    }
    n -= 2;
    while (n >= 0) {
        cout << num[n] << " ";
        n--;
    }

    return 0;
}