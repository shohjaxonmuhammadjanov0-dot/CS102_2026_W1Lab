#include <iostream>
using namespace std;
// Read 𝑛 (2 ≤ 𝑛 ≤ 104). Find positive integers 𝑎 and 𝑏 with 𝑎 + 𝑏 = 𝑛, neither containing the digit
// 0, and 𝑎 as small as possible. Print 𝑎 and 𝑏. Write bool hasZero(int x) and void noZeroPair(int
// n, int& a, int& b).
bool hasZero(int x) {
    while (x > 0) {
        int temp = x % 10;
        if (temp == 0)
            return true;
        x /= 10;
    }
    return false;
}
void noZeroPair(int n, int& a, int& b) {
    a = 1;
    while (true) {
        b = n - a;
        if (!hasZero(a) && !hasZero(b)) {
            return;
        }
        a++;
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