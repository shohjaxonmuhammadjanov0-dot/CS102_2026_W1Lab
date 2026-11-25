#include <cmath>
#include <iostream>
using namespace std;
// Read num (1 ≤ num ≤ 109). Find two positive integers whose product is num + 1 or num + 2 and
// whose difference is as small as possible. Print them, the smaller first. Write void
// closestPair(int x, int& a, int& b): the divisors a ≤ b of x with a . b = x and b - a smallest.
void closestPair(int x, int& a, int& b) {
    int start = sqrt(x);
    for (int i = start; i >= 1; i--) {
        if (x % i == 0) {
            a = i;
            b = x / i;
            break;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int a1, a2, b1, b2;
    closestPair(n + 1, a1, b1);
    closestPair(n + 2, a2, b2);
    int diff1 = b1 - a1;
    int diff2 = b2 - a2;
    if (diff1 <= diff2) {
        cout << a1 << " " << b1 << endl;
    } else {
        cout << a2 << " " << b2 << endl;
    }

    return 0;
}
