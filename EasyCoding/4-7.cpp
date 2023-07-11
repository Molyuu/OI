#include <iostream>
using namespace std;
int main() {
    long long n, sum, temp;
    cin >> n;
    for (int i = 1; i < n; i++) {
        long long temp = 1;
        for (int j = 1; j < i; j++) {
            temp *= j;
        }
        sum += temp;
    }
    cout << sum << endl;
    return 0;
}