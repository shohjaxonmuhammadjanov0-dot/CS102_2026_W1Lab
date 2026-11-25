// Read 𝑛 (2 ≤ 𝑛 ≤ 104). Find positive integers 𝑎 and 𝑏 with 𝑎 + 𝑏 = 𝑛, neither containing the digit
// 0, and 𝑎 as small as possible. Print 𝑎 and 𝑏. Write bool hasZero(int x) and void noZeroPair(int
// n, int& a, int& b).
#include <iostream>
using namespace std;
bool hasZero(int x) {
    while (x > 0) {
        int digit = x % 10;
        if (digit == 0) {
            return true;
        }
        x /= 10;
    }
    return false;
}
void noZeroPair(int n, int& a, int& b) {
    for (int candidateA = 1; candidateA < n; candidateA++) {
        int candidateB = n - candidateA;
        if (!hasZero(candidateA) && !hasZero(candidateB)) {
            a = candidateA;
            b = candidateB;
            return;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int a, b;
    noZeroPair(n, a, b);
    cout << a << " " << b;
    return 0;
}