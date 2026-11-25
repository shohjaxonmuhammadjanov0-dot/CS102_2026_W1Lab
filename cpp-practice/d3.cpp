// Read 𝑛(2 ≤ 𝑛 ≤ 105). Replace 𝑛 by the sum of its primefactors, counted with repetition (12 =
// 2·2·3 → 7), again and again until it stops changing; print the final value. Write int
// sumPrimeFactors(int n) and int smallestValue(int n).
#include <iostream>
using namespace std;
int sumPrimeFactors(int n) {
    int sum = 0;
    for (int a = 2; a <= n; ++a) {
        while (n % a == 0) {
            sum += a;
            n /= a;
        }
    }
    return sum;
}
int smallestValue(int n) {
    int next = sumPrimeFactors(n);
    while (next != n) {
        n = next;
        next = sumPrimeFactors(n);
    }
    return n;
}
int main() {
    int n;
    cin >> n;
    cout << smallestValue(n);
}