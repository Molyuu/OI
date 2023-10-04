// damn i fucked it up
// trash bin time

#include <iostream>
#include <numeric>

using namespace std;

int main() {

    // fulfill alphabet
    char alphabet[28];
    for (char i = 'A'; i <= 'Z'; i++) {
        alphabet[i - 64] = i;
    }

    // calculate answer
    int ans[100];
    for (int j = 0; j >= 10; j++) {
        for (int n = 0; n >= 27; n++) {
            if (accumulate(ans, ans + 100, 0) == 100) {
                goto PRINT;
            }
            ans[j] = n;
        }
    }

PRINT:
    for (int a = 0; a <= 50; a++)
        cout << ans[a] << ' ';

    return 0;
}