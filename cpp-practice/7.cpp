#include <iomanip>
#include <iostream>
using namespace std;
double helper(double x, long long n) {
    if (n == 0) {
        return 1;
    }
    double half = helper(x, n / 2);
    double result = half * half;
    if (n % 2 != 0) {
        result *= x;
    }
    return result;
}
double myPow(double x, int n) {
    if (n < 0) {
        return 1.0 / helper(x, -static_cast<long long>(n));
    }
    return helper(x, n);
}
int main() {
    double x;
    int n;
    cin >> x >> n;
    cout << fixed << setprecision(5) << myPow(x, n);
    return 0;
}
