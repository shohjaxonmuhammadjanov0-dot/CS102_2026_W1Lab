#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string numeral;
    cin >> n >> numeral;

    int total = 0;
    int previous = 0;

    for (int i = 0; i < n; i++) {
        int value;

        switch (numeral[i]) {
            case 'I':
                value = 1;
                break;
            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
        }

        if (value > previous) {
            total += value - 2 * previous;
        } else {
            total += value;
        }

        previous = value;
    }

    cout << total << endl;
    return 0;
}