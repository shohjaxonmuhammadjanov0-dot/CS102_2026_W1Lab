// Write the function int removeDigit(int n, int d), which returns n (n ≥ 0) with every occurrence
// of the digit d removed, keeping the other digits in their order: removeDigit(50205, 0) → 525,
// removeDigit(777, 7) → 0, removeDigit(1203, 5) → 1203. Work with the digits using %, / and * only:
// no string, to_string, pow or other library functions. Write only the function definition.
#include <iostream>
using namespace std;
int removeDigit(int n, int d) {
    int place = 1;
    int result = 0;
    while (n / place >= 10) {
        place *= 10;
    }
    while (place > 0) {
        int digit = (n / place) % 10;
        if (digit != d) {
            result = result * 10 + digit;
        }
        place /= 10;
    }
    return result;
}
int main() {
    int n, k;
    cin >> n >> k;
    cout << removeDigit(n, k) << endl;
    return 0;
}
