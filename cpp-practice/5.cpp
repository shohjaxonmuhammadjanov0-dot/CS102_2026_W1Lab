#include <iostream>
using namespace std;
bool isPowerOfFour(int n) {
    if (n == 1) {
        return true;
    }
    if (n < 0 || n % 4 != 0)
        return false;
    return isPowerOfFour(n / 4);
}
int main() {
    int n;
    cin >> n;
    cout << (isPowerOfFour(n) ? "true" : "false");
}
