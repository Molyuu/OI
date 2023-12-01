#include <iostream>
#include <string>

using namespace std;

bool isBinary(string number) {
    int lens = number.length();
    for (int i = 0; i < lens; i++) {
        if (number[i] != '0' && number[i] != '1') {
            return false;
        }
    }
    return true;
}

bool isOctal(string number) {
    int lens = number.length();
    for (int i = 0; i < lens; i++) {
        if (number[i] != '0' && number[i] != '1' && number[i] != '2' &&
            number[i] != '3' && number[i] != '4' && number[i] != '5' &&
            number[i] != '6' && number[i] != '7') {
            return false;
        }
    }
    return true;
}

bool isDecimal(string number) {
    int lens = number.length();
    for (int i = 0; i < lens; i++) {
        if (number[i] != '0' && number[i] != '1' && number[i] != '2' &&
            number[i] != '3' && number[i] != '4' && number[i] != '5' &&
            number[i] != '6' && number[i] != '7' && number[i] != '8' &&
            number[i] != '9') {
            return false;
        }
    }
    return true;
}

bool isHexadecimal(string number) {
    int lens = number.length();
    for (int i = 0; i < lens; i++) {
        char c = number[i];
        if (c != '0' && c != '1' && c != '2' && c != '3' && c != '4' &&
            c != '5' && c != '6' && c != '7' && c != '8' && c != '9' &&
            c != 'A' && c != 'a' && c != 'B' && c != 'b' && c != 'C' &&
            c != 'c' && c != 'D' && c != 'd' && c != 'E' && c != 'e' &&
            c != 'F' && c != 'f') {
            return false;
        }
    }
    return true;
}
int main() {
    string number[10000];
    int N;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }

    for (int j = 0; j < N; j++) {
        cout << isBinary(number[j]) << " " << isOctal(number[j]) << " "
             << isDecimal(number[j]) << " " << isHexadecimal(number[j]);
        if (j < N - 1)
            cout << endl;
    }

    return 0;
}