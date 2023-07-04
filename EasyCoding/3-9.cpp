#include <iostream>
using namespace std;
int main() {
    int y, m;
    cin >> y >> m;
    switch (m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << 31 << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << 30 << endl;
        break;
    case 2:
        if (y % 400 == 0 || y % 4 == 0 && y % 100 != 100) {
            cout << 29 << endl;
        } else {
            cout << 28 << endl;
        }
        break;
    default:
        break;
    }

    return 0;
}