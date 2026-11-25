#include <iostream>
using namespace std;
int countDigit(int n, int d) {
    if (n < 10) {
        return n == d ? 1 : 0;
    }
    int digit = n % 10;
    return countDigit(n / 10, d) + (digit == d ? 1 : 0);
}
int main() {
    int n, d;
    cin >> n >> d;
    cout << countDigit(n, d);
    return 0;
}
