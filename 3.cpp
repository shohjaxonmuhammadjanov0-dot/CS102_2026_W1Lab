#include <iostream>
using namespace std;
int hammingWeight(int n) {
    if (n == 0) {
        return 0;
    }
    return hammingWeight(n / 2) + (n % 2);
}
int main() {
    int n;
    cin >> n;
    cout << hammingWeight(n);
}
