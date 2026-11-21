#include <iostream>
using namespace std;
int removeDigits(int n, int d) {
    int result = 0, place = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit != d) {
            result = result + place * digit;
            place *= 10;
        }
        n /= 10;
    }
    return result;
}
int main() {
    int n, k;
    cin >> n >> k;
    cout << removeDigits(n, k) << endl;
    return 0;
}
