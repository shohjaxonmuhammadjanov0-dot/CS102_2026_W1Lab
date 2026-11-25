#include <iostream>
using namespace std;

bool isSelfDividing(int x) {
    int original = x;

    while (x > 0) {
        int digit = x % 10;

        if (digit == 0 || original % digit != 0) {
            return false;
        }

        x /= 10;
    }

    return true;
}

int main() {
    int left, right;
    cin >> left >> right;

    bool found = false;

    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            if (found) {
                cout << " ";
            }

            cout << i;
            found = true;
        }
    }

    if (!found) {
        cout << "none";
    }

    cout << endl;
    return 0;
}