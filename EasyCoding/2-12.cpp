#include <cmath>
#include <cstdio>
using namespace std;
int main() {
    int s, v, hh, mm;
    scanf("%d %d", &s, &v);
    int t = ceil(1.0 * s / v) + 10; // 一共需要的时间

    if (t <= 480) {
        int min = 480 - t;
        mm = min % 60;
        hh = (min - mm) / 60;
    } else {
        int min = 1440 - (t - 480);
        mm = min % 60;
        hh = (min - mm) / 60;
    }

    printf("%02d:%02d\n", hh, mm);
    return 0;
}