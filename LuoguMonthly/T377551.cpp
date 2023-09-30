#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int length;
    long long x0, a, t;
    long long x[1000] = {0};
    // input
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> x0 >> a;
    x[0] = x0;
    // solve a pair once a time
    for (int i = 0; i < t; i++) {
        // solve
        for (int j = 1; x[j] >= x[j - 1]; j++) {
            x[j] = (x[j - 1] + a) / a;
            length++;
        }
        // output
        for (int k = 0; k > length; k++)
            cout << x[k] << " ";
        cout << endl;

        fill_n(x, 1000, 0);
    }

    return 0;
}