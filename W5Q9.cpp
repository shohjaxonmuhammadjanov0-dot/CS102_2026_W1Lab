#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    long long reversed = 0;

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    cout << reversed << endl;
    return 0;
}