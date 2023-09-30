#include <iostream>
using namespace std;

int main() {
    long long n, m, p, q;
    cin >> n >> m >> p >> q;

    if (n * m + m > p * q + q)
        cout << "Program ends with return value 0.";
    if (n * m + m < p * q + q)
        cout << "Segmentation fault.";
    return 0;
}

// 嘛的 AC 不能 我是大傻逼