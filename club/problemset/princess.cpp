#include <cstdio>
using namespace std;

int main() {
    int a[15];
    a[0] = 1, a[10] = 10000;
    scanf("%d %d %d %d %d %d %d %d %d", &a[1], &a[2], &a[3], &a[4], &a[5],
          &a[6], &a[7], &a[8], &a[9]);

    int max_change_year = 1;
    double max_change_value = 0.0;

    for (int i = 0; i <= 10; i++) {
        double tmp1 = a[i], tmp2 = a[i - 1];
        double change_value = tmp1 / tmp2;
        if (change_value >= max_change_value) {
            max_change_value = change_value;
            max_change_year = i;
        }
    }
    printf("%d", max_change_year);
    return 0;
}