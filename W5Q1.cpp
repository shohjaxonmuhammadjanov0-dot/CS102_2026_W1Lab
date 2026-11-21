#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sign = 1;

    while (n > 0) {
        int x;
        cin >> x;

        if (x == 0) {
            sign = 0;
        } else if (x < 0) {
            sign = -sign;
        }

        n--;
    }

    cout << sign << endl;

    return 0;
}