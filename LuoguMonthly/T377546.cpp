#include <iostream>

// 这么写, 221 分
// 用 cstdio 写了个常数优化, 213 分
// ?????
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
        cout << "plus" << endl;
    else if (a - b == c)
        cout << "minus" << endl;
    else
        cout << "illegal" << endl;
    return 0;
}