#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (true) {
        int sum = 0;

        while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
        }

        if (sum == 1) {
        cout << "true" << endl;
        break;
        }

        if (sum == 4) {
        cout << "false" << endl;
        break;
        }

        n = sum;
    }

    return 0;
}